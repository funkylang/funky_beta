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

#define MODEL_PATH "/mnt/var/models/"

#define MAXIMUM_BATCH_SIZE 512
#define VRAM_RESERVE 4096
// measured in context units

static void log_callback(
  const enum ggml_log_level level, const char *text, void *
) {
  if (level == GGML_LOG_LEVEL_ERROR) {
    fprintf(stderr, "%s", text);
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
static int current_context_size;
static int maximum_sequences = 1;
static int minimum_context_size = 8192;
static int maximum_context_size = 32768;

llama_memory_t current_memory;

static long gpu_offload_threshold = 0;

static struct llama_model *load_model(const char *filename) {
  // compute file size
  FILE *fp = fopen(filename, "rb");
  if (!fp) {
    fprintf(stderr, "Failed to open model file: %s\n", filename);
    return NULL;
  }
  fseek(fp, 0, SEEK_END);
  size_t filesize = ftell(fp);
  fclose(fp);
  fprintf(stderr, "model file size: %zu bytes\n", filesize);
  struct llama_model_params model_params = llama_model_default_params();
  if (filesize <= gpu_offload_threshold) {
    model_params.n_gpu_layers = 99;
    fprintf(stderr, "using GPU for all layers\n");
  } else {
    model_params.n_gpu_layers = 0;
    fprintf(stderr, "not using GPU for any layers\n");
  }
  return llama_model_load_from_file(filename, model_params);
}

static struct llama_context *create_context(struct llama_model *model) {
  struct llama_context_params ctx_params = llama_context_default_params();
  fprintf(stderr, "embeddings = %d\n", ctx_params.embeddings);
  fprintf(stderr, "offload_kqv = %d\n", ctx_params.offload_kqv);
  fprintf(stderr, "no_perf = %d\n", ctx_params.no_perf);
  fprintf(stderr, "op_offload = %d\n", ctx_params.op_offload);
  fprintf(stderr, "swa_full = %d\n", ctx_params.swa_full);
  fprintf(stderr, "kv_unified = %d\n", ctx_params.kv_unified);
  ctx_params.n_seq_max = maximum_sequences;
  ctx_params.n_batch = MAXIMUM_BATCH_SIZE;
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
    fprintf(stderr, "%d <%d..%d>\n", ctx_size, ctx_size_low, ctx_size_high);
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
  fprintf(stderr, "ctx_size = %d\n", ctx_size);
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
    fprintf(stderr, "Failed to allocate memory for " #TYPE "array\n"); \
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
      fprintf(stderr, "Failed to allocate memory for " #TYPE "array\n"); \
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

DEFINE_ALLOCATE_ARRAY(int)
DEFINE_REALLOCATE_ARRAY(int)
DEFINE_APPEND_TO_ARRAY(int)
DEFINE_INSERT_INTO_ARRAY(int)
DEFINE_INSERT_VALUE_INTO_ARRAY(int)
DEFINE_DELETE_FROM_ARRAY(int)
DEFINE_PUSH_TO_ARRAY(int)

DEFINE_ALLOCATE_ARRAY(bool)

void dump_int_array(int *items) {
  if (items) {
    ARRAY_HEADER *header = (ARRAY_HEADER *)items-1;
    fprintf(stderr,
      "INT_ARRAY: size=%d, length=%d\n", header->size, header->length);
    for (int i = 0; i < header->length; i++) {
      fprintf(stderr, "  [%d] = %d\n", i, items[i]);
    }
  } else {
    fprintf(stderr, "INT_ARRAY: NULL\n");
  }
}

void dump_bool_array(bool *items) {
  if (items) {
    ARRAY_HEADER *header = (ARRAY_HEADER *)items-1;
    fprintf(stderr,
      "BOOL_ARRAY: size=%d, length=%d\n", header->size, header->length);
    for (int i = 0; i < header->length; i++) {
      fprintf(stderr, "  [%d] = %d\n", i, items[i]);
    }
  } else {
    fprintf(stderr, "BOOL_ARRAY: NULL\n");
  }
}

#define SEND_BUF_SIZE 0x100000

static char send_buf[SEND_BUF_SIZE];
static size_t send_buf_len = 0;
static int send_fd = -1;

static void flush(void) {
  if (send_buf_len > 0 && send_fd >= 0) {
    fprintf(stderr, "sending %zu bytes to %d\n", send_buf_len, send_fd);
    (void)write(send_fd, send_buf, send_buf_len);
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
    fprintf(stderr, "sending %zu bytes to %d\n", len, fd);
    (void)write(fd, msg, len);
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

static void list_models(int client_fd) {
  char *path = MODEL_PATH;
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
    write(client_fd, buf, p+1-buf);
    free(buf);
  } else {
    send_message(client_fd, "error opening model directory", 30);
  }
}

// Sequence States

#define INVALID -1
#define UNMODIFIED 0
#define MODIFIED 1
#define IN_EVALUATION 2
#define EVALUATED 3

char *sequence_state_names[] =
  {"unmodified", "modified", "in_evaluation", "evaluated"};

// Token State

typedef struct {
  int client_fd; // file descriptor of the socket to the client;
  int client_sequence_id; // the sequence id used by the client
  int state; // see "Sequence States" above
  int tokens_added; // total number of tokens added to the sequence
  int evaluation_position; // last evaluated position
  bool was_shifted; // parts of the sequence were shifted
  bool has_lookahead; // the best matching token was preevaluated
  int next_token; // the best guess for the next token
  int *tokens; // the unevaluated tokens
  int *positions; // -1 for new tokens
  CONFIDENCE confidences[10]; // the top 10 confidences for the next token
} SEQUENCE;

DEFINE_ALLOCATE_ARRAY(SEQUENCE)
DEFINE_REALLOCATE_ARRAY(SEQUENCE)

static void dump_sequence(SEQUENCE *sequence) {
  if (sequence->state == INVALID) {
    fprintf(stderr, "SEQUENCE: invalid\n");
  } else {
    fprintf(stderr,
      "SEQUENCE: %p\n"
      "  client_fd: %d\n"
      "  client_sequence_id: %d\n"
      "  state: %s\n"
      "  tokens_added: %d\n"
      "  evaluation_position: %d\n"
      "  was_shifted: %d\n"
      "  has_lookahead: %d\n"
      "  next_token: %d\n",
      sequence,
      sequence->client_fd, sequence->client_sequence_id,
      sequence_state_names[sequence->state],
      sequence->tokens_added, sequence->evaluation_position,
      sequence->was_shifted, sequence->has_lookahead,
      sequence->next_token);
    fprintf(stderr, "TOKENS: ");
    dump_int_array(sequence->tokens);
    fprintf(stderr, "POSITIONS: ");
    dump_int_array(sequence->positions);
    fprintf(stderr, "CONFIDENCES:\n");
    for (int i = 0; i < 10; ++i) {
      fprintf(stderr, "  %d:%f\n",
	sequence->confidences[i].token, sequence->confidences[i].logit);
    }
  }
}

static void dump_sequence_array(SEQUENCE *sequences) {
  for (int i = 0; i < array_length(sequences); ++i) {
    fprintf(stderr, "[%d]:\n", i);
    dump_sequence(&sequences[i]);
  }
}

static void dump_batch(struct llama_batch *batch) {
  fprintf(stderr,
    "BATCH:\n"
    "total tokens: %d\n",
    batch->n_tokens);
  for (int i = 0; i < batch->n_tokens; ++i) {
    fprintf(stderr,
      "  [%4d] token = %6d, pos = %5d, sequences = %d (",
      i, batch->token[i], batch->pos[i], batch->n_seq_id[i]);
    for (int j = 0; j < batch->n_seq_id[i]; ++j) {
      if (j > 0) fprintf(stderr, ", ");
      fprintf(stderr, "%d", batch->seq_id[i][j]);
    }
    fprintf(stderr, ")\n");
  }
}

SEQUENCE *sequences = NULL;

static int get_sequence_idx(int client_fd, int client_sequence_id) {
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (
      sequence->state != INVALID &&
      sequence->client_fd == client_fd &&
      sequence->client_sequence_id == client_sequence_id
    ) return i;
  }
  return -1;
}

static int create_sequence(int client_fd, int client_sequence_id) {
  // look for unused slot
  int i;
  for (i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state == INVALID) break;
  }
  if (i == array_length(sequences)) {
    if (i == maximum_sequences) {
      fprintf(stderr, "Maximum number of sequences reached (limit = %d)\n",
	maximum_sequences);
      return -1;
    }
    // grow array
    sequences = reallocate_SEQUENCE_array(sequences, i+1);
    set_array_length(sequences, i+1);
  }
  SEQUENCE *sequence = &sequences[i];
  sequence->client_fd = client_fd;
  sequence->client_sequence_id = client_sequence_id;
  sequence->state = UNMODIFIED;
  sequence->tokens_added = 0;
  sequence->evaluation_position = -1;
  sequence->was_shifted = false;
  sequence->has_lookahead = false;
  sequence->next_token = -1;
  sequence->tokens = NULL;
  sequence->positions = NULL;
  fprintf(stderr, "created server sequence %d (client %d, id %d)\n",
    i, client_fd, client_sequence_id);
  return i;
}

static int copy_sequence(
  int client_fd,
  int client_sequence_id,
  int template_sequence_id,
  int token_count
) {
  int template_idx = get_sequence_idx(client_fd, template_sequence_id);
  if (template_idx < 0) {
    fprintf(stderr, "copy_sequence: sequence for client %d, id %d not found\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence not found", 25);
    return -1;
  }
  SEQUENCE *template_sequence = &sequences[template_idx];
  if (template_sequence->state != EVALUATED) {
    fprintf(stderr,
      "copy_sequence: sequence for client %d, id %d is not evaluated\n",
      client_fd, template_sequence_id);
    send_message(client_fd, "error sequence is not evaluated", 32);
    return -1;
  }
  int sequence_idx = create_sequence(client_fd, client_sequence_id);
  template_sequence = &sequences[template_idx]; // maybe reallocated
  SEQUENCE *sequence = &sequences[sequence_idx];
  sequence->tokens = allocate_int_array(token_count);
  sequence->positions = allocate_int_array(token_count);
  for (int i = 0; i < token_count; ++i) {
    sequence->tokens[i] = template_sequence->tokens[i];
    sequence->positions[i] = template_sequence->positions[i];
  }
  sequence->state = UNMODIFIED;
  sequence->tokens_added = 0;
  sequence->evaluation_position = template_sequence->evaluation_position;
  sequence->was_shifted = false;
  fprintf(stderr, "llama_memory_seq_cp(current_memory, %d, %d, 0, %d)\n",
    template_idx, sequence_idx, token_count);
  llama_memory_seq_cp(
    current_memory, template_idx, sequence_idx, 0, token_count);
  return sequence_idx;
}

static void free_client_sequence(int client_fd, int client_sequence_id) {
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (
      sequence->state != INVALID &&
      sequence->client_fd == client_fd &&
      sequence->client_sequence_id == client_sequence_id
    ) {
      fprintf(stderr, "freeing server sequence %d (client %d, id %d)\n",
	i, client_fd, client_sequence_id);
      sequence->state = INVALID;
      deallocate_array(sequence->tokens);
      deallocate_array(sequence->positions);
      fprintf(stderr, "llama_memory_seq_rm(current_memory, %d, 0, -1)\n", i);
      llama_memory_seq_rm(current_memory, i, 0, -1);
      break;
    }
  }
}

static void free_all_client_sequences(int client_fd) {
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state != INVALID && sequence->client_fd == client_fd) {
      fprintf(stderr, "freeing server sequence %d (client %d, id %d)\n",
	i, client_fd, sequence->client_sequence_id);
      sequence->state = INVALID;
      deallocate_array(sequence->tokens);
      deallocate_array(sequence->positions);
      fprintf(stderr, "llama_memory_seq_rm(current_memory, %d, 0, -1)\n", i);
      llama_memory_seq_rm(current_memory, i, 0, -1);
    }
  }
}

static void truncate_sequence(
  int client_fd,
  int client_sequence_id,
  int token_count
) {
  int sequence_idx = get_sequence_idx(client_fd, client_sequence_id);
  if (sequence_idx < 0) {
    fprintf(stderr,
      "truncate_sequence: sequence for client %d, id %d not found\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == IN_EVALUATION) {
    fprintf(stderr,
      "truncate_sequence: sequence for client %d, id %d "
      "is currently evaluated\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  if (sequence->state == MODIFIED) {
    fprintf(stderr,
      "truncate_sequence: sequence for client %d, id %d was modified\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence was modified", 28);
    return;
  }
  if (token_count < 0) {
    fprintf(stderr,
      "truncate_sequence: sequence for client %d, id %d "
      "token_count is negative\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error token_count is negative", 30);
    return;
  }
  if (token_count < array_length(sequence->tokens)) {
    set_array_length(sequence->tokens, token_count);
    set_array_length(sequence->positions, token_count);
    sequence->state = MODIFIED;
  }
}

static void add_tokens(
  int client_fd,
  int client_sequence_id,
  int *tokens
) {
  int sequence_idx = get_sequence_idx(client_fd, client_sequence_id);
  if (sequence_idx < 0) {
    fprintf(stderr, "add_tokens: sequence for client %d, id %d not found\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == IN_EVALUATION) {
    fprintf(stderr,
      "add_tokens: sequence for client %d, id %d is currently evaluated\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  int pos = array_length(sequence->tokens);
  sequence->tokens = append_to_int_array(sequence->tokens, tokens);
  int n = array_length(sequence->tokens);
  sequence->positions = reallocate_int_array(sequence->positions, n);
  for (int i = pos; i < n; ++i) {
    sequence->positions[i] = -1;
  }
  set_array_length(sequence->positions, n);
  if (sequence->state != MODIFIED) {
    sequence->state = MODIFIED;
    sequence->tokens_added = n-pos;
    sequence->was_shifted = false;
  } else {
    sequence->tokens_added += n-pos;
  }
}

static void delete_tokens(
  int client_fd,
  int client_sequence_id,
  int position,
  int token_count
) {
  int sequence_idx = get_sequence_idx(client_fd, client_sequence_id);
  if (sequence_idx < 0) {
    fprintf(stderr, "delete_tokens: sequence for client %d, id %d not found\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == IN_EVALUATION) {
    fprintf(stderr,
      "delete_tokens: sequence for client %d, id %d is currently evaluated\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  if (position < 0 || position > array_length(sequence->tokens)) {
    fprintf(stderr,
      "delete_tokens: position %d out of range for client %d, id %d\n",
      position, client_fd, client_sequence_id);
    send_message(client_fd, "error position out of range", 28);
    return;
  }
  if (
    token_count < 0 || position+token_count > array_length(sequence->tokens)
  ) {
    fprintf(stderr,
      "delete_tokens: token_count %d out of range for client %d, id %d\n",
      token_count, client_fd, client_sequence_id);
    send_message(client_fd, "error token_count out of range", 31);
    return;
  }
  if (token_count > 0) {
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
  int client_sequence_id,
  int position,
  int *tokens
) {
  int sequence_idx = get_sequence_idx(client_fd, client_sequence_id);
  if (sequence_idx < 0) {
    fprintf(stderr, "insert_tokens: sequence for client %d, id %d not found\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence not found", 25);
    return;
  }
  SEQUENCE *sequence = &sequences[sequence_idx];
  if (sequence->state == IN_EVALUATION) {
    fprintf(stderr,
      "insert_tokens: sequence for client %d, id %d is currently evaluated\n",
      client_fd, client_sequence_id);
    send_message(client_fd, "error sequence is currently evaluated", 38);
    return;
  }
  if (position < 0 || position > array_length(sequence->tokens)) {
    fprintf(stderr,
      "insert_tokens: position %d out of range for client %d, id %d\n",
      position, client_fd, client_sequence_id);
    send_message(client_fd, "error position out of range", 28);
    return;
  }
  int len = array_length(tokens);
  if (len > 0) {
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
    fprintf(stderr, "Out of memory\n");
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
  fprintf(stderr, "listening on port %d\n", port_no);
  return sock;
}

static void handle_use_model(int fd, char *model_name) {
  fprintf(stderr, "use_model %s\n", model_name);
  if (!current_model_name) {
    char *full_model_name = create_string(MODEL_PATH, model_name, NULL);
    fprintf(stderr, "loading model %s\n", full_model_name);
    struct llama_model *model = load_model(full_model_name);
    if (model) {
      current_model = model;
      current_model_name = full_model_name;
      current_context = create_context(current_model);
      if (current_context) {
	current_memory = llama_get_memory(current_context);
      } else {
	llama_model_free(model);
	current_model = NULL;
	fprintf(stderr, "failed to create context\n");
	send_message(fd, "error failed to create context", 31);
      }
    } else {
      fprintf(stderr, "failed to load model %s\n", full_model_name);
      send_message(fd, "error failed to load model", 27);
    }
  } else if (strcmp(model_name, strrchr(current_model_name, '/')+1) != 0) {
    fprintf(stderr, "already using model %s\n", current_model_name);
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
    fprintf(stderr, "tokenize: missing text\n");
    send_message(fd, "error missing text", 19);
  }
}

static void handle_create_sequence(int fd, char *sequence_id) {
  if (sequence_id) {
    fprintf(stderr, "create_sequence %s\n", sequence_id);
    int client_sequence_id = atoi(sequence_id);
    if (create_sequence(fd, client_sequence_id) < 0) {
      send_message(fd, "error sequence limit reached", 29);
    }
  } else {
    fprintf(stderr, "create_sequence: missing sequence id\n");
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
	fprintf(stderr, "copy_sequence: missing token count\n");
	send_message(fd, "error missing token count", 26);
      }
    } else {
      fprintf(stderr, "copy_sequence: missing template sequence id\n");
      send_message(fd, "error missing template sequence id", 35);
    }
  } else {
    fprintf(stderr, "copy_sequence: missing arguments\n");
    send_message(fd, "error missing arguments", 24);
  }
}

static void handle_delete_sequence(int fd, char *sequence_id) {
  if (sequence_id) {
    fprintf(stderr, "delete sequence %s\n", sequence_id);
    int client_sequence_id = atoi(sequence_id);
    free_client_sequence(fd, client_sequence_id);
  } else {
    fprintf(stderr, "delete_sequence: missing sequence id\n");
    send_message(fd, "error missing sequence id", 26);
  }
}

static void send_confidences(SEQUENCE *sequence) {
  fprintf(stderr,
    "sending confidences for position %d to client %d, id %d\n",
    array_length(sequence->tokens)-1,
    sequence->client_fd, sequence->client_sequence_id);
  char buf[512];
  char *p = stpcpy(buf, "logits");
  p += sprintf(p, " %d %d 10",
    sequence->client_sequence_id, array_length(sequence->tokens)-1);
  for (int k = 0; k < 10; ++k) {
    p += sprintf(p, " %d=%f",
      sequence->confidences[k].token,
      sequence->confidences[k].logit);
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
	int client_sequence_id = atoi(sequence_id);
	int n = atoi(token_count);
	if (n == 1) {
	  fprintf(stderr, "add one token to sequence %d\n", client_sequence_id);
	} else {
	  fprintf(stderr, "add %d tokens to sequence %d\n",
	    n, client_sequence_id);
	}
	int sequence_idx = get_sequence_idx(fd, client_sequence_id);
	if (sequence_idx < 0) {
	  fprintf(stderr,
	    "add_tokens: sequence for client %d, id %d not found\n",
	    fd, client_sequence_id);
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
	add_tokens(fd, client_sequence_id, tokens);
      } else {
	fprintf(stderr, "add_tokens: missing token values\n");
	send_message(fd, "error missing token values", 27);
      }
    } else {
      fprintf(stderr, "add_tokens: missing token count\n");
      send_message(fd, "error missing token count", 26);
    }
  } else {
    fprintf(stderr, "add_tokens: missing arguments\n");
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
	fprintf(stderr, "delete_tokens: missing token count\n");
	send_message(fd, "error missing token count", 26);
      }
    } else {
      fprintf(stderr, "delete_tokens: missing position\n");
      send_message(fd, "error missing position", 23);
    }
  } else {
    fprintf(stderr, "delete_tokens: missing arguments\n");
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
	  int client_sequence_id = atoi(sequence_id);
	  int pos = atoi(position);
	  int n = atoi(token_count);
	  fprintf(stderr,
	    "insert %d tokens into sequence %d at position %d\n",
	    n, client_sequence_id, pos);
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
	  insert_tokens(fd, client_sequence_id, pos, tokens);
	} else {
	  fprintf(stderr, "insert_tokens: missing token values\n");
	  send_message(fd, "error missing token values", 27);
	}
      } else {
	fprintf(stderr, "insert_tokens: missing token count\n");
	send_message(fd, "error missing token count", 26);
      }
    } else {
      fprintf(stderr, "insert_tokens: missing position\n");
      send_message(fd, "error missing position", 23);
    }
  } else {
    fprintf(stderr, "insert_tokens: missing arguments\n");
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
      fprintf(stderr, "truncate_sequence: missing token count\n");
      send_message(fd, "error missing token count", 26);
    }
  } else {
    fprintf(stderr, "truncate_sequence: missing arguments\n");
    send_message(fd, "error missing arguments", 24);
  }
}

static void handle_evaluate(int fd, char *sequence_id) {
  if (sequence_id) {
    fprintf(stderr, "evaluate sequence %s\n", sequence_id);
    int client_sequence_id = atoi(sequence_id);
    int sequence_idx = get_sequence_idx(fd, client_sequence_id);
    if (sequence_idx < 0) {
      fprintf(stderr,
	"evaluate: sequence for client %d, id %d not found\n",
	fd, client_sequence_id);
      send_message(fd, "error sequence not found", 25);
      return;
    }
    SEQUENCE *sequence = &sequences[sequence_idx];
    if (sequence->state == MODIFIED) {
      int n = array_length(sequence->tokens);
      if (sequence->has_lookahead) {
	if (
	  sequence->has_lookahead &&
	  !sequence->was_shifted &&
	  sequence->tokens_added == 1 &&
	  sequence->positions[n-1] == -1 &&
	  sequence->tokens[n-1] == sequence->next_token
	) {
	  fprintf(stderr,
	    "using lookahead for server sequence %d (client %d, id %d)\n",
	    sequence_idx, fd, client_sequence_id);
	  sequence->positions[n-1] = n-1;
	  sequence->state = EVALUATED;
	  sequence->has_lookahead = false;
	  sequence->next_token = sequence->confidences[0].token;
	  send_confidences(sequence);
	} else {
	  fprintf(stderr,
	    "do not use lookahead for server sequence %d (client %d, id %d)\n",
	    sequence_idx, fd, client_sequence_id);
	  goto evaluate;
	}
      } else {
	evaluate:
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
	      fprintf(stderr,
		"llama_memory_seq_rm(current_memory, %d, %d, %d)\n",
		sequence_idx, s, i);
	      llama_memory_seq_rm(current_memory, sequence_idx, s, i);
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
	      fprintf(stderr,
		"llama_memory_seq_add(current_memory, %d, %d, %d, %d)\n",
		sequence_idx, s+delta, i+delta, -delta);
	      llama_memory_seq_add(
		current_memory, sequence_idx, s+delta, i+delta, -delta);
	    } else {
	      ++i;
	    }
	  }
	}
	sequence->state = IN_EVALUATION;
	// force evaluation of the last token
	sequence->positions[array_length(sequence->tokens)-1] = -1;
      }
    } else {
      fprintf(stderr,
	"evaluate: sequence for client %d, id %d was not modified\n",
	fd, client_sequence_id);
      send_message(fd, "error sequence was not modified", 32);
    }
  } else {
    fprintf(stderr, "evaluate: missing sequence id\n");
    send_message(fd, "error missing sequence id", 26);
  }
}

static void handle_get_pieces(int fd, char *arguments) {
  // return all pieces in the vocabulary
  fprintf(stderr, "get_pieces\n");
  const struct llama_vocab *vocab = llama_model_get_vocab(current_model);
  const int n_vocab = llama_vocab_n_tokens(vocab);
  char *buf = malloc(128+32*n_vocab);
  char *p = buf+sprintf(buf, "pieces %d", n_vocab);
  for (int i = 0; i < n_vocab; ++i) {
    // each piece is represented as hex values (without separating spaces)
    // the pieces are separated by spaces
    *p++ = ' ';
    unsigned char piece[32];
    int len = llama_token_to_piece(vocab, i, piece, 32, 0, true);
    for (int k = 0; k < len; ++k) {
      p += sprintf(p, "%02x", piece[k]);
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

static void handle_request(int fd, char *request) {
  fprintf(stderr, "from %d: ", fd);
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
    } else {
      fprintf(stderr, "%s - unknown request\n", request);
      char *buf = malloc(128+strlen(request));
      sprintf(buf, "error %s - unknown request", request);
      send_message(fd, buf, strlen(buf)+1);
    }
  }
}

bool has_pending_evaluations = false;

static void show_time(const char *msg) {
  struct timespec ts;
  clock_gettime(CLOCK_REALTIME, &ts);
  long hour = (ts.tv_sec%86400)/3600;
  long minute = (ts.tv_sec%3600)/60;
  long second = ts.tv_sec%60;
  long milliseconds = (ts.tv_nsec / 1000000L) % 1000L;
  fprintf(stderr, "%s %02ld:%02ld:%02ld.%03ld\n",
    msg, hour, minute, second, milliseconds);
}

static void evaluate_sequences(void) {
  // speculative evaluation only takes place if there is at least one
  // sequence with regular tokens to evaluate
  has_pending_evaluations = false;

  struct llama_batch lbatch;
  int n = 0;
  for (int i = 0; i < array_length(sequences); ++i) {
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state == IN_EVALUATION) {
      for (int k = 0; k < array_length(sequence->tokens); ++k) {
	if (sequence->positions[k] < 0) {
	  if (k < sequence->evaluation_position) {
	    sequence->evaluation_position = k;
	    fprintf(stderr,
	      "llama_memory_seq_rm(current_memory, %d, %d, -1)\n",
	      i, k);
	    llama_memory_seq_rm(current_memory, i, k, -1);
	  }
	  ++n;
	}
      }
    }
  }
  if (n == 0) return;
  if (n > MAXIMUM_BATCH_SIZE) {
    n = MAXIMUM_BATCH_SIZE;
    has_pending_evaluations = true;
  }
  // look for possible lookahead computations
  for (int i = 0; i < array_length(sequences); ++i) {
    if (n >= MAXIMUM_BATCH_SIZE) break;
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state == EVALUATED && !sequence->has_lookahead) ++n;
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
  for (int i = 0; i < array_length(sequences); ++i) {
    server_seq_ids = push_to_int_array(server_seq_ids, i);
    logits_indices = push_to_int_array(logits_indices, -1);
  }
  int sequence_count = 0;
  int prev_seq_i = -1;
  for (int i = 0; i < array_length(sequences); ++i) {
    int token_count = 0;
    SEQUENCE *sequence = &sequences[i];
    if (sequence->state == IN_EVALUATION) {
      for (int k = 0; k < array_length(sequence->tokens); ++k) {
	if (sequence->positions[k] < 0) {
	  sequence->positions[k] = k;
	  lbatch.token[idx] = sequence->tokens[k];
	  lbatch.pos[idx] = k;
	  lbatch.n_seq_id[idx] = 1;
	  lbatch.seq_id[idx] = &server_seq_ids[i];
	  lbatch.logits[idx] = (k == array_length(sequence->tokens)-1);
	  if (k == array_length(sequence->tokens)-1) {
	    logits_indices[i] = idx;
	  }
	  ++token_count;
	  if (i != prev_seq_i) {
	    ++sequence_count;
	    prev_seq_i = i;
	  }
	  if (++idx >= n) break;
	}
      }
      if (token_count == 1) {
	fprintf(stderr,
	  "evaluating one token in server sequence %d (client %d, id %d)\n",
	  i, sequence->client_fd, sequence->client_sequence_id);
      } else {
	fprintf(stderr,
	  "evaluating %d tokens in server sequence %d (client %d, id %d)\n",
	  token_count, i, sequence->client_fd, sequence->client_sequence_id);
      }
      if (idx >= n) break;
    } else if (sequence->state == EVALUATED && !sequence->has_lookahead) {
      int k = array_length(sequence->tokens);
      lbatch.token[idx] = sequence->confidences[0].token;
      lbatch.pos[idx] = k;
      lbatch.n_seq_id[idx] = 1;
      lbatch.seq_id[idx] = &server_seq_ids[i];
      lbatch.logits[idx] = true;
      logits_indices[i] = idx;
      ++sequence_count;
      prev_seq_i = i;
      fprintf(stderr,
	"evaluating lookahead token in server sequence %d (client %d, id %d)\n",
	i, sequence->client_fd, sequence->client_sequence_id);
      if (++idx >= n) break;
    }
  }
  if (n == 1) {
    fprintf(stderr, "evaluating one token in one sequence\n");
  } else if (sequence_count == 1) {
    fprintf(stderr, "evaluating %d tokens in one sequence\n", n);
  } else {
    fprintf(stderr,
      "evaluating %d tokens in %d sequences\n", n, sequence_count);
  }
  dump_batch(&lbatch);
  show_time("<<< llama_decode");
  int ret = llama_decode(current_context, lbatch);
  show_time(">>>");
  free(lbatch.token);
  free(lbatch.pos);
  free(lbatch.n_seq_id);
  free(lbatch.seq_id);
  free(lbatch.logits);
  if (ret != 0) {
    fprintf(stderr, "llama_decode failed: %d\n", ret);
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
    fprintf(stderr, "llama_decode failed: %s\n", msg);

    for(int i = 0; i < array_length(sequences); ++i) {
      SEQUENCE *sequence = &sequences[i];
      if (sequence->state != INVALID) {
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
    for (int i = 0; i < array_length(sequences); ++i) {
      SEQUENCE *sequence = &sequences[i];
      int idx = logits_indices[i];
      if (idx >= 0) {
	//show_time("<<< llama_get_logits");
	float *logits = llama_get_logits_ith(current_context, idx);
	//show_time(">>>");
	int k;
	for (k = 0; k < 10; ++k) {
	  sequence->confidences[k].token = k;
	  sequence->confidences[k].logit = logits[k];
	}
	qsort(
	  sequence->confidences, 10, sizeof(CONFIDENCE), compare_confidences);
	while (k < n_vocab) {
	  float logit = logits[k];
	  if (logit > sequence->confidences[9].logit) {
	    // find insertion position
	    int j;
	    for (j = 8; j >= 0; --j) {
	      if (logit <= sequence->confidences[j].logit) break;
	    }
	    // move entries
	    memmove(
	      &sequence->confidences[j+2], &sequence->confidences[j+1],
	      (8-j)*sizeof(CONFIDENCE));
	    sequence->confidences[j+1].token = k;
	    sequence->confidences[j+1].logit = logit;
	  }
	  ++k;
	}
	if (sequence->state == EVALUATED) {
	  sequence->has_lookahead = true;
	} else {
	  sequence->state = EVALUATED;
	  sequence->evaluation_position = array_length(sequence->tokens);
	  sequence->has_lookahead = false;
	  sequence->next_token = sequence->confidences[0].token;
	  send_confidences(sequence);
	}
      } else {
	if (sequence->state == IN_EVALUATION) {
	  int remaining_tokens = 0;
	  for (int k = 0; k < array_length(sequence->tokens); ++k) {
	    if (sequence->positions[k] < 0) {
	      ++remaining_tokens;
	    }
	  }
	  fprintf(stderr,
	    "sending progress information to client %d, id %d: "
	    "%d tokens remaining\n",
	    sequence->client_fd, sequence->client_sequence_id,
	    remaining_tokens);
	  char buf[80];
	  char *p = buf+sprintf(buf, "progress %d %d",
	    sequence->client_sequence_id, remaining_tokens);
	  send_message(sequence->client_fd, buf, p+1-buf);
	  flush();
	}
      }
    }
  }
  deallocate_array(server_seq_ids);
  deallocate_array(logits_indices);
}

static void dump_set(fd_set *set, int fd_count) {
  fprintf(stderr, "set:");
  for (int i = 0; i < fd_count; ++i) {
    if (FD_ISSET(i, set)) {
      fprintf(stderr, " %d", i);
    }
  }
  fprintf(stderr, "\n");
}

static char *rcv_buf = NULL;
static long rcv_size = 0;
static long rcv_length = 0;

static struct timespec NO_TIMEOUT = {0, 0};

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
    show_time("<<< pselect");
    //fprintf(stderr, "has_pending_evaluations: %d\n", has_pending_evaluations);
    int ret = pselect(fd_count,
      &current_read_set, &current_write_set, &current_except_set,
      has_pending_evaluations ? &NO_TIMEOUT : NULL,
      NULL);
    show_time(">>>");
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
	  fprintf(stderr, "accepted connection %d\n", client_fd);
	  if (client_fd >= fd_count) {
	    fd_count = client_fd+1;
	  }
	  FD_SET(client_fd, &read_set);
	} else {
	  if (!rcv_buf) {
	    rcv_buf = malloc(0x40000);
	    rcv_size = 0x40000;
	  }
	  int n;
	  do {
	    n = recv(fd, rcv_buf+rcv_length, rcv_size-rcv_length, 0);
	  } while (n == -1 && errno == EINTR);
	  fprintf(stderr, "received %d bytes from %d\n", n, fd);
	  if (n == -1) {
	    char msg[128];
	    sprintf(msg, "failed to receive data from %d", fd);
	    perror(msg);
	    FD_CLR(fd, &read_set);
	    close(fd);
	    free_all_client_sequences(fd);
	  } else if (n == 0) {
	    fprintf(stderr, "connection %d closed\n", fd);
	    FD_CLR(fd, &read_set);
	    close(fd);
	    free_all_client_sequences(fd);
	  } else {
	    char *request = rcv_buf;
	    char *next_request = memchr(rcv_buf+rcv_length, 0, n);
	    while (next_request) {
	      handle_request(fd, request);
	      request = next_request+1;
	      next_request = memchr(request, 0, rcv_buf+rcv_length+n-request);
	    }
	    flush();
	    rcv_length += n;
	    if (request > rcv_buf) {
	      rcv_length -= request-rcv_buf;
	      memmove(rcv_buf, request, rcv_length);
	    } else if (rcv_length == rcv_size) {
	      rcv_size *= 2;
	      rcv_buf = realloc(rcv_buf, rcv_size);
	    }
	  }
	}
      }
    }
    evaluate_sequences();
  }
}

int main(int argc, char **argv) {
  // options:
  // --gpu-offload-threshold (in GB; default: 0)
  // --concurrent-sequences (default: 1)
  // --min-ctx-size (default: 8192)
  // --max-ctx-size (default: 32768)

  // parse command line arguments and add a help option

  for (int i = 1; i < argc; ++i) {
    if (strcmp(argv[i], "--gpu-offload-threshold") == 0) {
      if (i+1 < argc) {
	gpu_offload_threshold = atol(argv[++i]);
	gpu_offload_threshold *= 1024*1024*1024;
      } else {
	fprintf(stderr, "missing argument for --gpu-offload-threshold\n");
	exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--concurrent-sequences") == 0) {
      if (i+1 < argc) {
	int n = atoi(argv[++i]);
	if (n > 0) {
	  maximum_sequences = n;
	} else {
	  fprintf(stderr, "invalid argument for --concurrent-sequences\n");
	  exit(EXIT_FAILURE);
	}
      } else {
	fprintf(stderr, "missing argument for --concurrent-sequences\n");
	exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--min-ctx-size") == 0) {
      if (i+1 < argc) {
	int n = atoi(argv[++i]);
	if (n > 0) {
	  minimum_context_size = n;
	} else {
	  fprintf(stderr, "invalid argument for --min-ctx-size\n");
	  exit(EXIT_FAILURE);
	}
      } else {
	fprintf(stderr, "missing argument for --min-ctx-size\n");
	exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--max_ctx_size") == 0) {
      if (i+1 < argc) {
	int n = atoi(argv[++i]);
	if (n > 0) {
	  maximum_context_size = n;
	} else {
	  fprintf(stderr, "invalid argument for --max-ctx-size\n");
	  exit(EXIT_FAILURE);
	}
      } else {
	fprintf(stderr, "missing argument for --max-ctx-size\n");
	exit(EXIT_FAILURE);
      }
    } else if (strcmp(argv[i], "--help") == 0) {
      fprintf(stderr,
	"Usage: %s [options]\n"
	"Options:\n"
	"  --gpu-offload-threshold <size>  (in GB; default: 0)\n"
	"  --concurrent-sequences <count>  (default: 1)\n"
	"  --min-ctx-size <size>           (default: 8192)\n"
	"  --max-ctx-size <size>           (default: 32768)\n"
	"  --help                          (shows this help)\n",
	argv[0]);
      exit(EXIT_SUCCESS);
    } else {
      fprintf(stderr, "unknown option: %s\n", argv[i]);
      exit(EXIT_FAILURE);
    }
  }
  signal(SIGPIPE, SIG_IGN);
  initialize_llama();
  int listen_fd = start_tcp_server(7683); // LS = Llama Server
  if (listen_fd == -1) {
    fprintf(stderr, "Failed to start TCP server on port 7683\n");
    exit(EXIT_FAILURE);
  };
  handle_client_requests(listen_fd);
}
