#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>
#include <dirent.h>
#include <time.h>
#include <sys/socket.h>
#include <netinet/tcp.h>
//#include <sys/un.h>
#ifndef __CYGWIN__
  //#include <ifaddrs.h>
  #include <arpa/inet.h>
  //#include <netpacket/packet.h>
#endif

#include <llama.h>
#include "llama-ext.h"

#if defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))
#include <signal.h>
#include <unistd.h>
#elif defined (_WIN32)
#define WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <signal.h>
#endif

#if defined(_MSC_VER)
#pragma warning(disable: 4244 4267) // possible loss of data
#endif

#define MODEL_PATH_DEFAULT "/var/models/"

// build identifier; update with the ACTUAL current time on every fllama.c
// change that gets built, not only when committing
static const char *FLLAMA_VERSION = "2026-11-08 12:35 print real ctx_params values";

// log message to stderr, prefixed with the clock time (HH:MM:SS.mmm);
// same format as the test clients' wire timestamps

static void log_msg(const char *fmt, ...) {
  struct timespec now;
  struct tm tm_buf;
  char ts[16];
  va_list ap;

  clock_gettime(CLOCK_REALTIME, &now);
  localtime_r(&now.tv_sec, &tm_buf);
  strftime(ts, sizeof ts, "%H:%M:%S", &tm_buf);

  fprintf(stderr, "%s.%03ld ", ts, now.tv_nsec / 1000000L);
  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);
  va_end(ap);
}


#define MAXIMUM_BATCH_SIZE 512
#define VRAM_RESERVE 4096
// measured in context units

static void log_callback(
  const enum ggml_log_level level, const char *text, void *
) {
  if (level == GGML_LOG_LEVEL_ERROR) {
    log_msg("%s", text);
  }
}

void initialize_llama(void) {
  ggml_log_set(log_callback, NULL);
  llama_log_set(log_callback, NULL);
  llama_backend_init();
}

static char *current_model_name;
static struct llama_model *current_model = NULL;
static struct llama_context *current_context = NULL;
static char *model_path = MODEL_PATH_DEFAULT;
static int current_context_size;
static int maximum_sequences = 1;
static int maximum_batch_size = MAXIMUM_BATCH_SIZE;
static int ubatch_size = 0; // 0 = let llama.cpp decide (defaults to n_batch)
static int minimum_context_size = 8192;
static int maximum_context_size = 32768;

llama_memory_t current_memory;

static long gpu_offload_threshold = 0;

static int mtp_predict = 0; // number of tokens to predict (0 = disabled)
// hard limit for --mtp: one draft generation is one MTP-head prediction per
// step, so no point going beyond this many heads
#define MAX_MTP_HEADS 8
// fixed lookahead buffer per sequence: main-head confirmed tokens awaiting
// the client. Bounded by the i-2 rule: at most 2 generations of
// (mtp_predict+1) tokens pending; a normal decode only runs when lookahead
// is empty, so it never adds to the bound
#define MAX_LOOKAHEAD_TOKENS (2*(MAX_MTP_HEADS+1))
// --eager: run speculative work (lookahead, MTP draft verification) in
// dedicated batches even when nothing else is pending evaluation; without it,
// speculation only piggybacks on existing evaluation passes.
static bool eager_speculation = false;
static struct llama_context *mtp_context = NULL;
// MTP catch-up state: mirrors target decodes into the MTP context so it can
// generate drafts. See common/speculative.cpp (draft-mtp) in the fork.
static int mtp_n_embd = 0;
static struct llama_batch_ext *mtp_batch = NULL;

static struct llama_model *load_model(const char *filename) {
  // compute file size
  FILE *fp = fopen(filename, "rb");
  if (!fp) {
    log_msg("Failed to open model file: %s\n", filename);
    return NULL;
  }
  fseek(fp, 0, SEEK_END);
  size_t filesize = ftell(fp);
  fclose(fp);
  log_msg("model file size: %zu bytes\n", filesize);
  struct llama_model_params model_params = llama_model_default_params();
  model_params.load_mtp = (mtp_predict > 0);
  log_msg("load_mtp = %d\n", model_params.load_mtp);
  if (filesize <= gpu_offload_threshold) {
    model_params.n_gpu_layers = 99;
    log_msg("using GPU for all layers\n");
  } else {
    model_params.n_gpu_layers = 0;
    log_msg("not using GPU for any layers\n");
  }
  return llama_model_load_from_file(filename, model_params);
}

static struct llama_context *create_context(struct llama_model *model) {
  struct llama_context_params ctx_params = llama_context_default_params();
  // unified KV cache: one shared pool of n_ctx cells for all sequences,
  // dynamic allocation per sequence, shared prefixes count only once.
  // Restores the pre-2025 flexible multi-sequence behavior.
  ctx_params.kv_unified = true;
  // Recurrent-state rollback snapshots: hybrid/SSM models (Qwen3.5 etc.)
  // store a compressed recurrent state per sequence, and seq_rm can only
  // roll that state back when snapshots exist (n_rs_seq). Lookahead + the
  // partial-confirmation / reject paths call seq_rm to rewind up to
  // (1 + mtp_predict) positions in one step; give margin so a speculative
  // turn never strands an unresolved rollback. Models without recurrent
  // layers ignore this, so it is safe to set unconditionally.
  ctx_params.n_rs_seq = 4u + 2u * (uint32_t)mtp_predict;
  log_msg("embeddings = %d\n", ctx_params.embeddings);
  log_msg("offload_kqv = %d\n", ctx_params.offload_kqv);
  log_msg("no_perf = %d\n", ctx_params.no_perf);
  log_msg("op_offload = %d\n", ctx_params.op_offload);
  log_msg("swa_full = %d\n", ctx_params.swa_full);
  log_msg("kv_unified = %d\n", ctx_params.kv_unified);
  ctx_params.n_seq_max = maximum_sequences;
  ctx_params.n_batch = maximum_batch_size;
  if (ubatch_size > 0) {
    ctx_params.n_ubatch = (uint32_t)ubatch_size;
  }
  log_msg("ctx_params.n_batch = %d\n", ctx_params.n_batch);
  log_msg("ctx_params.n_ubatch = %u\n", ctx_params.n_ubatch);
  int n_ctx_train = llama_model_n_ctx_train(model);
  int min_ctx_size = minimum_context_size;
  if (min_ctx_size > n_ctx_train) {
    min_ctx_size = n_ctx_train;
  }
  int max_ctx_size = maximum_context_size;
  if (max_ctx_size > n_ctx_train) {
    max_ctx_size = n_ctx_train;
  }
  int ctx_size_low = min_ctx_size;
  int ctx_size_high = max_ctx_size;
  int ctx_size = ctx_size_high;
  struct llama_context *ctx;
  // attempt to determine an "optimal" context size
  // do *not* use VRAM_RESERVE context units
  while (true) {
    log_msg("%d <%d..%d>\n", ctx_size, ctx_size_low, ctx_size_high);
    ctx_params.n_ctx = maximum_sequences*ctx_size+VRAM_RESERVE;
    ctx = llama_init_from_model(model, ctx_params);
    if (ctx) {
      if (ctx_size+1024 >= ctx_size_high) break;
      llama_free(ctx);
      ctx_size_low = ctx_size;
      ctx_size = (ctx_size_low+ctx_size_high)/2;
    } else {
      if (ctx_size == ctx_size_low) break;
      if (ctx_size_low+1024 >= ctx_size_high) {
        ctx_size = ctx_size_low;
      }
      ctx_size_high = ctx_size;
      ctx_size = (ctx_size_low+ctx_size_high)/2;
    }
  }
  if (ctx) {
    llama_free(ctx);
    ctx_params.n_ctx = maximum_sequences*ctx_size;
    ctx = llama_init_from_model(model, ctx_params);
    current_context_size = ctx_size;
  }
  log_msg("ctx_size = %d\n", ctx_size);
  return ctx;
}

typedef struct {
  int size;
  int length;
} ARRAY_HEADER;

void deallocate_array(void *items) {
  if (items) {
    ARRAY_HEADER *header = (ARRAY_HEADER *)items-1;
    free(header);
  }
}

extern inline int array_size(void *array) {
  if (array) {
    ARRAY_HEADER *header = (ARRAY_HEADER *)array-1;
    return header->size;
  } else {
    return 0;
  }
}

extern inline int array_length(void *array) {
  if (array) {
    ARRAY_HEADER *header = (ARRAY_HEADER *)array-1;
    return header->length;
  } else {
    return 0;
  }
}

extern inline void set_array_length(void *items, int length) {
  ARRAY_HEADER *header = (ARRAY_HEADER *)items-1;
  header->length = length;
}

#define DEFINE_ALLOCATE_ARRAY(TYPE) \
TYPE *allocate_##TYPE##_array(int size) { \
  ARRAY_HEADER *header = malloc(sizeof(ARRAY_HEADER)+size*sizeof(TYPE)); \
  if (!header) { \
    log_msg("Failed to allocate memory for " #TYPE "array\n"); \
    exit(EXIT_FAILURE); \
  } \
  header->size = size; \
  header->length = 0; \
  return (TYPE *)(header+1); \
}

// the array can be a NULL pointer
#define DEFINE_REALLOCATE_ARRAY(TYPE) \
TYPE *reallocate_##TYPE##_array(TYPE *array, int size) { \
  if (!array) return allocate_##TYPE##_array(size); \
  ARRAY_HEADER *header = (ARRAY_HEADER *)array-1; \
  if (size > header->size) { \
    if (size < 2*header->size) size = 2*header->size; \
    header = realloc(header, sizeof(ARRAY_HEADER)+size*sizeof(TYPE)); \
    if (!header) { \
      log_msg("Failed to allocate memory for " #TYPE "array\n"); \
      exit(EXIT_FAILURE); \
    } \
    header->size = size; \
  } \
  return (TYPE *)(header+1); \
}

// one or both of the arrays can be NULL pointers
// the appended array is freed
// ATTENTION: works only for simple item types (no item "destructors" called)!
#define DEFINE_APPEND_TO_ARRAY(TYPE) \
TYPE *append_to_##TYPE##_array(TYPE *items, TYPE *other_items) { \
  if (!items) return other_items; \
  if (!other_items) return items; \
  ARRAY_HEADER *header = (ARRAY_HEADER *)items-1; \
  ARRAY_HEADER *other_header = (ARRAY_HEADER *)other_items-1; \
  int new_length = header->length+other_header->length; \
  if (new_length > header->size) { \
    items = reallocate_##TYPE##_array(items, new_length); \
    header = (ARRAY_HEADER *)items-1; \
  } \
  memcpy(\
    items+header->length, other_items, other_header->length*sizeof(TYPE)); \
  header->length = new_length; \
  free(other_header); \
  return items; \
}

// the array can be a NULL pointer
// ATTENTION: works only for simple item types (no item "destructors" called)!
#define DEFINE_DELETE_FROM_ARRAY(TYPE) \
TYPE *delete_from_##TYPE##_array(TYPE *items, int index, int count) { \
  if (!items) { \
    if (index == 0 && count == 0) return NULL; \
    fprintf( \
      stderr, "Invalid index or count for deleting from " #TYPE "array\n"); \
    exit(EXIT_FAILURE); \
  } \
  ARRAY_HEADER *header = (ARRAY_HEADER *)items-1; \
  if (index < 0 || count < 0 || index+count > header->length) { \
    fprintf( \
      stderr, "Invalid index or count for deleting from " #TYPE "array\n"); \
    exit(EXIT_FAILURE); \
  } \
  if (count > 0) { \
    memmove( \
      items+index, items+index+count, \
      (header->length-index-count)*sizeof(TYPE)); \
    header->length -= count; \
  } \
  return items; \
}

// one or both of the arrays can be NULL pointers
// the inserted array is freed
// ATTENTION: works only for simple item types (no item "destructors" called)!
#define DEFINE_INSERT_INTO_ARRAY(TYPE) \
TYPE *insert_into_##TYPE##_array(TYPE *items, int index, TYPE *other_items) { \
  ARRAY_HEADER *header = (ARRAY_HEADER *)items-1; \
  ARRAY_HEADER *other_header = (ARRAY_HEADER *)other_items-1; \
  if (index < 0 || index > header->length) { \
    log_msg("Invalid index %d for inserting into " #TYPE " array of length %d\n", index, header->length); \
    exit(EXIT_FAILURE); \
  } \
  int new_length = header->length + other_header->length; \
  if (new_length > header->size) { \
    items = reallocate_##TYPE##_array(items, new_length); \
    header = (ARRAY_HEADER *)items-1; \
  } \
  memmove(\
    items+index+other_header->length, items+index, \
    (header->length-index)*sizeof(TYPE)); \
  memcpy(items+index, other_items, other_header->length*sizeof(TYPE)); \
  header->length = new_length; \
  free(other_header); \
  return items; \
}

// the array can be a NULL pointer
// ATTENTION: works only for simple item types
#define DEFINE_INSERT_VALUE_INTO_ARRAY(TYPE) \
TYPE *insert_value_into_##TYPE##_array( \
  TYPE *items, int index, int count, TYPE value) { \
  if (count <= 0) return items; \
  ARRAY_HEADER *hdr = (ARRAY_HEADER *)items-1; \
  if (index < 0 || index > hdr->length) { \
    log_msg(\
      "Invalid index %d for inserting into " #TYPE " array of length %d\n", \
      index, hdr->length); \
    exit(EXIT_FAILURE); \
  } \
  int new_length = array_length(items)+count; \
  items = reallocate_##TYPE##_array(items, new_length); \
  ARRAY_HEADER *header = (ARRAY_HEADER *)items-1; \
  memmove(\
    items+index+count, items+index, (header->length-index)*sizeof(TYPE)); \
  for (int i = index; i < index+count; i++) { \
    items[i] = value; \
  } \
  header->length = new_length; \
  return items; \
}

// the array can be a NULL pointer
#define DEFINE_PUSH_TO_ARRAY(TYPE) \
TYPE *push_to_##TYPE##_array(TYPE *items, TYPE value) { \
  int new_length = array_length(items)+1; \
  items = reallocate_##TYPE##_array(items, new_length); \
  ARRAY_HEADER *header = (ARRAY_HEADER *)items-1; \
  items[header->length++] = value; \
  return items; \
}

// the array can be a NULL pointer
// set items[index] = value; grows as needed and extends the logical length,
// filling [old_length..index) with default values, so every index below the
// new length is valid — keeps dense-index use (e.g. index = fd) safe
#define DEFINE_SET_ITEM_AT_ARRAY(TYPE) \
TYPE *set_item_at_##TYPE##_array(TYPE *items, int index, TYPE value) { \
  if (index < 0) { \
    log_msg(\
      "Invalid index %d for setting into " #TYPE " array\n", index); \
    exit(EXIT_FAILURE); \
  } \
  items = reallocate_##TYPE##_array(items, index+1); \
  ARRAY_HEADER *header = (ARRAY_HEADER *)items-1; \
  if (index >= header->length) { \
    for (int i = header->length; i < index; ++i) { \
      TYPE zero_value = {0}; \
      items[i] = zero_value; \
    } \
    header->length = index+1; \
  } \
  items[index] = value; \
  return items; \
}

DEFINE_ALLOCATE_ARRAY(int)
DEFINE_REALLOCATE_ARRAY(int)
DEFINE_APPEND_TO_ARRAY(int)
DEFINE_INSERT_INTO_ARRAY(int)
DEFINE_INSERT_VALUE_INTO_ARRAY(int)
DEFINE_DELETE_FROM_ARRAY(int)
DEFINE_PUSH_TO_ARRAY(int)

DEFINE_ALLOCATE_ARRAY(bool)

// per-client receive-buffer state, indexed by file-descriptor number;
// dense like the other arrays: index = fd, grown via reallocate_*_array
typedef struct {
  char *buf;   // NULL = no data received from this client yet
  long size;
  long length;
} RCV_SLOT;

DEFINE_ALLOCATE_ARRAY(RCV_SLOT)
DEFINE_REALLOCATE_ARRAY(RCV_SLOT)
DEFINE_SET_ITEM_AT_ARRAY(RCV_SLOT)

void dump_int_array(int *items) {
  if (items) {
    ARRAY_HEADER *header = (ARRAY_HEADER *)items-1;
    log_msg(
      "INT_ARRAY: size=%d, length=%d\n", header->size, header->length);
    for (int i = 0; i < header->length; i++) {
      log_msg("  [%d] = %d\n", i, items[i]);
    }
  } else {
    log_msg("INT_ARRAY: NULL\n");
  }
}

void dump_bool_array(bool *items) {
  if (items) {
    ARRAY_HEADER *header = (ARRAY_HEADER *)items-1;
    log_msg(
      "BOOL_ARRAY: size=%d, length=%d\n", header->size, header->length);
    for (int i = 0; i < header->length; i++) {
      log_msg("  [%d] = %d\n", i, items[i]);
    }
  } else {
    log_msg("BOOL_ARRAY: NULL\n");
  }
}

#define SEND_BUF_SIZE 0x100000

static char send_buf[SEND_BUF_SIZE];
static size_t send_buf_len = 0;
static int send_fd = -1;

static void flush(void) {
  if (send_buf_len > 0 && send_fd >= 0) {
    log_msg("sending %zu bytes to %d\n", send_buf_len, send_fd);
    ssize_t n = write(send_fd, send_buf, send_buf_len);
    (void)n; // ignore errors: single-client test server
    send_buf_len = 0;
    send_fd = -1;
  }
}

static void send_message(int fd, const char *msg, size_t len) {
  if (fd != send_fd) {
    flush();
    send_fd = fd;
  }
  if (len > SEND_BUF_SIZE) {
    flush();
    log_msg("sending %zu bytes to %d\n", len, fd);
    ssize_t n = write(fd, msg, len);
    (void)n; // ignore errors: single-client test server
  } else {
    if (send_buf_len+len > SEND_BUF_SIZE) flush();
    memcpy(send_buf+send_buf_len, msg, len);
    send_buf_len += len;
  }
}

static int *tokenize(struct llama_model *model, const char *text) {
  const struct llama_vocab *vocab = llama_model_get_vocab(model);
  int32_t len = -llama_tokenize(
    vocab, text, strlen(text), NULL, 0, true, false);
  int *tokens = allocate_int_array(len);
  int n = llama_tokenize(
    vocab, text, strlen(text), tokens, len, true, false);
  if (n < 0) {
    deallocate_array(tokens);
    return NULL;
  } else {
    set_array_length(tokens, n);
    return tokens;
  }
}

typedef struct {
  int token;
  float logit;
} CONFIDENCE;

static int compare_confidences(const void *left, const void *right) {
  if (((CONFIDENCE *)left)->logit < ((CONFIDENCE *)right)->logit)
    return 1;
  else if (((CONFIDENCE *)left)->logit > ((CONFIDENCE *)right)->logit)
    return -1;
  else
    return 0;
}

// fill the top-10 (token, logit) pairs from a full logits row, sorted descending
static void fill_top_confidences(CONFIDENCE *c, const float *logits, int n_vocab) {
  int k;
  for (k = 0; k < 10; ++k) {
    c[k].token = k;
    c[k].logit = logits[k];
  }
  qsort(c, 10, sizeof(CONFIDENCE), compare_confidences);
  while (k < n_vocab) {
    float logit = logits[k];
    if (logit > c[9].logit) {
      // find insertion position
      int j;
      for (j = 8; j >= 0; --j) {
        if (logit <= c[j].logit) break;
      }
      // move entries
      memmove(&c[j+2], &c[j+1], (8-j)*sizeof(CONFIDENCE));
      c[j+1].token = k;
      c[j+1].logit = logit;
    }
    ++k;
  }
}

static void list_models(int client_fd) {
  fprintf(stderr, "list_models\n");
  char *path = model_path;
  DIR *dir = opendir(path);
  if (dir) {
    struct dirent *entry;
    int buf_size = 0;
    while ((entry = readdir(dir)) != NULL) {
      if (entry->d_type == DT_REG) {
        char *filename = entry->d_name;
        buf_size += strlen(filename)+1;
      }
    }
    char *buf = malloc(128+buf_size);
    char *p = buf+sprintf(buf, "models %d", buf_size);
    rewinddir(dir);
    while ((entry = readdir(dir)) != NULL) {
      if (entry->d_type == DT_REG) {
        char *filename = entry->d_name;
        *p++ = ' ';
        p = stpcpy(p, filename);
      }
    }
    closedir(dir);
    ssize_t n = write(client_fd, buf, p+1-buf);
    (void)n; // ignore errors: single-client test server
    free(buf);
  } else {
    send_message(client_fd, "error opening model directory", 30);
  }
}

#define INVALID -1

typedef struct {
  int client_fd; // file descriptor of the socket to the client
    // INVALID: unused entry
    // 0: shared session
  size_t session_size; // size of the session data in bytes;
  uint8_t *session_data; // session data;
  // MTP catch-up must stay in sync with the target context, so each session
  // also snapshots the MTP context state (empty when MTP is disabled).
  size_t mtp_session_size;
  uint8_t *mtp_session_data;
} SESSION;

static int current_session_id = 0;

static SESSION *sessions = NULL;

DEFINE_ALLOCATE_ARRAY(SESSION)
DEFINE_REALLOCATE_ARRAY(SESSION)

static int current_session_per_client[1024];

static void change_session(int client_fd, int new_session_id) {
  if (new_session_id == current_session_id) return;

  // save current session

  if (current_session_id != INVALID) {
    log_msg("save session %d\n", current_session_id);
    SESSION *current_session = &sessions[current_session_id];
    size_t current_session_size = llama_state_get_size(current_context);
    current_session->session_size = current_session_size;
    current_session->session_data = malloc(current_session_size);
    if (current_session->session_data) {
      size_t saved = llama_state_get_data(
        current_context, current_session->session_data, current_session_size);
      if (saved != current_session_size) {
        log_msg("llama_state_get_data failed: saved %zu of %zu bytes\n", saved, current_session_size);
        exit(EXIT_FAILURE);
      }
      fprintf(
        stderr, "saved session %d, size = %zu\n",
        current_session_id, current_session_size);
      // snapshot the MTP context state in sync (if active)
      free(current_session->mtp_session_data);
      current_session->mtp_session_data = NULL;
      current_session->mtp_session_size = 0;
      if (mtp_context) {
        size_t mtp_size = llama_state_get_size(mtp_context);
        if (mtp_size > 0) {
          current_session->mtp_session_data = malloc(mtp_size);
          if (current_session->mtp_session_data) {
            size_t saved_mtp = llama_state_get_data(
              mtp_context, current_session->mtp_session_data, mtp_size);
            if (saved_mtp != mtp_size) {
              log_msg("llama_state_get_data failed for MTP: saved %zu of %zu bytes\n", saved_mtp, mtp_size);
              exit(EXIT_FAILURE);
            }
            current_session->mtp_session_size = mtp_size;
          }
        }
      }
    } else {
      log_msg("failed to allocate memory for session data\n");
      send_message(
        client_fd, "error failed to allocate memory for session data", 58);
    }
  }

  // load new session

  log_msg("load session %d\n", new_session_id);
  SESSION *new_session = &sessions[new_session_id];
  if (new_session->session_data) {
    size_t loaded = llama_state_set_data(
      current_context, new_session->session_data, new_session->session_size);
    if (loaded != new_session->session_size) {
      log_msg("llama_state_set_data failed: loaded %zu of %zu bytes\n", loaded, new_session->session_size);
      exit(EXIT_FAILURE);
    }
      fprintf(
        stderr, "loaded session %d, size = %zu\n",
        new_session_id, new_session->session_size);
  } else {
    llama_memory_clear(current_memory, true);
  }
  // restore the MTP context state in sync (if active and snapshot present)
  if (mtp_context) {
    if (new_session->mtp_session_data && new_session->mtp_session_size > 0) {
      size_t loaded_mtp = llama_state_set_data(
        mtp_context, new_session->mtp_session_data, new_session->mtp_session_size);
      if (loaded_mtp != new_session->mtp_session_size) {
        log_msg("llama_state_set_data failed for MTP: loaded %zu of %zu bytes\n", loaded_mtp, new_session->mtp_session_size);
        exit(EXIT_FAILURE);
      }
    } else {
      llama_memory_clear(llama_get_memory(mtp_context), true);
    }
  }
  current_session_id = new_session_id;
}

// Sequence States

#define UNMODIFIED 0
#define MODIFIED 1
#define PREFILL 2
#define GENERATING 3
// a partial lookahead confirmation left a replacement token (next_token) that
// must be decoded into the KV on the next run before the chain is complete
#define PENDING_LOOKAHEAD 4

char *sequence_state_names[] =
  {"unmodified", "modified", "prefill", "generating",
   "pending_lookahead"};

// checkpoint struct (SWA/KV state snapshot); data == NULL means the
// checkpoint is deleted; tag ("1"/"2") is used in log messages

typedef struct {
  uint8_t *data;
  size_t size;
  llama_pos pos;
  const char *tag;
} CHECKPOINT;

// Token State

typedef struct {
  int client_fd; // file descriptor of the socket to the client;
  int client_id; // the sequence id used by the client
  int sequence_id; // a zero based id within the session
  int session_id; // the session to which this sequence belongs
  int state; // see "Sequence States" above
  int tokens_added; // total number of tokens added to the sequence
  int evaluation_position; // last evaluated position
  bool was_shifted; // parts of the sequence were shifted
  // MTP catch-up: last-seen h_nextn row of the target at this sequence's last
  // decoded position (zeros until the first catch-up pass)
  float *mtp_pending_h;
  // three-layer sequence model (§22): tokens + lookahead_tokens +
  // draft_tokens = whole sequence
  //   tokens:           confirmed by the client (add_tokens)
  //   lookahead_tokens: confirmed by the main head, in the KV; wait for the
  //                     client's confirmation (fast-path match target)
  //   draft_tokens:     raw MTP predictions; the main head decodes and
  //                     confirms them on the next speculative turn
  // tokens shift from one array to the other on confirmation:
  //   draft -> lookahead (main head confirms, speculative turn)
  //   lookahead -> tokens (client claims, fast path)
  int lookahead_tokens[MAX_LOOKAHEAD_TOKENS];
  int n_lookahead_tokens;
  int draft_tokens[MAX_MTP_HEADS];
  int n_draft_tokens;
  // replacement token from a partial lookahead confirmation; decoded
  // into the KV in state PENDING_LOOKAHEAD before rejoining the chain
  int pending_token;
  // set by the replacement-token decode (PENDING_LOOKAHEAD): its logits
  // predict the first position beyond the settled content; sent as the
  // next logits sync point when the client claims the whole chain
  bool frontier_confidence;
  CONFIDENCE frontier_confidences[10];
  // the lookahead chain holds tokens already decoded into the KV (speculative
  // verification / PENDING replacement decodes); a plain-decode prediction
  // (lookahead[0] only) is NOT in the KV until claimed and decoded
  bool chain_decoded;
  // i-2 gate (§22): reached-length history for speculative scheduling.
  // prev_length      = length reached at end of turn n-1
  // prev_prev_length = length reached at end of turn n-2
  // speculation is allowed at turn n only when the client's confirmed
  // length has caught up to prev_prev_length (it fully confirmed n-2)
  int prev_length;
  int prev_prev_length;
  int *tokens; // the unevaluated tokens
  int *positions; // -1 for new tokens
  CONFIDENCE confidences[10]; // the top 10 confidences for the next token
} SEQUENCE;

DEFINE_ALLOCATE_ARRAY(SEQUENCE)
DEFINE_REALLOCATE_ARRAY(SEQUENCE)

// format one of the fixed token arrays as a space-separated string for dumps
static void fill_tokens_array_str(char *buf, int bufsize, const int *tokens, int n) {
  int p = 0;
  for (int i = 0; i < n && p + 12 < bufsize; ++i) {
    p += sprintf(buf + p, "%s%d", i ? " " : "", tokens[i]);
  }
}

static const char *lookahead_tokens_str(SEQUENCE *sequence) {
  static char buf[256];
  fill_tokens_array_str(buf, sizeof(buf), sequence->lookahead_tokens, sequence->n_lookahead_tokens);
  return buf;
}

static const char *draft_tokens_str(SEQUENCE *sequence) {
  static char buf[256];
  fill_tokens_array_str(buf, sizeof(buf), sequence->draft_tokens, sequence->n_draft_tokens);
  return buf;
}

static void dump_sequence(SEQUENCE *sequence) {
  if (sequence->state == INVALID) {
    log_msg("SEQUENCE: invalid\n");
  } else {
    log_msg(
      "SEQUENCE: %p\n"
      "  client_fd: %d\n"
      "  client_id: %d\n"
      "  state: %s\n"
      "  tokens_added: %d\n"
      "  evaluation_position: %d\n"
      "  was_shifted: %d\n"
      "  lookahead_tokens(%d): %s\n"
      "  draft_tokens(%d): %s\n",
      sequence,
      sequence->client_fd, sequence->client_id,
      sequence_state_names[sequence->state],
      sequence->tokens_added, sequence->evaluation_position,
      sequence->was_shifted,
      sequence->n_lookahead_tokens, lookahead_tokens_str(sequence),
      sequence->n_draft_tokens, draft_tokens_str(sequence));
    log_msg("TOKENS: ");
    dump_int_array(sequence->tokens);
    log_msg("POSITIONS: ");
    dump_int_array(sequence->positions);
    log_msg("CONFIDENCES:\n");
    for (int i = 0; i < 10; ++i) {
      log_msg("  %d:%f\n",
        sequence->confidences[i].token, sequence->confidences[i].logit);
    }
  }
}

static void dump_sequence_array(SEQUENCE *sequences) {
  for (int i = 0; i < array_length(sequences); ++i) {
    log_msg("[%d]:\n", i);
    dump_sequence(&sequences[i]);
  }
}

static void dump_batch(struct llama_batch *batch) {
  log_msg(
    "BATCH:\n"
    "total tokens: %d\n",
    batch->n_tokens);
  for (int i = 0; i < batch->n_tokens; ++i) {
    log_msg(
      "  [%4d] token = %6d, pos = %5d, sequences = %d (",
      i, batch->token[i], batch->pos[i], batch->n_seq_id[i]);
    for (int j = 0; j < batch->n_seq_id[i]; ++j) {
      if (j > 0) log_msg(", ");
      log_msg("%d", batch->seq_id[i][j]);
    }
    log_msg(")\n");
  }
}

static SEQUENCE *sequences = NULL;

// checkpoint helpers (see CHECKPOINT).
// Save/restore a partial checkpoint of the sequence's KV state;
// needed for rollbacks deeper than n_rs_seq allows.

static void create_checkpoint(SEQUENCE *sequence, CHECKPOINT *cp) {
  // the caller is responsible for deleting an existing checkpoint first
  struct llama_context *ctx = current_context;
  size_t s = llama_state_seq_get_size_ext(
    ctx, sequence->sequence_id, LLAMA_STATE_SEQ_FLAGS_PARTIAL_ONLY);
  if (s == 0) {
    log_msg(
      "no partial state to checkpoint in sequence %d\n",
      sequence->sequence_id);
    return;
  }
  uint8_t *blob = malloc(s);
  if (!blob) {
    log_msg(
      "failed to allocate %zu bytes for checkpoint %s of sequence %d\n",
      s, cp->tag, sequence->sequence_id);
    return;
  }
  size_t n = llama_state_seq_get_data_ext(
    ctx, blob, s, sequence->sequence_id, LLAMA_STATE_SEQ_FLAGS_PARTIAL_ONLY);
  if (n != s) {
    log_msg(
      "checkpoint %s size mismatch in sequence %d: "
      "expected %zu bytes, got %zu\n",
      cp->tag, sequence->sequence_id, s, n);
    free(blob);
    return;
  }
  cp->data = blob;
  cp->size = s;
  cp->pos = llama_memory_seq_pos_max(llama_get_memory(ctx),
    sequence->sequence_id) + 1;
  log_msg(
    "creating checkpoint %s in sequence %d at position %d\n",
    cp->tag, sequence->sequence_id, cp->pos);
}

static void delete_checkpoint(SEQUENCE *sequence, CHECKPOINT *cp) {
  if (!cp->data) return;
  log_msg(
    "deleting checkpoint %s of sequence %d at position %d\n",
    cp->tag, sequence->sequence_id, cp->pos);
  free(cp->data);
  cp->data = NULL;
}

// MTP draft generation (defined after handle_evaluate)
static void draft_mtp_logits(SEQUENCE **draft_seqs, int n_draft_seqs);
// frees all per-sequence aux state (lookahead checkpoint + MTP buffers)
static void free_sequence_aux(SEQUENCE *sequence);

static int get_sequence_idx(int client_fd, int client_id) {
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (
      sequence->state != INVALID &&
      sequence->client_fd == client_fd &&
      sequence->client_id == client_id
    ) return i;
  }
  return -1;
}

static int create_sequence(int client_fd, int client_id) {
  // look for unused slot
  bool used_sequence_ids[32]; // max. 32 sequences per session
  memset(used_sequence_ids, false, sizeof(used_sequence_ids));
  int session_id = current_session_per_client[client_fd];
  int i, idx;
  idx = -1;
  for (i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state == INVALID) {
      if (idx < 0) idx = i;
    } else {
      if (sequence->session_id == session_id) {
        used_sequence_ids[sequence->sequence_id] = true;
      }
    }
  }
  for (i = 0; i < 32; ++i) {
    if (!used_sequence_ids[i]) {
      break;
    }
  }
  if (i >= maximum_sequences) {
    log_msg("Maximum number of sequences reached (limit = %d)\n",
      maximum_sequences);
    return -1;
  }
  if (idx < 0) {
    // grow array
    idx = array_length(sequences);
    int n = idx+1;
    sequences = reallocate_SEQUENCE_array(sequences, n);
    set_array_length(sequences, n);
  }
  SEQUENCE *sequence = &sequences[idx];
  sequence->client_fd = client_fd;
  sequence->client_id = client_id;
  sequence->sequence_id = i;
  sequence->session_id = session_id;
  sequence->state = UNMODIFIED;
  sequence->tokens_added = 0;
  sequence->evaluation_position = -1;
  sequence->was_shifted = false;
  sequence->n_lookahead_tokens = 0;
  sequence->n_draft_tokens = 0;
  sequence->frontier_confidence = false;
  sequence->chain_decoded = false;
  // i-2 gate history starts at -1: no speculation has been reached yet,
  // so the very first turns always pass (prev_prev_length = -1)
  sequence->prev_length = -1;
  sequence->prev_prev_length = -1;
  if (mtp_n_embd > 0) {
    sequence->mtp_pending_h = calloc(mtp_n_embd, sizeof(float));
  } else {
    sequence->mtp_pending_h = NULL;
  }
  sequence->tokens = NULL;
  sequence->positions = NULL;
  log_msg("created sequence %d in session %d (client %d, id %d)\n",
    idx, session_id, client_fd, client_id);
  return idx;
}

static int copy_sequence(
  int client_fd,
  int client_id,
  int template_sequence_id,
  int token_count
) {
  int template_idx = get_sequence_idx(client_fd, template_sequence_id);
  if (template_idx < 0) {
    log_msg("copy_sequence: sequence for client %d, id %d not found\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence not found", 25);
    return -1;
  }
  SEQUENCE *template_sequence = &sequences[template_idx];
  if (template_sequence->state != GENERATING) {
    log_msg(
      "copy_sequence: sequence for client %d, id %d is not evaluated\n",
      client_fd, template_sequence_id);
    send_message(client_fd, "error sequence is not evaluated", 32);
    return -1;
  }
  int sequence_idx = create_sequence(client_fd, client_id);
  template_sequence = &sequences[template_idx]; // maybe reallocated
  SEQUENCE *sequence = &sequences[sequence_idx];
  sequence->tokens = allocate_int_array(token_count);
  sequence->positions = allocate_int_array(token_count);
  for (int i = 0; i < token_count; ++i) {
    sequence->tokens[i] = template_sequence->tokens[i];
    sequence->positions[i] = template_sequence->positions[i];
  }
  set_array_length(sequence->tokens, token_count);
  set_array_length(sequence->positions, token_count);
  sequence->state = UNMODIFIED;
  sequence->tokens_added = 0;
  sequence->evaluation_position = template_sequence->evaluation_position;
  sequence->was_shifted = false;
  log_msg("llama_memory_seq_cp(current_memory, %d, %d, 0, %d)\n",
    template_sequence->sequence_id, sequence->sequence_id, token_count);
  llama_memory_seq_cp(
    current_memory, template_sequence->sequence_id,
    sequence->sequence_id, 0, token_count);
  return sequence_idx;
}

static void free_maybe_empty_session(int client_fd, int session_id) {
  int n = 0;
  for (int i = 0; i < array_length(sequences); ++i) {
    if (
      sequences[i].state != INVALID &&
      sequences[i].session_id == session_id
    ) ++n;
  }
  if (n == 0) { // session is empty
    log_msg("freeing session %d\n", session_id);
    SESSION *session = &sessions[session_id];
    if (session_id == current_session_id) {
      llama_memory_clear(current_memory, true);
      if (mtp_context) {
        llama_memory_clear(llama_get_memory(mtp_context), true);
      }
      current_session_id = INVALID;
    } else {
      free(session->session_data);
      free(session->mtp_session_data);
    }
    session->client_fd = INVALID;
    session->session_data = NULL;
    session->session_size = 0;
    session->mtp_session_data = NULL;
    session->mtp_session_size = 0;
    if (current_session_per_client[client_fd] == session_id) {
      current_session_per_client[client_fd] = 0; // shared session
    }
  }
}

static void free_client_sequence(int client_fd, int client_id) {
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (
      sequence->state != INVALID &&
      sequence->client_fd == client_fd &&
      sequence->client_id == client_id
    ) {
      log_msg("freeing sequence %d\n", i);
      sequence->state = INVALID;
      sequence->n_lookahead_tokens = 0;
      sequence->n_draft_tokens = 0;
      deallocate_array(sequence->tokens);
      deallocate_array(sequence->positions);
      free_sequence_aux(sequence);
      change_session(client_fd, sequence->session_id);
      bool ok = llama_memory_seq_rm(current_memory, sequence->sequence_id, 0, -1);
      if (!ok) {
        log_msg("llama_memory_seq_rm failed: freeing sequence %d\n", sequence->sequence_id);
        exit(EXIT_FAILURE);
      }
      // keep the MTP context's sequence table in sync
      if (mtp_context) {
        ok = llama_memory_seq_rm(
          llama_get_memory(mtp_context), sequence->sequence_id, 0, -1);
        if (!ok) {
          log_msg("llama_memory_seq_rm failed: MTP context, freeing sequence %d\n", sequence->sequence_id);
          exit(EXIT_FAILURE);
        }
      }
      free_maybe_empty_session(client_fd, sequence->session_id);
      break;
    }
  }
}

static void free_all_client_sequences(int client_fd) {
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state != INVALID && sequence->client_fd == client_fd) {
      log_msg("freeing sequence %d\n", i);
      sequence->state = INVALID;
      sequence->n_lookahead_tokens = 0;
      sequence->n_draft_tokens = 0;
      deallocate_array(sequence->tokens);
      deallocate_array(sequence->positions);
      free_sequence_aux(sequence);
      change_session(client_fd, sequence->session_id);
      bool ok = llama_memory_seq_rm(current_memory, sequence->sequence_id, 0, -1);
      if (!ok) {
        log_msg("llama_memory_seq_rm failed: freeing sequence %d\n", sequence->sequence_id);
        exit(EXIT_FAILURE);
      }
      // keep the MTP context's sequence table in sync
      if (mtp_context) {
        ok = llama_memory_seq_rm(
          llama_get_memory(mtp_context), sequence->sequence_id, 0, -1);
        if (!ok) {
          log_msg("llama_memory_seq_rm failed: MTP context, freeing sequence %d\n", sequence->sequence_id);
          exit(EXIT_FAILURE);
        }
      }
      free_maybe_empty_session(client_fd, sequence->session_id);
    }
  }
}

// any operation other than add_tokens alters the token stream and
// invalidates the KV anchors of the lookahead chain — clear the chain
// and the drafts built on it; only pure appending preserves them
static void invalidate_lookahead(SEQUENCE *sequence) {
  if (
    sequence->n_lookahead_tokens + sequence->n_draft_tokens == 0
  ) return;
  log_msg(
    "invalidating lookahead of sequence %d: %d chain, %d draft token(s)\n",
    sequence->sequence_id, sequence->n_lookahead_tokens,
    sequence->n_draft_tokens);
  sequence->n_lookahead_tokens = 0;
  sequence->n_draft_tokens = 0;
}

static void truncate_sequence(
  int client_fd,
  int client_id,
  int token_count
) {
  int sequence_idx = get_sequence_idx(client_fd, client_id);
  if (sequence_idx < 0) {
    log_msg(
      "truncate_sequence: sequence for client %d, id %d not found\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == PREFILL) {
    log_msg(
      "truncate_sequence: sequence for client %d, id %d "
      "is currently evaluated\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  if (sequence->state == MODIFIED) {
    log_msg(
      "truncate_sequence: sequence for client %d, id %d was modified\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence was modified", 28);
    return;
  }
  if (token_count < 0) {
    log_msg(
      "truncate_sequence: sequence for client %d, id %d "
      "token_count is negative\n",
      client_fd, client_id);
    send_message(client_fd, "error token_count is negative", 30);
    return;
  }
  if (token_count < array_length(sequence->tokens)) {
    invalidate_lookahead(sequence);
    set_array_length(sequence->tokens, token_count);
    set_array_length(sequence->positions, token_count);
    sequence->state = MODIFIED;
  }
}

static void add_tokens(
  int client_fd,
  int client_id,
  int *tokens
) {
  int sequence_idx = get_sequence_idx(client_fd, client_id);
  if (sequence_idx < 0) {
    log_msg("add_tokens: sequence for client %d, id %d not found\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == PREFILL) {
    log_msg(
      "add_tokens: sequence for client %d, id %d is currently evaluated\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  int pos = array_length(sequence->tokens);
  sequence->tokens = append_to_int_array(sequence->tokens, tokens);
  int n = array_length(sequence->tokens);
  int n_added = n - pos;
  // rejection search: the added tokens align with lookahead_tokens[0] at KV
  // position `pos`; the matched prefix is consumed from the chain, the first
  // non-matching token is the rejection point and invalidates the tail
  int n_match = 0;
  if (sequence->n_lookahead_tokens > 0) {
    while (
      n_match < n_added &&
      n_match < sequence->n_lookahead_tokens &&
      sequence->tokens[pos + n_match] ==
        sequence->lookahead_tokens[n_match]
    ) {
      ++n_match;
    }
    if (n_match < n_added && n_match < sequence->n_lookahead_tokens) {
      // true rejection: tokens[pos+n_match] differs from the chain; the tail
      // beyond it is dead, as are the drafts built on top of it
      sequence->n_lookahead_tokens = 0;
      sequence->n_draft_tokens = 0;
    } else {
      int remaining = sequence->n_lookahead_tokens - n_match;
      for (int i = 0; i < remaining; ++i) {
        sequence->lookahead_tokens[i] = sequence->lookahead_tokens[n_match + i];
      }
      sequence->n_lookahead_tokens = remaining;
    }
  } else {
    // no lookahead to match against: a pending draft cannot land
    sequence->n_draft_tokens = 0;
  }
  // does the matched chain prefix already sit in the KV? chain_decoded says
  // so — with it set, record their positions (chain invariant: token j is at
  // array index pos+j) so the PREFILL pass never re-decodes them; otherwise
  // keep -1: a predicted anchor still has to be placed by some decode
  bool claimed_in_kv = sequence->chain_decoded;
  sequence->positions = reallocate_int_array(sequence->positions, n);
  for (int i = pos; i < n; ++i) {
    sequence->positions[i] =
      (claimed_in_kv && i < pos + n_match) ? i : -1;
  }
  set_array_length(sequence->positions, n);
  if (sequence->state != MODIFIED) {
    sequence->state = MODIFIED;
    sequence->tokens_added = n_added;
    sequence->was_shifted = false;
  } else {
    sequence->tokens_added += n_added;
  }
}

static void delete_tokens(
  int client_fd,
  int client_id,
  int position,
  int token_count
) {
  int sequence_idx = get_sequence_idx(client_fd, client_id);
  if (sequence_idx < 0) {
    log_msg("delete_tokens: sequence for client %d, id %d not found\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == PREFILL) {
    log_msg(
      "delete_tokens: sequence for client %d, id %d is currently evaluated\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  if (position < 0 || position > array_length(sequence->tokens)) {
    log_msg(
      "delete_tokens: position %d out of range for client %d, id %d\n",
      position, client_fd, client_id);
    send_message(client_fd, "error position out of range", 28);
    return;
  }
  if (
    token_count < 0 || position+token_count > array_length(sequence->tokens)
  ) {
    log_msg(
      "delete_tokens: token_count %d out of range for client %d, id %d\n",
      token_count, client_fd, client_id);
    send_message(client_fd, "error token_count out of range", 31);
    return;
  }
  if (token_count > 0) {
    invalidate_lookahead(sequence);
    sequence->tokens = delete_from_int_array(
      sequence->tokens, position, token_count);
    sequence->positions = delete_from_int_array(
      sequence->positions, position, token_count);
    if (sequence->state != MODIFIED) {
      sequence->state = MODIFIED;
      sequence->tokens_added = 0;
      sequence->was_shifted = false;
    }
    if (position < array_length(sequence->tokens)) {
      sequence->was_shifted = true;
    }
  }
}

static void insert_tokens(
  int client_fd,
  int client_id,
  int position,
  int *tokens
) {
  int sequence_idx = get_sequence_idx(client_fd, client_id);
  if (sequence_idx < 0) {
    log_msg("insert_tokens: sequence for client %d, id %d not found\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == PREFILL) {
    log_msg(
      "insert_tokens: sequence for client %d, id %d is currently evaluated\n",
      client_fd, client_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  if (position < 0 || position > array_length(sequence->tokens)) {
    log_msg(
      "insert_tokens: position %d out of range for client %d, id %d\n",
      position, client_fd, client_id);
    send_message(client_fd, "error position out of range", 28);
    return;
  }
  int len = array_length(tokens);
  if (len > 0) {
    invalidate_lookahead(sequence);
    sequence->tokens = insert_into_int_array(
      sequence->tokens, position, tokens);
    sequence->positions = insert_value_into_int_array(
      sequence->positions, position, len, -1);
    if (sequence->state != MODIFIED) {
      sequence->state = MODIFIED;
      sequence->tokens_added = 0;
      sequence->was_shifted = false;
    }
    sequence->tokens_added += len;
    if (position < array_length(sequence->tokens)) {
      sequence->was_shifted = true;
    }
  }
}

static char *create_string(char *first, ...) {
  va_list args;
  va_start(args, first);
  char *next;
  int length = strlen(first);
  while ((next = va_arg(args, char *))) {
    length += strlen(next);
  }
  va_end(args);
  char *result = malloc(length+1);
  if (!result) {
    log_msg("Out of memory\n");
    exit(EXIT_FAILURE);
  }
  char *p = stpcpy(result, first);
  va_start(args, first);
  while ((next = va_arg(args, char *))) {
    p = stpcpy(p, next);
  }
  va_end(args);
  return result;
}

static int start_tcp_server(int port_no) {
  int sock;
  int opt = 1; // do reuse
  int backlog_count = 1;
  struct sockaddr_in addr;
  sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock == -1) return -1;
  if (
    setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) == -1
  ) {
    return -1;
  }
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = htonl(INADDR_ANY);
  addr.sin_port = htons(port_no);
  if (bind(sock, (struct sockaddr *)&addr, sizeof(addr)) == -1) return -1;
  if (listen(sock, backlog_count) == -1) return -1;
  log_msg("listening on port %d\n", port_no);
  return sock;
}

static void handle_use_model(int fd, char *model_name) {
  fprintf(stderr, "use_model %s\n", model_name);
  current_session_per_client[fd] = current_session_id;
  if (!current_model_name) {
    char *full_model_name = create_string(model_path, model_name, NULL);
    log_msg("loading model %s\n", full_model_name);
    struct llama_model *model = load_model(full_model_name);
    if (model) {
      current_model = model;
      current_model_name = full_model_name;
      current_context = create_context(current_model);
      if (current_context) {
        current_memory = llama_get_memory(current_context);
        // MTP draft context (shares target model weights)
        int n_layer_nextn = llama_model_n_layer_nextn(current_model);
        if (mtp_predict > 0 && n_layer_nextn > 0) {
          struct llama_context_params mtp_params
            = llama_context_default_params();
          mtp_params.ctx_type = LLAMA_CONTEXT_TYPE_MTP;
          mtp_params.n_ctx = llama_n_ctx(current_context);
          mtp_params.n_rs_seq = 0;
          mtp_params.ctx_other = current_context;
          mtp_params.n_seq_max = maximum_sequences;
          mtp_params.n_batch = maximum_batch_size;
          log_msg("creating MTP context (nextn layers = %d)\n",
            n_layer_nextn);
          log_msg("mtp n_ctx = %u\n", llama_n_ctx(current_context));
          mtp_context = llama_init_from_model(current_model, mtp_params);
          if (mtp_context) {
            log_msg("MTP context created\n");
            // enable nextn hidden-state extraction: the target's rows feed the
            // MTP catch-up decode; the MTP context outputs its own rows for
            // draft generation (step 5)
            mtp_n_embd = llama_model_n_embd(current_model);
            mtp_batch = llama_batch_ext_init(mtp_context);
            if (!mtp_batch) {
              log_msg("failed to init MTP batch; continuing without catch-up\n");
              mtp_n_embd = 0;
            } else {
              llama_set_embeddings_nextn(current_context, true, /*masked*/ false);
              llama_set_embeddings_nextn(mtp_context, true, /*masked*/ true);
              log_msg("MTP catch-up enabled (n_embd = %d)\n", mtp_n_embd);
              log_msg("********** %s **********\n", model_name);
            }
          } else {
            log_msg("failed to create MTP context; continuing without MTP\n");
          }
        } else if (n_layer_nextn > 0) {
          log_msg("model supports MTP (nextn layers = %d); use --mtp <n> to enable\n",
            n_layer_nextn);
        }
      } else {
        llama_model_free(model);
        current_model = NULL;
        log_msg("failed to create context\n");
        send_message(fd, "error failed to create context", 31);
      }
    } else {
      log_msg("failed to load model %s\n", full_model_name);
      send_message(fd, "error failed to load model", 27);
    }
  } else if (strcmp(model_name, strrchr(current_model_name, '/')+1) != 0) {
    log_msg("already using model %s\n", current_model_name);
    send_message(fd, "error already using another model", 34);
  }
}

static void handle_tokenize(int fd, char *text) {
  if (text) {
    fprintf(stderr, "tokenize text of %zu bytes\n", strlen(text));
    int *tokens = tokenize(current_model, text);
    char *buf = malloc(256+7*array_length(tokens));
    char *p = buf+sprintf(buf, "tokens %d", array_length(tokens));
    for (int i = 0; i < array_length(tokens); ++i) {
      p += sprintf(p, " %d", tokens[i]);
    }
    send_message(fd, buf, strlen(buf)+1);
    free(buf);
    deallocate_array(tokens);
  } else {
    log_msg("tokenize: missing text\n");
    send_message(fd, "error missing text", 19);
  }
}

static void handle_create_sequence(int fd, char *sequence_id) {
  if (sequence_id) {
    fprintf(stderr, "create_sequence %s\n", sequence_id);
    int client_id = atoi(sequence_id);
    if (create_sequence(fd, client_id) < 0) {
      send_message(fd, "error sequence limit reached", 29);
    }
  } else {
    log_msg("create_sequence: missing sequence id\n");
    send_message(fd, "error missing sequence id", 26);
  }
}

static void handle_copy_sequence(int fd, char *arguments) {
  // arguments: sequence-id, template-sequence-id, token count
  if (arguments) {
    char *template_id = strchr(arguments, ' ');
    if (template_id) {
      *template_id++ = 0;
      char *token_count = strchr(template_id, ' ');
      if (token_count) {
        *token_count++ = 0;
        int sequence_id = atoi(arguments);
        int template_sequence_id = atoi(template_id);
        int n = atoi(token_count);
        if (n == 1) {
          fprintf(stderr,
            "copy first token from sequence %d to sequence %d\n",
            template_sequence_id, sequence_id);
        } else {
          fprintf(stderr,
            "copy first %d tokens from sequence %d to sequence %d\n",
            n, template_sequence_id, sequence_id);
        }
        copy_sequence(fd, sequence_id, template_sequence_id, n);
      } else {
        log_msg("copy_sequence: missing token count\n");
        send_message(fd, "error missing token count", 26);
      }
    } else {
      log_msg("copy_sequence: missing template sequence id\n");
      send_message(fd, "error missing template sequence id", 35);
    }
  } else {
    log_msg("copy_sequence: missing arguments\n");
    send_message(fd, "error missing arguments", 24);
  }
}

static void handle_delete_sequence(int fd, char *sequence_id) {
  if (sequence_id) {
    fprintf(stderr, "delete sequence %s\n", sequence_id);
    int client_id = atoi(sequence_id);
    free_client_sequence(fd, client_id);
  } else {
    log_msg("delete_sequence: missing sequence id\n");
    send_message(fd, "error missing sequence id", 26);
  }
}

static void send_confidence_message(
  SEQUENCE *sequence, const CONFIDENCE *c, int pos) {
  // MESSAGE RULE (2026-11-07): the message one position past the client's
  // confirmed prefix (len(tokens)) is the sync point -> "logits"; everything
  // beyond it is speculative -> "lookahead". Clients discard in-transit
  // lookahead when they reject; only a logits message resumes consumption.
  const char *title =
    (pos == array_length(sequence->tokens)) ? "logits" : "lookahead";
  log_msg(
    "sending %s for sequence %d at position %d (best: %d) to client %d, id %d\n",
    title, sequence->sequence_id, pos, c[0].token,
    sequence->client_fd, sequence->client_id);
  // i-2 gate (§22): remember the last message position of this turn; the
  // per-turn shift into prev_prev_length happens at evaluate_sequences start
  sequence->prev_length = pos;
  char buf[512];
  char *p = stpcpy(buf, title);
  p += sprintf(p, " %d %d 10", sequence->client_id, pos);
  for (int k = 0; k < 10; ++k) {
    p += sprintf(p, " %d=%f", c[k].token, c[k].logit);
  }
  send_message(sequence->client_fd, buf, p+1-buf);
  flush();
}

static void handle_add_tokens(int fd, char *arguments) {
  // arguments: sequence-id, token count, space separated tokens
  if (arguments) {
    char *sequence_id = arguments;
    char *token_count = strchr(arguments, ' ');
    if (token_count) {
      *token_count++ = 0;
      char *token_values = strchr(token_count, ' ');
      if (token_values) {
        *token_values++ = 0;
        int client_id = atoi(sequence_id);
        int n = atoi(token_count);
        int sequence_idx = get_sequence_idx(fd, client_id);
        if (sequence_idx < 0) {
          log_msg(
            "add_tokens: sequence for client %d, id %d not found\n",
            fd, client_id);
          send_message(fd, "error sequence not found", 25);
          return;
        }
        SEQUENCE *sequence = &sequences[sequence_idx];
        int *tokens = allocate_int_array(n);
        for (int i = 0; i < n; ++i) {
          char *next_token_value = strchr(token_values, ' ');
          if (next_token_value) {
            *next_token_value++ = 0;
          }
          tokens[i] = atoi(token_values);
          token_values = next_token_value;
        }
        set_array_length(tokens, n);
        // echo the actual tokens: all of them when few; when many, only the
        // first three and the last three, with an ellipsis between
        char tokbuf[256];
        int tp = 0;
        for (int i = 0; i < n; ++i) {
          if (n > 7 && i == 3) {
            tp += sprintf(tokbuf+tp, "%s...", tp ? " " : "");
            i = n-4; // loop ++i -> continue with the last three tokens
            continue;
          }
          tp += sprintf(tokbuf+tp, "%s%d", tp ? " " : "", tokens[i]);
        }
        (void)tp;
        fprintf(stderr, "add_tokens %d %d %s\n",
          client_id, n, tokbuf);
        add_tokens(fd, client_id, tokens);
      } else {
        log_msg("add_tokens: missing token values\n");
        send_message(fd, "error missing token values", 27);
      }
    } else {
      log_msg("add_tokens: missing token count\n");
      send_message(fd, "error missing token count", 26);
    }
  } else {
    log_msg("add_tokens: missing arguments\n");
    send_message(fd, "error missing arguments", 24);
  }
}

static void handle_delete_tokens(int fd, char *arguments) {
  // arguments: sequence-id, position, token count
  if (arguments) {
    char *position = strchr(arguments, ' ');
    if (position) {
      *position++ = 0;
      char *token_count = strchr(position, ' ');
      if (token_count) {
        *token_count++ = 0;
        int sequence_id = atoi(arguments);
        int pos = atoi(position);
        int n = atoi(token_count);
        fprintf(stderr,
          "delete %d tokens from sequence %d at position %d\n",
          n, sequence_id, pos);
        delete_tokens(fd, sequence_id, pos, n);
      } else {
        log_msg("delete_tokens: missing token count\n");
        send_message(fd, "error missing token count", 26);
      }
    } else {
      log_msg("delete_tokens: missing position\n");
      send_message(fd, "error missing position", 23);
    }
  } else {
    log_msg("delete_tokens: missing arguments\n");
    send_message(fd, "error missing arguments", 24);
  }
}

static void handle_insert_tokens(int fd, char *arguments) {
  // arguments: sequence-id, position, token count, space separated tokens
  if (arguments) {
    char *sequence_id = arguments;
    char *position = strchr(arguments, ' ');
    if (position) {
      *position++ = 0;
      char *token_count = strchr(position, ' ');
      if (token_count) {
        *token_count++ = 0;
        char *token_values = strchr(token_count, ' ');
        if (token_values) {
          *token_values++ = 0;
          int client_id = atoi(sequence_id);
          int pos = atoi(position);
          int n = atoi(token_count);
          fprintf(stderr,
            "insert %d tokens into sequence %d at position %d\n",
            n, client_id, pos);
          int *tokens = allocate_int_array(n);
          for (int i = 0; i < n; ++i) {
            char *next_token_value = strchr(token_values, ' ');
            if (next_token_value) {
              *next_token_value++ = 0;
            }
            tokens[i] = atoi(token_values);
            token_values = next_token_value;
          }
          set_array_length(tokens, n);
          insert_tokens(fd, client_id, pos, tokens);
        } else {
          log_msg("insert_tokens: missing token values\n");
          send_message(fd, "error missing token values", 27);
        }
      } else {
        log_msg("insert_tokens: missing token count\n");
        send_message(fd, "error missing token count", 26);
      }
    } else {
      log_msg("insert_tokens: missing position\n");
      send_message(fd, "error missing position", 23);
    }
  } else {
    log_msg("insert_tokens: missing arguments\n");
    send_message(fd, "error missing arguments", 24);
  }
}

static void handle_truncate_sequence(int fd, char *arguments) {
  // arguments: sequence-id, token-count
  if (arguments) {
    char *token_count = strchr(arguments, ' ');
    if (token_count) {
      *token_count++ = 0;
      int sequence_id = atoi(arguments);
      int n = atoi(token_count);
      if (n == 1) {
        fprintf(stderr, "truncate sequence %d to one token\n", sequence_id);
      } else {
        fprintf(stderr, "truncate sequence %d to %d tokens\n", sequence_id, n);
      }
      truncate_sequence(fd, sequence_id, n);
    } else {
      log_msg("truncate_sequence: missing token count\n");
      send_message(fd, "error missing token count", 26);
    }
  } else {
    log_msg("truncate_sequence: missing arguments\n");
    send_message(fd, "error missing arguments", 24);
  }
}

static void handle_evaluate(int fd, char *sequence_id) {
  if (sequence_id) {
    fprintf(stderr, "evaluate %s\n", sequence_id);
    int client_id = atoi(sequence_id);
    int sequence_idx = get_sequence_idx(fd, client_id);
    if (sequence_idx < 0) {
      log_msg(
        "evaluate: sequence for client %d, id %d not found\n",
        fd, client_id);
      send_message(fd, "error sequence not found", 25);
      return;
    }
    SEQUENCE *sequence = &sequences[sequence_idx];
    int sequence_id = sequence->sequence_id;
    if (sequence->state == MODIFIED) {
      int n = array_length(sequence->tokens);
      change_session(fd, sequence->session_id);
      if (sequence->was_shifted) {
        bool *was_deleted =
          allocate_bool_array(sequence->evaluation_position);
        // initially mark all tokens as deleted
        for (int i = 0; i < sequence->evaluation_position; ++i) {
          was_deleted[i] = true;
        }
        set_array_length(was_deleted, sequence->evaluation_position);
        // mark remaining tokens as not deleted
        for (int i = 0; i < array_length(sequence->positions); ++i) {
          int position = sequence->positions[i];
          if (position >= 0) {
            was_deleted[position] = false;
          }
        }
        // remove from cache
        int i = 0;
        while (i < array_length(was_deleted)) {
          if (was_deleted[i]) {
            int s = i;
            while (++i < array_length(was_deleted) && was_deleted[i]);
            log_msg(
              "llama_memory_seq_rm(current_memory, %d, %d, %d)\n",
              sequence_id, s, i);
            bool ok = llama_memory_seq_rm(current_memory, sequence_id, s, i);
            if (!ok) {
              log_msg("llama_memory_seq_rm failed: sequence %d [%d..%d]\n", sequence_id, s, i);
              exit(EXIT_FAILURE);
            }
          } else {
            ++i;
          }
        }
        deallocate_array(was_deleted);
        // shift tokens
        i = 0;
        while (i < array_length(sequence->positions)) {
          int delta = sequence->positions[i]-i;
          if (sequence->positions[i] >= 0 && delta != 0) {
            int s = i;
            while (
              ++i < array_length(sequence->positions) &&
              sequence->positions[i] >= 0 &&
              sequence->positions[i]-i == delta
            );
            log_msg(
              "llama_memory_seq_add(current_memory, %d, %d, %d, %d)\n",
              sequence_id, s+delta, i+delta, -delta);
            llama_memory_seq_add(
              current_memory, sequence_id, s+delta, i+delta, -delta);
          } else {
            ++i;
          }
        }
      }
      if (sequence->n_lookahead_tokens == 0 && sequence->n_draft_tokens > 0) {
        // fully claimed, drafts still unverified: stay in speculation mode so
        // the counting loop schedules the speculative batch that verifies
        // them; a plain PREFILL decode would drop the anchor from the batch
        sequence->state = GENERATING;
      } else if (
        sequence->n_lookahead_tokens == 0 &&
        sequence->positions[array_length(sequence->tokens)-1] >= 0
      ) {
        // full claim of an already decoded chain: nothing to evaluate.
        // The stored frontier confidences are this position's sync point —
        // send them as the logits message, no extra decode needed.
        if (sequence->frontier_confidence) {
          sequence->state = GENERATING;
          sequence->evaluation_position = array_length(sequence->tokens);
          send_confidence_message(
            sequence, sequence->frontier_confidences,
            array_length(sequence->tokens));
          sequence->frontier_confidence = false;
          return;
        }
      } else if (
        sequence->positions[array_length(sequence->tokens)-1] >= 0
      ) {
        // partial claim: the added tokens are already in the KV, and the
        // client holds the lookahead messages covering the rest of the chain
        // — settle quietly, nothing to decode or send
        sequence->state = GENERATING;
        return;
      } else {
        // a plain decode of the new token(s)
        sequence->state = PREFILL;
        // force evaluation of the last token
        sequence->positions[array_length(sequence->tokens)-1] = -1;
      }
    } else {
      log_msg(
        "evaluate: sequence for client %d, id %d was not modified\n",
        fd, client_id);
      send_message(fd, "error sequence was not modified", 32);
    }
  } else {
    log_msg("evaluate: missing sequence id\n");
    send_message(fd, "error missing sequence id", 26);
  }
}

static void handle_get_pieces(int fd, char *arguments) {
  // return all pieces in the vocabulary
  fprintf(stderr, "get_pieces\n");
  const struct llama_vocab *vocab = llama_model_get_vocab(current_model);
  const int n_vocab = llama_vocab_n_tokens(vocab);
  // hex is 2 chars per piece byte + 1 space separator; start from an
  // average piece length of 8 bytes and double as needed
  size_t cap = 128+17*n_vocab;
  char *buf = malloc(cap);
  char *p = buf+sprintf(buf, "pieces %d", n_vocab);
  unsigned char piece[512];
  for (int i = 0; i < n_vocab; ++i) {
    int len = llama_token_to_piece(vocab, i, piece, 512, 0, true);
    size_t need = 1+(len > 0 ? 2*(size_t)len : 2);
    if ((size_t)(p-buf)+need >= cap) {
      size_t used = (size_t)(p-buf);
      char *grown = realloc(buf, cap*2);
      if (!grown) {
        log_msg("get_pieces: out of memory\n");
        free(buf);
        return;
      }
      buf = grown;
      p = buf+used; // p was invalidated by the move
      cap *= 2;
    }
    *p++ = ' ';
    if (len <= 0) {
      // zero-length pieces show as "--", errors as "??" — a bare space
      // is invisible on the wire and breaks client field counting;
      // negative also covers pieces over the 512-byte read buffer
      p += sprintf(p, "%s", len < 0 ? "??" : "--");
    } else {
      for (int k = 0; k < len; ++k) {
        p += sprintf(p, "%02x", piece[k]);
      }
    }
  }
  *p++ = 0;
  send_message(fd, buf, p-buf);
  free(buf);
}

static void handle_get_end_tokens(int fd, char *arguments) {
  // return all end tokens in the vocabulary
  fprintf(stderr, "get_end_tokens\n");
  const struct llama_vocab *vocab = llama_model_get_vocab(current_model);
  const int n_vocab = llama_vocab_n_tokens(vocab);
  int *end_tokens = malloc(n_vocab*sizeof(int));
  int n = 0;
  for (int i = 0; i < n_vocab; ++i) {
    if (llama_vocab_is_eog(vocab, i)) {
      end_tokens[n++] = i;
    }
  }
  char *buf = malloc(128+7*n);
  char *p = buf+sprintf(buf, "end_tokens %d", n);
  for (int i = 0; i < n; ++i) {
    p += sprintf(p, " %d", end_tokens[i]);
  }
  *p++ = 0;
  send_message(fd, buf, p-buf);
  free(buf);
  free(end_tokens);
}

static void handle_get_special_tokens(int fd, char *arguments) {
  // return all special tokens in the vocabulary
  fprintf(stderr, "get_special_tokens\n");
  const struct llama_vocab *vocab = llama_model_get_vocab(current_model);
  llama_token bos = llama_vocab_bos(vocab);
  llama_token eos = llama_vocab_eos(vocab);
  llama_token eot = llama_vocab_eot(vocab);
  llama_token sep = llama_vocab_sep(vocab);
  llama_token nl = llama_vocab_nl(vocab);
  llama_token pad = llama_vocab_pad(vocab);
  char buf[128];
  int len = sprintf(buf,
    "special_tokens bos=%d eos=%d eot=%d sep=%d nl=%d pad=%d",
    bos, eos, eot, sep, nl, pad);
  send_message(fd, buf, len+1);
}

static void handle_get_model_metadata(int fd, char *arguments) {
  fprintf(stderr, "get_model_metadata\n");
  char buf[128];
  int n_ctx_train = llama_model_n_ctx_train(current_model);
  int len = sprintf(buf,
    "model_metadata ctx_size=%d trained_ctx_size=%d "
    "max_concurrent_sequences=%d",
    current_context_size, n_ctx_train, maximum_sequences);
  send_message(fd, buf, len+1);
}

static void handle_create_session(int fd, char *arguments) {
  SESSION *found_session = NULL;
  int i;
  for (i = 0; i < array_length(sessions); ++i) {
    SESSION *session = &sessions[i];
    if (session->client_fd < 0) {
      found_session = session;
      break;
    }
  }
  if (!found_session) {
    // grow array
    sessions = reallocate_SESSION_array(sessions, i+1);
    set_array_length(sessions, i+1);
    found_session = &sessions[i];
  }
  found_session->client_fd = fd;
  found_session->session_size = 0;
  found_session->session_data = NULL;
  current_session_per_client[fd] = i;
  fprintf(stderr, "created session %d\n", i);
}

static void handle_request(int fd, char *request) {
  log_msg("from %d: ", fd);
  char *arguments = strchr(request, ' ');
  if (arguments) {
    *arguments++ = 0;
  }
  if (strcmp(request, "use_model") == 0) {
    handle_use_model(fd, arguments);
  } else if (strcmp(request, "list_models") == 0) {
    list_models(fd);
  } else {
    if (!current_model) {
      fprintf(stderr, "no model loaded\n");
      send_message(fd, "error no model loaded", 22);
    } else if (strcmp(request, "tokenize") == 0) {
      handle_tokenize(fd, arguments);
    } else if (strcmp(request, "add_tokens") == 0) {
      handle_add_tokens(fd, arguments);
    } else if (strcmp(request, "delete_tokens") == 0) {
      handle_delete_tokens(fd, arguments);
    } else if (strcmp(request, "insert_tokens") == 0) {
      handle_insert_tokens(fd, arguments);
    } else if (strcmp(request, "evaluate") == 0) {
      handle_evaluate(fd, arguments);
    } else if (strcmp(request, "create_sequence") == 0) {
      handle_create_sequence(fd, arguments);
    } else if (strcmp(request, "copy_sequence") == 0) {
      handle_copy_sequence(fd, arguments);
    } else if (strcmp(request, "truncate_sequence") == 0) {
      handle_truncate_sequence(fd, arguments);
    } else if (strcmp(request, "delete_sequence") == 0) {
      handle_delete_sequence(fd, arguments);
    } else if (strcmp(request, "get_pieces") == 0) {
      handle_get_pieces(fd, arguments);
    } else if (strcmp(request, "get_end_tokens") == 0) {
      handle_get_end_tokens(fd, arguments);
    } else if (strcmp(request, "get_special_tokens") == 0) {
      handle_get_special_tokens(fd, arguments);
    } else if (strcmp(request, "get_model_metadata") == 0) {
      handle_get_model_metadata(fd, arguments);
    } else if (strcmp(request, "create_session") == 0) {
      handle_create_session(fd, arguments);
    } else {
      fprintf(stderr, "%s - unknown request\n", request);
      char *buf = malloc(128+strlen(request));
      sprintf(buf, "error %s - unknown request", request);
      send_message(fd, buf, strlen(buf)+1);
    }
  }
}

bool has_pending_evaluations = false;
int turn_count = 0; // running round counter for the ==== separator

// Free all per-sequence aux state: MTP catch-up buffer.

static void free_sequence_aux(SEQUENCE *sequence) {
  if (sequence->mtp_pending_h) {
    free(sequence->mtp_pending_h);
    sequence->mtp_pending_h = NULL;
  }
}

// MTP draft generation (step 5): step the MTP context beyond each sequence's
// current position to produce up to mtp_predict speculative tokens. All
// sequences batch into a single decode per step, so dozens of concurrent
// clients share one pass through the weights (maximum parallelism, same
// pattern as the catch-up in evaluate_sequences).
// Ref: common_speculative_impl_draft_mtp::draft in common/speculative.cpp.
// The drafts are stored per sequence and ignored for now; step 6 wires them
// into the unified accept/reject flow.

static void draft_mtp_logits(SEQUENCE **draft_seqs, int n_draft_seqs) {
  if (!mtp_context || !mtp_batch || mtp_predict <= 0 || n_draft_seqs == 0) return;

  // per-sequence announcements, then the summary — mirroring the
  // evaluating lines; the per-step markers below exist only for their
  // timestamps
  for (int s = 0; s < n_draft_seqs; ++s) {
    SEQUENCE *sequence = draft_seqs[s];
    log_msg(
      "generating draft tokens for sequence %d\n",
      sequence->sequence_id);
  }
  if (n_draft_seqs == 1) {
    log_msg("generating draft tokens for one sequence\n");
  } else {
    log_msg(
      "generating draft tokens for %d sequences\n", n_draft_seqs);
  }

  const int32_t n_vocab = llama_vocab_n_tokens(
    llama_model_get_vocab(llama_get_model(mtp_context)));

  // per-sequence scratch for the draft step loop: tok/pos/h are this round's
  // batch inputs (h = the state row), d_idx tracks each entry within the batch
  bool *drafting = calloc(n_draft_seqs, sizeof(bool));
  int *d_pos = malloc(n_draft_seqs * sizeof(int));
  int *d_idx = malloc(n_draft_seqs * sizeof(int));
  llama_token *d_tok = malloc(n_draft_seqs * sizeof(llama_token));
  const float **d_h = malloc(n_draft_seqs * sizeof(const float *));
  // per-step top-10 confidences of each draft token (for the lookahead messages)
  CONFIDENCE *la_conf = malloc(
    (size_t)n_draft_seqs * mtp_predict * 10 * sizeof(CONFIDENCE));

  // each sequence starts at its prediction position, paired with the catch-up
  // row (target h_nextn at its last decoded position)
  for (int s = 0; s < n_draft_seqs; ++s) {
    SEQUENCE *sequence = draft_seqs[s];

    // start each sequence's draft list from scratch: re-drafts after a
    // lookahead rollback must not extend stale drafts
    sequence->n_draft_tokens = 0;

    drafting[s] = true;
    // the MTP context continues from the chain frontier: the last lookahead
    // token, which sits right past the client-confirmed tokens in the KV
    int n_la = sequence->n_lookahead_tokens;
    d_tok[s] = (llama_token)sequence->lookahead_tokens[n_la-1];
    d_pos[s] = array_length(sequence->tokens) + n_la - 1;
    d_h[s] = sequence->mtp_pending_h;
  }

  int step = 0;
  while (step < mtp_predict) {
    // build this round's batch from the scratch state
    llama_batch_ext_clear(mtp_batch);
    int n_drafting = 0;
    for (int s = 0; s < n_draft_seqs; ++s) {
      if (!drafting[s]) continue;
      SEQUENCE *sequence = draft_seqs[s];

      int32_t idx = llama_batch_ext_add_token(
        mtp_batch, sequence->sequence_id, d_tok[s]);
      if (idx < 0) {
        log_msg(
          "MTP draft: batch full at step %d for sequence %d\n",
          step, sequence->sequence_id);
        drafting[s] = false;
        continue;
      }
      llama_pos pos = d_pos[s];
      if (!llama_batch_ext_set_pos(mtp_batch, idx, &pos)) {
        log_msg("MTP draft: failed to set pos for sequence %d\n",
          sequence->sequence_id);
        drafting[s] = false;
        continue;
      }
      struct llama_embd embd = { d_h[s], 1, (size_t)mtp_n_embd };
      if (!llama_batch_ext_set_embd_state(mtp_batch, idx, embd)) {
        log_msg("MTP draft: failed to set state for sequence %d\n",
          sequence->sequence_id);
        drafting[s] = false;
        continue;
      }
      if (!llama_batch_ext_set_output_logits(mtp_batch, idx, true)) {
        log_msg("MTP draft: failed to set logits for sequence %d\n",
          sequence->sequence_id);
        drafting[s] = false;
        continue;
      }

      d_idx[s] = idx;
      ++n_drafting;
    }
    if (n_drafting == 0) break;

    log_msg("draft generation step %d of %d\n", step+1, mtp_predict);
    int32_t rc = llama_process(mtp_context, LLAMA_PROCESS_TYPE_DECODE, mtp_batch);
    if (rc != 0 && rc != 1) {
      log_msg("MTP draft decode failed at step %d: %d\n", step, rc);
      break;
    }

    // read back this round's results and advance the scratch state: the
    // head's own hidden row feeds the next step (read before the following
    // llama_process overwrites it)
    for (int s = 0; s < n_draft_seqs; ++s) {
      if (!drafting[s]) continue;
      SEQUENCE *sequence = draft_seqs[s];

      const float *logits = llama_get_logits_ith(mtp_context, d_idx[s]);
      if (!logits) {
        log_msg("MTP draft: no logits for sequence %d\n",
          sequence->sequence_id);
        drafting[s] = false;
        continue;
      }
      CONFIDENCE *la = &la_conf[
        (size_t)s * mtp_predict * 10 + (size_t)step * 10];
      fill_top_confidences(la, logits, n_vocab);
      int32_t best = la[0].token;

      const float *h_row = llama_get_embeddings_nextn_ith(mtp_context, d_idx[s]);
      if (!h_row) {
        log_msg("MTP draft: no h_nextn row for sequence %d\n",
          sequence->sequence_id);
        drafting[s] = false;
        continue;
      }

      sequence->draft_tokens[sequence->n_draft_tokens++] = best;
      d_tok[s] = (llama_token)best;
      d_pos[s]++;
      d_h[s] = h_row;
    }
    ++step;
  }

  free(drafting);
  free(d_pos);
  free(d_idx);
  free(d_tok);
  free(d_h);
}

static void evaluate_sequences(void) {
  // speculative evaluation only takes place if there is at least one
  // sequence with regular tokens to evaluate
  has_pending_evaluations = false;

  // show the current lookahead/draft token state — after client token
  // manipulation (add_tokens), before any evaluation decisions
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state == INVALID) continue;
    if (sequence->n_lookahead_tokens > 0) {
      char buf[512];
      int off = sprintf(buf, "lookahead tokens for sequence %d:",
        sequence->sequence_id);
      for (int k = 0; k < sequence->n_lookahead_tokens; ++k) {
        off += sprintf(buf+off, " %d", sequence->lookahead_tokens[k]);
      }
      sprintf(buf+off, "\n");
      log_msg("%s", buf);
    }
  }

  struct llama_batch lbatch;
  int n = 0;
  bool has_regular_evaluations = false;
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->session_id == current_session_id) {
      // i-2 gate (§22): roll this sequence's message history one turn back —
      // prev_prev_length now holds the last position sent in the previous
      // pass. prev_length is CARRIED, not reset: it always holds the last
      // actually-sent position (a send overwrites it), so a stalled client
      // never gets a stale -1 that re-opens the gate after one idle pass —
      // speculation pauses until the client confirms up to it
      sequence->prev_prev_length = sequence->prev_length;
      if (sequence->state == PREFILL) {
        for (int k = 0; k < array_length(sequence->tokens); ++k) {
          if (sequence->positions[k] < 0) {
            if (k < sequence->evaluation_position) {
              sequence->evaluation_position = k;
              change_session(sequence->client_fd, sequence->session_id);
              log_msg(
                "llama_memory_seq_rm(current_memory, %d, %d, -1)\n",
                sequence->sequence_id, k);
              bool ok = llama_memory_seq_rm(current_memory, sequence->sequence_id, k, -1);
              if (!ok) {
                log_msg("llama_memory_seq_rm failed: sequence %d at position %d\n", sequence->sequence_id, k);
                exit(EXIT_FAILURE);
              }
            }
            ++n;
            has_regular_evaluations = true;
          }
        }
      } else if (
        sequence->state == GENERATING &&
        sequence->n_draft_tokens > 0 &&
        // i-2 gate (§22): only speculate when the client fully confirmed
        // everything advertised two turns ago (its add_tokens reached at
        // least that position); otherwise stop producing lookahead
        array_length(sequence->tokens) >= sequence->prev_prev_length
      ) {
        int lookahead_size = 1+sequence->n_draft_tokens;
        if (n+lookahead_size > maximum_batch_size) break;
        n += lookahead_size;
        }
    }
  }
  if (n == 0) return; // nothing to do at all, even in eager mode
  if (!has_regular_evaluations && !eager_speculation) return;
  if (n > maximum_batch_size) {
    n = maximum_batch_size;
    has_pending_evaluations = true;
  }
  lbatch.n_tokens = n;
  lbatch.token = malloc(n*sizeof(llama_token));
  lbatch.embd = NULL;
  lbatch.pos = malloc(n*sizeof(llama_pos));
  lbatch.n_seq_id = malloc(n*sizeof(int32_t));
  lbatch.seq_id = (llama_seq_id **)malloc(n*sizeof(llama_seq_id *));
  lbatch.logits = (int8_t *)malloc(n);
  int idx = 0;
  int *server_seq_ids = allocate_int_array(array_length(sequences));
  int *logits_indices = allocate_int_array(array_length(sequences));
  // per-sequence lbatch ranges actually filled in this pass (for MTP catch-up)
  int *mtp_first_idx = allocate_int_array(array_length(sequences));
  int *mtp_last_idx = allocate_int_array(array_length(sequences));
  for (int i = 0; i < array_length(sequences); ++i) {
    ((int*)mtp_first_idx)[i] = -1;
    ((int*)mtp_last_idx)[i] = -1;
  }
  // sequences freshly evaluated in this pass (candidates for MTP drafts)
  SEQUENCE **draft_seqs = malloc(
    array_length(sequences)*sizeof(SEQUENCE *));
  int n_draft_seqs = 0;
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->session_id == current_session_id) {
      server_seq_ids = push_to_int_array(server_seq_ids, sequence->sequence_id);
      logits_indices = push_to_int_array(logits_indices, -1);
    }
  }
  int sequence_count = 0;
  int prev_seq_i = -1;
  int bi = 0;
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->session_id == current_session_id) {
      int token_count = 0;
      if (sequence->state == PREFILL) {
        int saved_idx = idx;
        for (int k = 0; k < array_length(sequence->tokens); ++k) {
          if (sequence->positions[k] < 0) {
            sequence->positions[k] = k;
            lbatch.token[idx] = sequence->tokens[k];
            lbatch.pos[idx] = k;
            lbatch.n_seq_id[idx] = 1;
            lbatch.seq_id[idx] = &server_seq_ids[bi];
            lbatch.logits[idx] = (k == array_length(sequence->tokens)-1);
            if (k == array_length(sequence->tokens)-1) {
              logits_indices[bi] = idx;
            }
            ++token_count;
            if (i != prev_seq_i) {
              ++sequence_count;
              prev_seq_i = i;
            }
            // stop before eating the lookahead slots reserved after these tokens
            if (++idx >= n) break;
          }
        }
        if (idx > saved_idx) {
          mtp_first_idx[i] = saved_idx;
          mtp_last_idx[i] = idx - 1;
        }
        if (token_count == 1) {
          log_msg(
            "evaluating one token in sequence %d\n",
            i);
        } else {
          log_msg(
            "evaluating %d tokens in sequence %d\n",
            token_count, i);
        }
        if (idx >= n) break;
      } else if (
        sequence->state == GENERATING &&
        // i-2 gate (§22): must mirror the counting loop's condition exactly —
        // speculation only when the client fully confirmed turn n-2
        sequence->n_draft_tokens > 0 &&
        array_length(sequence->tokens) >= sequence->prev_prev_length
      ) {
        int lookahead_size = 1+sequence->n_draft_tokens;
        if (idx+lookahead_size > maximum_batch_size) break;
        int saved_index = idx;
        // The anchor is either from lookahead_tokens (if available) or the last confirmed token
        // Position depends on whether we have lookahead tokens in KV; with an empty chain
        // the anchor is tokens[len-1], whose KV position is len(tokens)-1 (not the frontier)
        int k;
        if (sequence->n_lookahead_tokens > 0) {
          k = array_length(sequence->tokens) + sequence->n_lookahead_tokens - 1;
        } else {
          k = array_length(sequence->tokens) - 1;
        }
        for (int a = 0; a < lookahead_size; ++a) {
          lbatch.token[idx] = (a == 0)
            ? (sequence->n_lookahead_tokens > 0
               ? sequence->lookahead_tokens[sequence->n_lookahead_tokens-1]
               : sequence->tokens[array_length(sequence->tokens)-1])
            : sequence->draft_tokens[a-1];
          lbatch.pos[idx] = k+a;
          lbatch.n_seq_id[idx] = 1;
          lbatch.seq_id[idx] = &server_seq_ids[bi];
          lbatch.logits[idx] = true;
          logits_indices[bi] = idx; // last entry: its confidences lead the turn
          ++idx;
        }
        if (idx > saved_index) {
          mtp_first_idx[i] = saved_index;
          mtp_last_idx[i] = idx-1;
        }
        ++sequence_count;
        prev_seq_i = i;
        log_msg(
          "evaluating %d lookahead token(s) in sequence %d\n",
          lookahead_size, i);
          if (idx >= n) break;
              }
      ++bi;
    }
  }
  if (n == 1) {
    log_msg("evaluating one token in one sequence\n");
  } else if (sequence_count == 1) {
    log_msg("evaluating %d tokens in one sequence\n", n);
  } else {
    log_msg(
      "evaluating %d tokens in %d sequences\n", n, sequence_count);
  }
  struct timespec t0, t1, t2;
  clock_gettime(CLOCK_MONOTONIC, &t0);
  int ret = llama_decode(current_context, lbatch);
  clock_gettime(CLOCK_MONOTONIC, &t1); // submit time (Vulkan returns after submit)
  llama_synchronize(current_context);  // wait for actual GPU completion
  clock_gettime(CLOCK_MONOTONIC, &t2);
  double submit_ms = ((t1.tv_sec - t0.tv_sec) * 1000.0) + ((double)(t1.tv_nsec - t0.tv_nsec) / 1e6);
  double decode_ms = ((t2.tv_sec - t0.tv_sec) * 1000.0) + ((double)(t2.tv_nsec - t0.tv_nsec) / 1e6);
  log_msg("===== %d ===== (%.1f tokens/s, gpu %.0f ms, submit %.0f ms)\n", ++turn_count,
    decode_ms > 0 ? n * 1000.0 / decode_ms : 0.0, decode_ms, submit_ms);
  // MTP catch-up: mirror the target's decoded positions into the MTP context so
  // it can generate draft tokens. Each entry is paired with the h_nextn row of
  // the position before it (shifted right); a sequence's first entry uses its
  // pending row from the previous run. Ref: common/speculative.cpp (draft-mtp).
  if (ret == 0 && mtp_batch) {
    const float *h_tgt = llama_get_embeddings_nextn(current_context);
    if (!h_tgt) {
      log_msg("no h_nextn rows from target; skipping MTP catch-up\n");
    } else {
      int32_t m_n = 0;
      llama_batch_ext_clear(mtp_batch);
      for (int i = 0; i < array_length(sequences); ++i) {
        if (mtp_first_idx[i] < 0) continue;
        SEQUENCE *sequence = &sequences[i];
        int n_entries = mtp_last_idx[i] - mtp_first_idx[i] + 1;
        for (int e = 0; e < n_entries; ++e) {
          int lbi = mtp_first_idx[i] + e;
          llama_token id   = lbatch.token[lbi];
          llama_pos pos    = lbatch.pos[lbi];
          const float *h_row = (e == 0)
            ? sequence->mtp_pending_h
            : h_tgt + (size_t)(lbi - 1) * mtp_n_embd;
          struct llama_embd embd = { h_row, 1, (size_t)mtp_n_embd };
          int32_t m_idx = llama_batch_ext_add_token(mtp_batch, lbatch.seq_id[lbi][0], id);
          if (m_idx < 0) {
            log_msg("MTP catch-up: failed to add token at lbatch idx %d\n", lbi);
            break;
          }
          if (!llama_batch_ext_set_pos(mtp_batch, m_idx, &pos)) {
            log_msg("MTP catch-up: failed to set pos at idx %d\n", m_idx);
            break;
          }
          if (!llama_batch_ext_set_embd_state(mtp_batch, m_idx, embd)) {
            log_msg("MTP catch-up: failed to set state at idx %d\n", m_idx);
            break;
          }
          ++m_n;
        }
      }
      if (m_n > 0) {
        // idempotent catch-up: wipe each sequence's cached tail from its first
        // re-decoded position, so stale rows (e.g. after a lookahead rollback)
        // are replaced instead of colliding (ref: common/speculative.cpp)
        for (int i = 0; i < array_length(sequences); ++i) {
          if (mtp_first_idx[i] < 0) continue;
          bool ok = llama_memory_seq_rm(llama_get_memory(mtp_context),
            lbatch.seq_id[mtp_first_idx[i]][0], lbatch.pos[mtp_first_idx[i]], -1);
          if (!ok) {
            log_msg("llama_memory_seq_rm failed: MTP context, sequence %d at pos %d\n", lbatch.seq_id[mtp_first_idx[i]][0], lbatch.pos[mtp_first_idx[i]]);
            exit(EXIT_FAILURE);
          }
        }
        int32_t rc = llama_process(mtp_context, LLAMA_PROCESS_TYPE_DECODE, mtp_batch);
        if (rc != 0 && rc != 1) {
          log_msg("MTP catch-up decode failed: %d\n", rc);
        } else {
          // refresh each sequence's pending_h to the target row at its last decoded position
          for (int i = 0; i < array_length(sequences); ++i) {
            if (mtp_first_idx[i] < 0) continue;
            SEQUENCE *sequence = &sequences[i];
            const float *h = llama_get_embeddings_nextn_ith(current_context, mtp_last_idx[i]);
            if (h && sequence->mtp_pending_h) {
              memcpy(sequence->mtp_pending_h, h, (size_t)mtp_n_embd * sizeof(float));
            }
          }
        }
      }
    }
  }
  if (ret != 0) {
    log_msg("llama_decode failed: %d\n", ret);
    char *msg;
    switch (ret) {
      case -1:
        msg = "invalid input batch";
        break;
      case 1:
        msg = "context size exceeded";
        break;
      case 2:
        msg = "aborted";
        break;
      default:
        msg = "fatal error";
    }
    log_msg("llama_decode failed: %s\n", msg);

    for(int i = 0; i < array_length(sequences); ++i) {
      SEQUENCE *sequence = &sequences[i];
      if (
        sequence->session_id == current_session_id &&
        sequence->state != INVALID
      ) {
        char buf[128];
        int n = sprintf(buf, "error %s", msg);
        send_message(sequence->client_fd, buf, n+1);
        flush();
        sequence->state = UNMODIFIED;
      }
    }
  } else {
    const struct llama_model *model = llama_get_model(current_context);
    const struct llama_vocab *vocab = llama_model_get_vocab(model);
    const int n_vocab = llama_vocab_n_tokens(vocab);
    int bi = 0;
    for (int i = 0; i < array_length(sequences); ++i) {
      SEQUENCE *sequence = &sequences[i];
      if (sequence->session_id == current_session_id) {
        int idx = logits_indices[bi];
        if (idx >= 0) {
          float *logits = llama_get_logits_ith(current_context, idx);
          fill_top_confidences(sequence->confidences, logits, n_vocab);
          if (sequence->state == GENERATING) {
            // the chain [p, d1..dk] was just decoded into the KV at positions
            // N+1..N+k+1. Check each draft against the main head (§11 prefix
            // semantics): a draft is confirmed only when every earlier draft is
            // too and the main head's argmax at that position equals the draft
            // token (p is settled already: it is the turn-1 logits message).
            int n_chain = mtp_last_idx[i]-mtp_first_idx[i]+1;
            // record KV positions for chain entries the client already
            // claimed (uniform index math: entry a sits at array index
            // n_tok+a-1 in both anchor sources). Without this, a hole left
            // in positions[] plus a later hole-recovery seq_rm erases KV
            // cells that are never re-decoded -> KV gap mid-sequence.
            int n_tok = array_length(sequence->tokens);
            for (int a = 0; a < n_chain; ++a) {
              int arr_idx = n_tok + a - 1;
              if (arr_idx >= 0 && arr_idx < n_tok &&
                  sequence->positions[arr_idx] < 0 &&
                  lbatch.token[mtp_first_idx[i]+a] ==
                    sequence->tokens[arr_idx]) {
                sequence->positions[arr_idx] =
                  lbatch.pos[mtp_first_idx[i]+a];
              }
            }
            int n_confirmed = 0;
            CONFIDENCE best1[10];
            // both token lists and the match size, printed before the
            // comparison acts on them (analysis: are the drafts right?)
            int main_head_tokens[8];
            char line[128];
            int lp = sprintf(line, "draft tokens for sequence %d:", i);
            for (int a = 1; a < n_chain; ++a) {
              lp += sprintf(line + lp, " %d", lbatch.token[mtp_first_idx[i]+a]);
            }
            log_msg("%s\n", line);
            lp = sprintf(line, "check tokens for sequence %d:", i);
            for (int a = 1; a < n_chain; ++a) {
              fill_top_confidences(
                best1,
                llama_get_logits_ith(current_context, mtp_first_idx[i]+a-1),
                n_vocab);
              main_head_tokens[a-1] = best1[0].token;
              lp += sprintf(line + lp, " %d", main_head_tokens[a-1]);
            }
            log_msg("%s\n", line);
            for (int a = 1; a < n_chain; ++a) {
              if (main_head_tokens[a-1] != lbatch.token[mtp_first_idx[i]+a]) break;
              ++n_confirmed;
            }
            log_msg(
              "sequence %d: %d/%d drafts confirmed\n",
              i, n_confirmed, n_chain-1);
            if (n_confirmed < n_chain-1) {
              // partial confirmation: truncate the KV at the first unconfirmed
              // position (the stale draft states beyond it must not survive),
              // replace that draft with the main head's best-1 there and drop
              // the rest (§14 advancement rule). The replacement token joins
              // lookahead_tokens directly; the n-2 rule governs speculation.
              int trunc_pos = lbatch.pos[mtp_first_idx[i]+n_confirmed+1];
              log_msg(
                "rolling back sequence %d to position %d\n",
                i, trunc_pos);
              bool ok = llama_memory_seq_rm(
              llama_get_memory(current_context),
              sequence->sequence_id, trunc_pos, -1);
              if (!ok) {
                log_msg("llama_memory_seq_rm FAILED: sequence %d to position %d\n", sequence->sequence_id, trunc_pos);
                exit(EXIT_FAILURE);
              }
              // keep the MTP mirror consistent with the rollback: its stale draft
              // rows beyond this point are dead — re-seeding drafts from them
              // collides (M-RoPE X<Y)
              if (mtp_context) {
                ok = llama_memory_seq_rm(
                  llama_get_memory(mtp_context),
                  sequence->sequence_id, trunc_pos, -1);
                if (!ok) {
                  log_msg("llama_memory_seq_rm FAILED: MTP context, sequence %d to position %d\n", sequence->sequence_id, trunc_pos);
                  exit(EXIT_FAILURE);
                }
              }
                // append the verified prefix to the claimable chain: the
                // settled lookahead token plus the confirmed drafts
              if (
                sequence->n_lookahead_tokens + 1 + n_confirmed <
                MAX_LOOKAHEAD_TOKENS
              ) {
                for (int a = 0; a < n_confirmed; ++a) {
                  sequence->lookahead_tokens[
                  sequence->n_lookahead_tokens++] =
                  sequence->draft_tokens[a];
                }
              } else {
                log_msg(
                  "lookahead buffer full in sequence %d: "
                  "chain not appended\n", i);
              }
              // settled — claims on it must not re-decode anything
              sequence->chain_decoded = true;
              // get main head's best-1 at the frontier and add directly to lookahead
              fill_top_confidences(
              best1,
              llama_get_logits_ith(
              current_context, mtp_first_idx[i]+n_confirmed), n_vocab);
              sequence->lookahead_tokens[
              sequence->n_lookahead_tokens++] = (int)best1[0].token;
              // re-point the draft seed row: catch-up left it at the rolled-back
              // tail, but new drafts seed from the last confirmed entry
              if (sequence->mtp_pending_h) {
                const float *h = llama_get_embeddings_nextn_ith(
                  current_context, mtp_first_idx[i]+n_confirmed);
                if (h) {
                  memcpy(sequence->mtp_pending_h, h,
                    (size_t)mtp_n_embd * sizeof(float));
                }
              }
            } else {
              // full confirmation: [last_la, d1..dk] are all verified and in
              // the KV. Append them to the claimable chain (the settled
              // lookahead token already sits at n_lookahead_tokens-1)
              if (
                sequence->n_lookahead_tokens + 1 + n_confirmed <
                MAX_LOOKAHEAD_TOKENS
              ) {
                for (int a = 0; a < n_confirmed; ++a) {
                  sequence->lookahead_tokens[
                  sequence->n_lookahead_tokens++] =
                  sequence->draft_tokens[a];
                }
              } else {
                log_msg(
                "lookahead buffer full in sequence %d: "
                "chain not appended\n", i);
              }
              // the speculative batch is in the KV now: the chain content is
              // settled — claims on it must not re-decode anything
              sequence->chain_decoded = true;
              sequence->evaluation_position = lbatch.pos[mtp_last_idx[i]];
              // get main head's best-1 at the frontier and add directly to lookahead
              fill_top_confidences(
                best1,
                llama_get_logits_ith(
                  current_context, mtp_first_idx[i]+n_confirmed),
                n_vocab);
              sequence->lookahead_tokens[sequence->n_lookahead_tokens++] =
                (int)best1[0].token;
            }
            // both outcomes now agree: the frontier best-1 is in lookahead, the
            // drafts are consumed, and the MTP mirror matches the target KV —
            // so new drafts can be seeded this same round in either case
            if (mtp_predict > 0 && sequence->mtp_pending_h) {
              draft_seqs[n_draft_seqs++] = sequence;
            }
            // MESSAGE RULE (§15): the main head produced one logit set per batch
            // entry; send n_confirmed+1 of them. The first uses the entry before
            // it, so the last (from the entry after the confirmed prefix) carries
            // L_n, the replacement token at N+n+2. The turn-1 logits message
            // already covered position N+1 itself. Titles are decided locally
            // in send_confidence_message from pos vs len(tokens).
            CONFIDENCE entry_confidences[10];
            for (int a = 0; a <= n_confirmed; ++a) {
              int entry = mtp_first_idx[i]+a;
              fill_top_confidences(
                entry_confidences,
                llama_get_logits_ith(current_context, entry), n_vocab);
              send_confidence_message(
                sequence, entry_confidences, lbatch.pos[entry]+1);
            }
            // this batch CONSUMED the drafts: confirmed ones joined the
            // chain (a copy), rejected ones were rolled back from the KV.
            // If they survived, a later full claim would take the
            // "verify drafts" path and re-decode the settled anchor at its
            // occupied position (M-RoPE X<Y). Next turns get fresh drafts
            // from the plain decode's else branch.
            sequence->n_draft_tokens = 0;
          } else {
            sequence->state = GENERATING;
            sequence->evaluation_position = array_length(sequence->tokens);
            // the plain decode's prediction becomes the single lookahead
            // (anchor) token awaiting client confirmation; it is not in the
            // KV yet — a claim on it must still decode it
            sequence->lookahead_tokens[0] = sequence->confidences[0].token;
            sequence->n_lookahead_tokens = 1;
            sequence->chain_decoded = false;
            // the prediction for len(tokens) is the sync point -> "logits"
            send_confidence_message(
              sequence, sequence->confidences,
              array_length(sequence->tokens));
            if (mtp_predict > 0 && sequence->mtp_pending_h) {
              draft_seqs[n_draft_seqs++] = sequence;
            }
          }
        } else {
          if (sequence->state == PREFILL) {
            int remaining_tokens = 0;
            for (int k = 0; k < array_length(sequence->tokens); ++k) {
              if (sequence->positions[k] < 0) {
                ++remaining_tokens;
              }
            }
            log_msg(
              "sending progress information to client %d, id %d: "
              "%d tokens remaining\n",
              sequence->client_fd, sequence->client_id,
              remaining_tokens);
            char buf[80];
            char *p = buf+sprintf(buf, "progress %d %d",
              sequence->client_id, remaining_tokens);
            send_message(sequence->client_fd, buf, p+1-buf);
            flush();
          }
        }
        ++bi;
      }
    }
  }
  free(lbatch.token);
  free(lbatch.pos);
  free(lbatch.n_seq_id);
  free(lbatch.seq_id);
  free(lbatch.logits);
  // MTP draft generation for the sequences this pass just evaluated;
  // runs as one batched pass over all of them (see draft_mtp_logits)
  if (ret == 0) {
    draft_mtp_logits(draft_seqs, n_draft_seqs);
  }
  free(draft_seqs);
  deallocate_array(server_seq_ids);
  deallocate_array(logits_indices);
  deallocate_array(mtp_first_idx);
  deallocate_array(mtp_last_idx);
}

static void dump_set(fd_set *set, int fd_count) {
  log_msg("set:");
  for (int i = 0; i < fd_count; ++i) {
    if (FD_ISSET(i, set)) {
      log_msg(" %d", i);
    }
  }
  log_msg("\n");
}

// Per-client receive buffers: a single shared buffer let leftover bytes of
// one client (e.g. a partial command from a dead connection) corrupt the
// next client's first command. Each client's partial input stays with it.
// Dense fd-indexed array, grown on demand via reallocate_*_array as file
// descriptors can be arbitrarily large. Leak discipline: each client's data
// buffer is allocated lazily on first data and freed on EVERY close path; the
// slot resets to empty so a reused fd number starts clean. (The index array
// itself is process-lifetime, like the original shared buffer was.)
#define RCV_BUF_INITIAL 0x40000
static RCV_SLOT *rcv_slots = NULL;   // indexed by fd

// create/reset this fd's slot when a client connects; set_item_at grows the
// array and zero-fills any gap up to index fd, keeping the table dense

static void ensure_rcv_slot(int fd) {
  RCV_SLOT empty = {NULL, 0, 0};
  rcv_slots = set_item_at_RCV_SLOT_array(rcv_slots, fd, empty);
}

// free this client's receive buffer (safe to call when unallocated)

static void free_client_rcv(int fd) {
  if (!rcv_slots || array_size(rcv_slots) <= fd) return;
  if (rcv_slots[fd].buf) {
    free(rcv_slots[fd].buf);
    rcv_slots[fd].buf = NULL;
    rcv_slots[fd].size = 0;
    rcv_slots[fd].length = 0;
  }
}

static struct timespec NO_TIMEOUT = {0, 0};

// sequences with pending lookahead work use the same eligibility as in
// evaluate_sequences: generating with an unclaimed anchor plus drafts to
// verify, or a replacement token still waiting to be decoded into the KV
static bool has_speculative_evaluations(void) {
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (
      sequence->session_id == current_session_id &&
      (
        (
          sequence->state == GENERATING &&
          // i-2 gate (§22): mirrors the eligibility in evaluate_sequences
          sequence->n_draft_tokens > 0 &&
          array_length(sequence->tokens) >= sequence->prev_prev_length
        ) ||
        sequence->state == PENDING_LOOKAHEAD
      )
    ) return true;
  }
  return false;
}

static void handle_client_requests(int listen_fd) {
  fd_set read_set, write_set, except_set;
  FD_ZERO(&read_set);
  FD_ZERO(&write_set);
  FD_ZERO(&except_set);
  FD_SET(listen_fd, &read_set);
  int fd_count = listen_fd+1;
  while (true) {
    fd_set current_read_set = read_set;
    fd_set current_write_set = write_set;
    fd_set current_except_set = except_set;
    bool has_speculative = eager_speculation && has_speculative_evaluations();
    bool should_poll = has_pending_evaluations || has_speculative;
    log_msg("pending evaluations: %s, speculative evaluations: %s\n",
      has_pending_evaluations ? "true" : "false",
      has_speculative ? "true" : "false");
    int ret = pselect(fd_count,
      &current_read_set, &current_write_set, &current_except_set,
      should_poll ? &NO_TIMEOUT : NULL,
      NULL);
    for (int fd = 0; fd < fd_count; ++fd) {
      if (FD_ISSET(fd, &current_read_set)) {
        if (fd == listen_fd) {
          int client_fd;
          do {
            client_fd = accept(listen_fd, NULL, 0);
          } while (client_fd == -1 && errno == EINTR);
          if (client_fd == -1) {
            perror("failed to accept connection");
            exit(EXIT_FAILURE);
          }
          // disable nagle algorithm
          int flag = 1;
          setsockopt(
            client_fd, IPPROTO_TCP, TCP_NODELAY, (char *)&flag, sizeof(int));
          log_msg("accepted connection %d\n", client_fd);
          ensure_rcv_slot(client_fd);
          if (client_fd >= fd_count) {
            fd_count = client_fd+1;
          }
          FD_SET(client_fd, &read_set);
        } else {
          RCV_SLOT *slot = &rcv_slots[fd];   // guaranteed by ensure_rcv_slot on accept
          if (!slot->buf) {
            slot->buf = malloc(RCV_BUF_INITIAL);
            slot->size = RCV_BUF_INITIAL;
            slot->length = 0;
          }
          int n;
          do {
            n = recv(fd, slot->buf+slot->length, slot->size-slot->length, 0);
          } while (n == -1 && errno == EINTR);
          log_msg("received %d bytes from %d\n", n, fd);
          if (n == -1) {
            char msg[128];
            sprintf(msg, "failed to receive data from %d", fd);
            perror(msg);
            FD_CLR(fd, &read_set);
            close(fd);
            free_all_client_sequences(fd);
            free_client_rcv(fd);
          } else if (n == 0) {
            log_msg("connection %d closed\n", fd);
            FD_CLR(fd, &read_set);
            close(fd);
            free_all_client_sequences(fd);
            free_client_rcv(fd);
          } else {
            char *request = slot->buf;
            char *next_request = memchr(slot->buf+slot->length, 0, n);
            while (next_request) {
              handle_request(fd, request);
              request = next_request+1;
              next_request = memchr(request, 0, slot->buf+slot->length+n-request);
            }
            flush();
            slot->length += n;
            if (request > slot->buf) {
              slot->length -= request-slot->buf;
              memmove(slot->buf, request, slot->length);
            } else if (slot->length == slot->size) {
              slot->size *= 2;
              slot->buf = realloc(slot->buf, slot->size);
            }
          }
        }
      }
    }
    evaluate_sequences();
  }
}

int main(int argc, char **argv) {
  log_msg("fllama %s\n", FLLAMA_VERSION);
  // options:
  // --gpu-offload-threshold (in GB; default: 0)
  // --concurrent-sequences (default: 1)
  // --min-ctx-size (default: 8192)
  // --max-ctx-size (default: 32768)
  // --batch-size (default: 512)
  // --ubatch-size (default: batch size; 0 = llama.cpp default)
  // --mtp (number of tokens to predict; default: 0)
  // --eager (run speculation in dedicated batches even when idle)
  // --model-path (default: /var/models/)

  // parse command line arguments and add a help option

  for (int i = 1; i < argc; ++i) {
    if (strcmp(argv[i], "--gpu-offload-threshold") == 0) {
      if (i+1 < argc) {
        gpu_offload_threshold = atol(argv[++i]);
        gpu_offload_threshold *= 1024*1024*1024;
      } else {
        log_msg("missing argument for --gpu-offload-threshold\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--concurrent-sequences") == 0) {
      if (i+1 < argc) {
        int n = atoi(argv[++i]);
        if (n > 0) {
          maximum_sequences = n;
        } else {
          log_msg("invalid argument for --concurrent-sequences\n");
          exit(EXIT_FAILURE);
        }
      } else {
        log_msg("missing argument for --concurrent-sequences\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--min-ctx-size") == 0) {
      if (i+1 < argc) {
        int n = atoi(argv[++i]);
        if (n > 0) {
          minimum_context_size = n;
        } else {
          log_msg("invalid argument for --min-ctx-size\n");
          exit(EXIT_FAILURE);
        }
      } else {
        log_msg("missing argument for --min-ctx-size\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--max-ctx-size") == 0) {
      if (i+1 < argc) {
        int n = atoi(argv[++i]);
        if (n > 0) {
          maximum_context_size = n;
        } else {
          log_msg("invalid argument for --max-ctx-size\n");
          exit(EXIT_FAILURE);
        }
      } else {
        log_msg("missing argument for --max-ctx-size\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--batch-size") == 0) {
      if (i+1 < argc) {
        int n = atoi(argv[++i]);
        if (n > 0) {
          maximum_batch_size = n;
        } else {
          log_msg("invalid argument for --batch-size\n");
          exit(EXIT_FAILURE);
        }
      } else {
        log_msg("missing argument for --batch-size\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--ubatch-size") == 0) {
      if (i+1 < argc) {
        int n = atoi(argv[++i]);
        if (n > 0) {
          ubatch_size = n;
        } else {
          log_msg("invalid argument for --ubatch-size\n");
          exit(EXIT_FAILURE);
        }
      } else {
        log_msg("missing argument for --ubatch-size\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--mtp") == 0) {
      if (i+1 < argc) {
        int n = atoi(argv[++i]);
        // at most one draft token per MTP head, and the draft buffer holds
        // MAX_MTP_HEADS: --mtp must stay within that bound
        if (n > 0 && n <= MAX_MTP_HEADS) {
          mtp_predict = n;
        } else {
          log_msg(
            "invalid argument for --mtp (allowed: 1..%d)\n",
            MAX_MTP_HEADS);
          exit(EXIT_FAILURE);
        }
      } else {
        log_msg("missing argument for --mtp\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--eager") == 0) {
      // eager speculation: lookahead + MTP draft verification run in dedicated
      // batches even when nothing else is pending evaluation
      eager_speculation = true;
    } else if (strcmp(argv[i], "--model-path") == 0) {
      if (i+1 < argc) {
        const char *p = argv[++i];
        if (*p != '/') {
          log_msg("--model-path must be an absolute path: %s\n", p);
          exit(EXIT_FAILURE);
        }
        size_t len = strlen(p);
        // Copy into a fresh buffer (argv strings are not reallocatable).
        char *q = malloc(len+2);
        if (!q) exit(EXIT_FAILURE);
        strcpy(q, p);
        q[len] = '/';
        q[len+1] = 0;
        model_path = q;
      } else {
        log_msg("missing argument for --model-path\n");
        exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--help") == 0) {
      log_msg(
        "Usage: %s [options]\n"
        "Options:\n"
        "  --gpu-offload-threshold <size>  (in GB; default: 0)\n"
        "  --concurrent-sequences <count>  (default: 1)\n"
        "  --min-ctx-size <size>           (default: 8192)\n"
        "  --max-ctx-size <size>           (default: 32768)\n"
        "  --batch-size <size>             (default: 512)\n"
        "  --ubatch-size <size>            (default: batch size)\n"
        "  --mtp <n>                       (default: 0)\n"
        "  --eager                         (run speculation in dedicated batches)\n"
        "  --model-path <path>             (default: /var/models/)\n"
        "  --help                          (shows this help)\n",
        argv[0]);
      exit(EXIT_SUCCESS);
    } else {
      log_msg("unknown option: %s\n", argv[i]);
      exit(EXIT_FAILURE);
    }
  }
  if (eager_speculation) {
    log_msg("eager speculation enabled\n");
  }
  signal(SIGPIPE, SIG_IGN);
  initialize_llama();
  int listen_fd = start_tcp_server(7683); // LS = Llama Server
  if (listen_fd == -1) {
    log_msg("Failed to start TCP server on port 7683\n");
    exit(EXIT_FAILURE);
  };
  sessions = allocate_SESSION_array(1);
  sessions[0].client_fd = 0;
  sessions[0].session_size = 0;
  sessions[0].session_data = NULL;
  set_array_length(sessions, 1);
  handle_client_requests(listen_fd);
}
