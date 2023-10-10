/// require basic/stdlib

#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  string__452442333 = 1,
  string__3803287238,
  func__main,
  func__initialize,
  func__load_source_file,
  func__read_head,
  func__store_head,
  func__close_source_file,
  func__check_head,
  func__check_if_update_is_necessary,
  func__maybe_build,
  func__create_build_process,
  func__check_process,
  func__handle_out,
  func__read_from_out,
  func__handle_err,
  func__read_from_err,
  func__handle_process,
  func__joined_process,
  func__save_autogen,
  func__saved,
  list__MANY_PARAMETERS___string__452442333___string__3803287238,
  func__main__1,
  func__main__2,
  character__47,
  number__m1,
  string__1425785034,
  number__4096,
  func__close_source_file__1,
  string__91906412,
  func__check_head__1,
  func__check_head__2,
  character__32,
  character__10,
  func__check_head__2__1,
  func__check_head__2__2,
  number__1,
  character__62,
  func__check_head__2__1__1,
  func__check_head__2__1__2,
  func__check_head__2__1__make_absolute,
  number__2,
  func__check_head__2__1__make_absolute__1,
  func__check_head__2__1__make_absolute__2,
  func__check_head__2__1__make_absolute__3,
  string__142698438,
  func__check_if_update_is_necessary__1,
  func__maybe_build__1,
  func__maybe_build__2,
  func__create_build_process__1,
  func__create_build_process__2,
  string__3614353116,
  string__1289399539,
  string__2577886713,
  func__read_from_out__1,
  func__read_from_out__2,
  func__read_from_err__1,
  func__read_from_err__2,
  number__0,
  func__joined_process__1,
  func__joined_process__2,
  string__2802191602,
  string__755967567,
  string__2848049997,
  string__1142103799,
  func___module
};

enum {
  var_no__source_filename_of = FIRST_VAR+0,
  var_no__head_of,
  var_no__source_fd_of,
  var_no__command_of,
  var_no__arguments_of,
  var_no__destination_filename_of,
  var_no__do_update,
  var_no__pid_of,
  var_no__out_fd_of,
  var_no__err_fd_of,
  var_no__data_of,
  var_no__exit_status_of,
  var_no__filenames,
  var_no__main,
  var_no__initialize,
  var_no__load_source_file,
  var_no__read_head,
  var_no__store_head,
  var_no__close_source_file,
  var_no__check_head,
  var_no__check_if_update_is_necessary,
  var_no__maybe_build,
  var_no__create_build_process,
  var_no__check_process,
  var_no__handle_out,
  var_no__read_from_out,
  var_no__handle_err,
  var_no__read_from_err,
  var_no__handle_process,
  var_no__joined_process,
  var_no__save_autogen,
  var_no__saved,
  var_no__list,
  var_no__MANY_PARAMETERS,
  var_no__program_parameters,
  var_no__io_task_manager,
  var_no__std_types___io_task,
  var_no__main__self,
  var_no__for_each,
  var_no__main__1__filename = 4,
  var_no__fork = FIRST_VAR+39,
  var_no__next,
  var_no__exit,
  var_no__initialize__self = 4,
  var_no__initialize__source_filename = 5,
  var_no__initialize__path = 6,
  var_no__before = FIRST_VAR+42,
  var_no__perform_io,
  var_no__undefined,
  var_no__load_source_file__self = 6,
  var_no__load_source_file__io = 7,
  var_no__load_source_file__arguments = 8,
  var_no__open = FIRST_VAR+45,
  var_no__performed_io,
  var_no__read_head__self = 5,
  var_no__read_from = FIRST_VAR+47,
  var_no__store_head__self = 4,
  var_no__store_head__head = 5,
  var_no__close_source_file__self = FIRST_VAR+48,
  var_no__close_source_file__io = 4,
  var_no__close_source_file__arguments = 5,
  var_no__close_source_file__error = 6,
  var_no__try = FIRST_VAR+49,
  var_no__close,
  var_no__check_head__self,
  var_no__check_head__head = 5,
  var_no__check_head__autogen = FIRST_VAR+52,
  var_no__behind,
  var_no__is_empty,
  var_no__if,
  var_no__check_head__2__command,
  var_no__check_head__2__raw_arguments = 5,
  var_no__check_head__2__source_filename = FIRST_VAR+57,
  var_no__check_head__2__path,
  var_no__check_head__2__arguments,
  var_no__check_head__2__destination_filename,
  var_no__between,
  var_no__split,
  var_no__empty_list,
  var_no__check_head__2__1__argument,
  var_no__check_head__2__1__make_absolute = -func__check_head__2__1__make_absolute,
  var_no__std___equal = FIRST_VAR+65,
  var_no__range,
  var_no__push,
  var_no__check_head__2__1__make_absolute__filename,
  var_no__is_not_empty,
  var_no__std___and,
  var_no__has_prefix,
  var_no__string,
  var_no__check_if_update_is_necessary__self = 6,
  var_no__check_if_update_is_necessary__io = 7,
  var_no__check_if_update_is_necessary__source_status = FIRST_VAR+73,
  var_no__check_if_update_is_necessary__destination_status,
  var_no__stat,
  var_no__is_an_error,
  var_no__std___or,
  var_no__modification_time_of,
  var_no__std___less,
  var_no__maybe_build__self,
  var_no__create_build_process__self,
  var_no__create_build_process__io,
  var_no__create_build_process__pid,
  var_no__create_build_process__in_fd,
  var_no__create_build_process__out_fd,
  var_no__create_build_process__err_fd,
  var_no__create_process,
  var_no__std___string,
  var_no__additional_error_information_of,
  var_no__check_process__self = 4,
  var_no__pause = FIRST_VAR+90,
  var_no__handle_out__self = 5,
  var_no__read_from_out__self = FIRST_VAR+91,
  var_no__read_from_out__data,
  var_no__parent_of,
  var_no__send,
  var_no__append,
  var_no__handle_err__self = 5,
  var_no__read_from_err__self = FIRST_VAR+96,
  var_no__read_from_err__data,
  var_no__log,
  var_no__handle_process__self = 5,
  var_no__join_process = FIRST_VAR+99,
  var_no__joined_process__self,
  var_no__joined_process__status = 5,
  var_no__wait_for_message = FIRST_VAR+101,
  var_no__join,
  var_no__EXIT_FAILURE,
  var_no__save_autogen__self = 5,
  var_no__save_autogen__data = 6,
  var_no__receive = FIRST_VAR+104,
  var_no__save,
  var_no__saved__self = 6
};

static TAB_NUM tfunc__main__1[] = {
  1, // locals
  1, // parameters:
  var_no__main__1__filename,
  // 48: fork &self std_types::io_task initialize filename
  var_no__fork, 4, var_no__main__self, var_no__std_types___io_task, var_no__initialize, var_no__main__1__filename, 1, var_no__main__self,
  // 49: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__main__2[] = {
  0, // locals
  0, // no parameters
  // 51: exit self
  var_no__exit, 1, var_no__main__self, -1
};

static TAB_NUM tfunc__main[] = {
  0, // locals
  1, // parameters:
  var_no__main__self,
  // 46: for_each filenames
  // 47:   : (filename)
  // 48:     fork &self std_types::io_task initialize filename
  // 49:     next
  // 50:   :
  // 51:     exit self
  var_no__for_each, 3, var_no__filenames, -func__main__1, -func__main__2, -1
};

static TAB_NUM tfunc__initialize[] = {
  3, // locals
  2, // parameters:
  var_no__initialize__self,
  var_no__initialize__source_filename,
  // 54: $path before(source_filename '/' -1)
  var_no__before, 3, var_no__initialize__source_filename, -character__47, -number__m1, 1, var_no__initialize__path,
  // 55: !self.source_filename_of
  LET, -1, var_no__initialize__self, var_no__source_filename_of, var_no__initialize__source_filename, var_no__initialize__self,
  // 56: perform_io self load_source_file undefined read_head
  var_no__perform_io, 4, var_no__initialize__self, var_no__load_source_file, var_no__undefined, var_no__read_head, -1
};

static TAB_NUM tfunc__load_source_file[] = {
  5, // locals
  3, // parameters:
  var_no__load_source_file__self,
  var_no__load_source_file__io,
  var_no__load_source_file__arguments,
  // 59: ... source_filename_of(self)
  var_no__source_filename_of, 1, var_no__load_source_file__self, 1, 4,
  // 59: open! !self.source_fd_of source_filename_of(self) "r"
  var_no__open, 2, 4, -string__1425785034, -4, 5,
  // 59: ... !self.source_fd_of
  LET, -1, var_no__load_source_file__self, var_no__source_fd_of, 5, var_no__load_source_file__self,
  // 60: ... source_fd_of(self)
  var_no__source_fd_of, 1, var_no__load_source_file__self, 1, 4,
  // 60: performed_io self io source_fd_of(self)
  var_no__performed_io, 3, var_no__load_source_file__self, var_no__load_source_file__io, 4, -1
};

static TAB_NUM tfunc__read_head[] = {
  2, // locals
  1, // parameters:
  var_no__read_head__self,
  // 63: ... source_fd_of(self)
  var_no__source_fd_of, 1, var_no__read_head__self, 1, 4,
  // 63: read_from self source_fd_of(self) 4096 store_head
  // 64:   # read at least 4 KiB (maximum is 64 KiB)
  var_no__read_from, 4, var_no__read_head__self, 4, -number__4096, var_no__store_head, -1
};

static TAB_NUM tfunc__store_head[] = {
  2, // locals
  2, // parameters:
  var_no__store_head__self,
  var_no__store_head__head,
  // 67: !self.head_of
  LET, -1, var_no__store_head__self, var_no__head_of, var_no__store_head__head, var_no__store_head__self,
  // 68: perform_io self close_source_file undefined check_head
  var_no__perform_io, 4, var_no__store_head__self, var_no__close_source_file, var_no__undefined, var_no__check_head, -1
};

static TAB_NUM tfunc__close_source_file__1[] = {
  1, // locals
  0, // no parameters
  // 71: ... source_fd_of(self)
  var_no__source_fd_of, 1, var_no__close_source_file__self, 1, 4,
  // 71: ... close! source_fd_of(self)
  var_no__close, 1, 4, -2
};

static TAB_NUM tfunc__close_source_file[] = {
  3, // locals
  3, // parameters:
  var_no__close_source_file__self,
  var_no__close_source_file__io,
  var_no__close_source_file__arguments,
  // 71: try $error: close! source_fd_of(self)
  var_no__try, 1, -func__close_source_file__1, -4, var_no__close_source_file__error,
  // 72: performed_io self io error
  var_no__performed_io, 3, var_no__close_source_file__self, var_no__close_source_file__io, var_no__close_source_file__error, -1
};

static TAB_NUM tfunc__check_head__1[] = {
  0, // locals
  0, // no parameters
  // 79: exit self
  var_no__exit, 1, var_no__check_head__self, -1
};

static TAB_NUM tfunc__check_head__2__1__1[] = {
  1, // locals
  0, // no parameters
  // 91: ... range(argument 2 -1)
  var_no__range, 3, var_no__check_head__2__1__argument, -number__2, -number__m1, 1, 4,
  // 91: !destination_filename make_absolute(range(argument 2 -1))
  var_no__check_head__2__1__make_absolute, 1, 4, 1, var_no__check_head__2__destination_filename,
  // 92: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__check_head__2__1__2[] = {
  1, // locals
  0, // no parameters
  // 94: ... make_absolute(argument)
  var_no__check_head__2__1__make_absolute, 1, var_no__check_head__2__1__argument, 1, 4,
  // 94: push &arguments make_absolute(argument)
  var_no__push, 2, var_no__check_head__2__arguments, 4, 1, var_no__check_head__2__arguments,
  // 95: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__check_head__2__1__make_absolute__1[] = {
  1, // locals
  0, // no parameters
  // 99: ... filename .has_prefix. "./"
  var_no__has_prefix, 2, var_no__check_head__2__1__make_absolute__filename, -string__142698438, 1, 4,
  // 99: ... filename .has_prefix. "./"
  LET, 1, 4, -1
};

static TAB_NUM tfunc__check_head__2__1__make_absolute__2[] = {
  2, // locals
  0, // no parameters
  // 100: ... range(filename 2 -1)
  var_no__range, 3, var_no__check_head__2__1__make_absolute__filename, -number__2, -number__m1, 1, 5,
  // 100: ... string(path range(filename 2 -1))
  var_no__string, 2, var_no__check_head__2__path, 5, 1, 4,
  // 100: -> string(path range(filename 2 -1))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__check_head__2__1__make_absolute__3[] = {
  0, // locals
  0, // no parameters
  // 101: -> filename
  LET, 1, var_no__check_head__2__1__make_absolute__filename, -1
};

static TAB_NUM tfunc__check_head__2__1__make_absolute[] = {
  2, // locals
  1, // parameters:
  var_no__check_head__2__1__make_absolute__filename,
  // 99: path.is_not_empty
  var_no__is_not_empty, 1, var_no__check_head__2__path, 1, 5,
  // 99: path.is_not_empty && filename .has_prefix. "./"
  var_no__std___and, 2, 5, -func__check_head__2__1__make_absolute__1, 1, 4,
  //  98: if
  //  99:   path.is_not_empty && filename .has_prefix. "./"
  // 100:   -> string(path range(filename 2 -1))
  // 101:   -> filename
  var_no__if, 3, 4, -func__check_head__2__1__make_absolute__2, -func__check_head__2__1__make_absolute__3, -1
};

static TAB_NUM tfunc__check_head__2__1[] = {
  2, // locals
  1, // parameters:
  var_no__check_head__2__1__argument,
  // 90: argument(1)
  var_no__check_head__2__1__argument, 1, -number__1, 1, 5,
  // 90: argument(1) == '>'
  var_no__std___equal, 2, 5, -character__62, 1, 4,
  // 89: if
  // 90:   argument(1) == '>': # output redirection
  // 91:     !destination_filename make_absolute(range(argument 2 -1))
  // 92:     next
  // 93:   :
  // 94:     push &arguments make_absolute(argument)
  // 95:     next
  var_no__if, 3, 4, -func__check_head__2__1__1, -func__check_head__2__1__2, -1
};

static TAB_NUM tfunc__check_head__2__2[] = {
  0, // locals
  0, // no parameters
  // 103: push &arguments source_filename
  var_no__push, 2, var_no__check_head__2__arguments, var_no__check_head__2__source_filename, 1, var_no__check_head__2__arguments,
  // 104: !self.command_of
  LET, -1, var_no__check_head__self, var_no__command_of, var_no__check_head__2__command, var_no__check_head__self,
  // 105: !self.arguments_of
  LET, -1, var_no__check_head__self, var_no__arguments_of, var_no__check_head__2__arguments, var_no__check_head__self,
  // 106: !self.destination_filename_of
  LET, -1, var_no__check_head__self, var_no__destination_filename_of, var_no__check_head__2__destination_filename, var_no__check_head__self,
  // 107: perform_io self check_if_update_is_necessary maybe_build
  var_no__perform_io, 3, var_no__check_head__self, var_no__check_if_update_is_necessary, var_no__maybe_build, -1
};

static TAB_NUM tfunc__check_head__2[] = {
  2, // locals
  0, // no parameters
  // 81: $command autogen .before. ' '
  var_no__before, 2, var_no__check_head__autogen, -character__32, 1, var_no__check_head__2__command,
  // 82: ... between(autogen ' ' '@nl;')
  var_no__between, 3, var_no__check_head__autogen, -character__32, -character__10, 1, 4,
  // 82: $raw_arguments between(autogen ' ' '@nl;').split
  var_no__split, 1, 4, 1, var_no__check_head__2__raw_arguments,
  // 83: $source_filename source_filename_of(self)
  var_no__source_filename_of, 1, var_no__check_head__self, 1, var_no__check_head__2__source_filename,
  // 84: $path before(source_filename '/' -1)
  var_no__before, 3, var_no__check_head__2__source_filename, -character__47, -number__m1, 1, var_no__check_head__2__path,
  // 85: $arguments empty_list
  LET, 1, var_no__empty_list, 1, var_no__check_head__2__arguments,
  // 86: $destination_filename undefined
  LET, 1, var_no__undefined, 1, var_no__check_head__2__destination_filename,
  // 87: for_each raw_arguments
  // 88:   : (argument)
  // 89:     if
  // 90:       argument(1) == '>': # output redirection
  // 91:         !destination_filename make_absolute(range(argument 2 -1))
  // 92:         next
  // 93:       :
  // 94:         push &arguments make_absolute(argument)
  // 95:         next
  // 96:     
  // ...
  var_no__for_each, 3, var_no__check_head__2__raw_arguments, -func__check_head__2__1, -func__check_head__2__2, -1
};

static TAB_NUM tfunc__check_head[] = {
  2, // locals
  1, // parameters:
  var_no__check_head__self,
  // 75: $head head_of(self)
  var_no__head_of, 1, var_no__check_head__self, 1, var_no__check_head__head,
  // 76: $autogen head .behind. "# autogen "
  var_no__behind, 2, var_no__check_head__head, -string__91906412, 1, var_no__check_head__autogen,
  // 78: autogen.is_empty
  var_no__is_empty, 1, var_no__check_head__autogen, 1, 4,
  // 77: if
  // 78:   autogen.is_empty:
  // 79:     exit self
  // 80:   :
  // 81:     $command autogen .before. ' '
  // 82:     $raw_arguments between(autogen ' ' '@nl;').split
  // 83:     $source_filename source_filename_of(self)
  // 84:     $path before(source_filename '/' -1)
  // 85:     $arguments empty_list
  // 86:     $destination_filename undefined
  // ...
  var_no__if, 3, 4, -func__check_head__1, -func__check_head__2, -1
};

static TAB_NUM tfunc__check_if_update_is_necessary__1[] = {
  3, // locals
  0, // no parameters
  // 116: modification_time_of(destination_status)
  var_no__modification_time_of, 1, var_no__check_if_update_is_necessary__destination_status, 1, 5,
  // 117: modification_time_of(source_status)
  var_no__modification_time_of, 1, var_no__check_if_update_is_necessary__source_status, 1, 6,
  // 115: <
  // 116:   modification_time_of(destination_status)
  // 117:   modification_time_of(source_status)
  var_no__std___less, 2, 5, 6, 1, 4,
  // 115: <
  // 116:   modification_time_of(destination_status)
  // 117:   modification_time_of(source_status)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__check_if_update_is_necessary[] = {
  4, // locals
  2, // parameters:
  var_no__check_if_update_is_necessary__self,
  var_no__check_if_update_is_necessary__io,
  // 110: ... source_filename_of(self)
  var_no__source_filename_of, 1, var_no__check_if_update_is_necessary__self, 1, 4,
  // 110: stat! $source_status source_filename_of(self)
  var_no__stat, 1, 4, -4, var_no__check_if_update_is_necessary__source_status,
  // 111: ... destination_filename_of(self)
  var_no__destination_filename_of, 1, var_no__check_if_update_is_necessary__self, 1, 4,
  // 111: stat! $destination_status destination_filename_of(self)
  var_no__stat, 1, 4, -4, var_no__check_if_update_is_necessary__destination_status,
  // 114: destination_status.is_an_error
  var_no__is_an_error, 1, var_no__check_if_update_is_necessary__destination_status, 1, 4,
  // 112: !self.do_update
  // 113:   ||
  // 114:     destination_status.is_an_error
  // 115:     <
  // 116:       modification_time_of(destination_status)
  // 117:       modification_time_of(source_status)
  var_no__std___or, 2, 4, -func__check_if_update_is_necessary__1, 1, 5,
  // 112: !self.do_update
  LET, -1, var_no__check_if_update_is_necessary__self, var_no__do_update, 5, var_no__check_if_update_is_necessary__self,
  // 118: performed_io self io undefined
  var_no__performed_io, 3, var_no__check_if_update_is_necessary__self, var_no__check_if_update_is_necessary__io, var_no__undefined, -1
};

static TAB_NUM tfunc__maybe_build__1[] = {
  0, // locals
  0, // no parameters
  // 123: perform_io self create_build_process undefined check_process
  var_no__perform_io, 4, var_no__maybe_build__self, var_no__create_build_process, var_no__undefined, var_no__check_process, -1
};

static TAB_NUM tfunc__maybe_build__2[] = {
  0, // locals
  0, // no parameters
  // 125: exit self
  var_no__exit, 1, var_no__maybe_build__self, -1
};

static TAB_NUM tfunc__maybe_build[] = {
  1, // locals
  1, // parameters:
  var_no__maybe_build__self,
  // 122: do_update(self)
  var_no__do_update, 1, var_no__maybe_build__self, 1, 4,
  // 121: if
  // 122:   do_update(self):
  // 123:     perform_io self create_build_process undefined check_process
  // 124:   :
  // 125:     exit self
  var_no__if, 3, 4, -func__maybe_build__1, -func__maybe_build__2, -1
};

static TAB_NUM tfunc__create_build_process__1[] = {
  2, // locals
  0, // no parameters
  // 133: ... command_of(self)
  var_no__command_of, 1, var_no__create_build_process__self, 1, 4,
  // 132: !pid.additional_error_information_of "
  // 133:   spawn "@(command_of(self))"@
  var_no__std___string, 3, -string__3614353116, 4, -string__1289399539, 1, 5,
  // 132: !pid.additional_error_information_of
  LET, -1, var_no__create_build_process__pid, var_no__additional_error_information_of, 5, var_no__create_build_process__pid,
  // 134: performed_io self io pid
  var_no__performed_io, 3, var_no__create_build_process__self, var_no__create_build_process__io, var_no__create_build_process__pid, -1
};

static TAB_NUM tfunc__create_build_process__2[] = {
  0, // locals
  0, // no parameters
  // 136: !self.pid_of
  LET, -1, var_no__create_build_process__self, var_no__pid_of, var_no__create_build_process__pid, var_no__create_build_process__self,
  // 137: !self.out_fd_of
  LET, -1, var_no__create_build_process__self, var_no__out_fd_of, var_no__create_build_process__out_fd, var_no__create_build_process__self,
  // 138: !self.err_fd_of
  LET, -1, var_no__create_build_process__self, var_no__err_fd_of, var_no__create_build_process__err_fd, var_no__create_build_process__self,
  // 139: close! in_fd
  var_no__close, 1, var_no__create_build_process__in_fd, -3,
  // 140: performed_io self io undefined
  var_no__performed_io, 3, var_no__create_build_process__self, var_no__create_build_process__io, var_no__undefined, -1
};

static TAB_NUM tfunc__create_build_process[] = {
  2, // locals
  2, // parameters:
  var_no__create_build_process__self,
  var_no__create_build_process__io,
  // 129: command_of(self)
  var_no__command_of, 1, var_no__create_build_process__self, 1, 4,
  // 129: ... arguments_of(self)
  var_no__arguments_of, 1, var_no__create_build_process__self, 1, 5,
  // 128: create_process! $pid $in_fd $out_fd $err_fd
  // 129:   command_of(self) arguments_of(self)
  var_no__create_process, 2, 4, 5, -7, var_no__create_build_process__pid, var_no__create_build_process__in_fd, var_no__create_build_process__out_fd, var_no__create_build_process__err_fd,
  // 131: pid.is_an_error
  var_no__is_an_error, 1, var_no__create_build_process__pid, 1, 4,
  // 130: if
  // 131:   pid.is_an_error:
  // 132:     !pid.additional_error_information_of "
  // 133:       spawn "@(command_of(self))"@
  // 134:     performed_io self io pid
  // 135:   :
  // 136:     !self.pid_of pid
  // 137:     !self.out_fd_of out_fd
  // 138:     !self.err_fd_of err_fd
  // 139:     close! in_fd
  // ...
  var_no__if, 3, 4, -func__create_build_process__1, -func__create_build_process__2, -2
};

static TAB_NUM tfunc__check_process[] = {
  1, // locals
  1, // parameters:
  var_no__check_process__self,
  // 143: fork &self self handle_out
  var_no__fork, 3, var_no__check_process__self, var_no__check_process__self, var_no__handle_out, 1, var_no__check_process__self,
  // 144: fork &self self handle_err
  var_no__fork, 3, var_no__check_process__self, var_no__check_process__self, var_no__handle_err, 1, var_no__check_process__self,
  // 145: pause self handle_process
  var_no__pause, 2, var_no__check_process__self, var_no__handle_process, -1
};

static TAB_NUM tfunc__handle_out[] = {
  2, // locals
  1, // parameters:
  var_no__handle_out__self,
  // 148: !self.data_of
  LET, -1, var_no__handle_out__self, var_no__data_of, -string__2577886713, var_no__handle_out__self,
  // 149: ... out_fd_of(self)
  var_no__out_fd_of, 1, var_no__handle_out__self, 1, 4,
  // 149: read_from self out_fd_of(self) 1 read_from_out
  var_no__read_from, 4, var_no__handle_out__self, 4, -number__1, var_no__read_from_out, -1
};

static TAB_NUM tfunc__read_from_out__1[] = {
  2, // locals
  0, // no parameters
  // 154: ... parent_of(self)
  var_no__parent_of, 1, var_no__read_from_out__self, 1, 4,
  // 154: ... data_of(self)
  var_no__data_of, 1, var_no__read_from_out__self, 1, 5,
  // 154: send &self parent_of(self) data_of(self)
  var_no__send, 3, var_no__read_from_out__self, 4, 5, 1, var_no__read_from_out__self,
  // 155: exit self
  var_no__exit, 1, var_no__read_from_out__self, -1
};

static TAB_NUM tfunc__read_from_out__2[] = {
  2, // locals
  0, // no parameters
  // 157: ... self.data_of
  var_no__data_of, 1, var_no__read_from_out__self, 1, 4,
  // 157: append &self.data_of data
  var_no__append, 2, 4, var_no__read_from_out__data, 1, 5,
  // 157: ... &self.data_of
  LET, -1, var_no__read_from_out__self, var_no__data_of, 5, var_no__read_from_out__self,
  // 158: ... out_fd_of(self)
  var_no__out_fd_of, 1, var_no__read_from_out__self, 1, 4,
  // 158: read_from self out_fd_of(self) 1 read_from_out
  var_no__read_from, 4, var_no__read_from_out__self, 4, -number__1, var_no__read_from_out, -1
};

static TAB_NUM tfunc__read_from_out[] = {
  1, // locals
  2, // parameters:
  var_no__read_from_out__self,
  var_no__read_from_out__data,
  // 153: data.is_empty
  var_no__is_empty, 1, var_no__read_from_out__data, 1, 4,
  // 152: if
  // 153:   data.is_empty:
  // 154:     send &self parent_of(self) data_of(self)
  // 155:     exit self
  // 156:   :
  // 157:     append &self.data_of data
  // 158:     read_from self out_fd_of(self) 1 read_from_out
  var_no__if, 3, 4, -func__read_from_out__1, -func__read_from_out__2, -1
};

static TAB_NUM tfunc__handle_err[] = {
  2, // locals
  1, // parameters:
  var_no__handle_err__self,
  // 161: ... err_fd_of(self)
  var_no__err_fd_of, 1, var_no__handle_err__self, 1, 4,
  // 161: read_from self err_fd_of(self) 1 read_from_err
  var_no__read_from, 4, var_no__handle_err__self, 4, -number__1, var_no__read_from_err, -1
};

static TAB_NUM tfunc__read_from_err__1[] = {
  0, // locals
  0, // no parameters
  // 166: exit self 0
  var_no__exit, 2, var_no__read_from_err__self, -number__0, -1
};

static TAB_NUM tfunc__read_from_err__2[] = {
  1, // locals
  0, // no parameters
  // 168: log &self data
  var_no__log, 2, var_no__read_from_err__self, var_no__read_from_err__data, 1, var_no__read_from_err__self,
  // 169: ... err_fd_of(self)
  var_no__err_fd_of, 1, var_no__read_from_err__self, 1, 4,
  // 169: read_from self err_fd_of(self) 1 read_from_err
  var_no__read_from, 4, var_no__read_from_err__self, 4, -number__1, var_no__read_from_err, -1
};

static TAB_NUM tfunc__read_from_err[] = {
  1, // locals
  2, // parameters:
  var_no__read_from_err__self,
  var_no__read_from_err__data,
  // 165: data.is_empty
  var_no__is_empty, 1, var_no__read_from_err__data, 1, 4,
  // 164: if
  // 165:   data.is_empty:
  // 166:     exit self 0
  // 167:   :
  // 168:     log &self data
  // 169:     read_from self err_fd_of(self) 1 read_from_err
  var_no__if, 3, 4, -func__read_from_err__1, -func__read_from_err__2, -1
};

static TAB_NUM tfunc__handle_process[] = {
  2, // locals
  1, // parameters:
  var_no__handle_process__self,
  // 172: ... pid_of(self)
  var_no__pid_of, 1, var_no__handle_process__self, 1, 4,
  // 172: join_process self pid_of(self) joined_process
  var_no__join_process, 3, var_no__handle_process__self, 4, var_no__joined_process, -1
};

static TAB_NUM tfunc__joined_process__1[] = {
  0, // locals
  0, // no parameters
  // 178: wait_for_message self save_autogen
  var_no__wait_for_message, 2, var_no__joined_process__self, var_no__save_autogen, -1
};

static TAB_NUM tfunc__joined_process__2[] = {
  4, // locals
  0, // no parameters
  // 181: ... command_of(self)
  var_no__command_of, 1, var_no__joined_process__self, 1, 5,
  // 181: ... arguments_of(self)
  var_no__arguments_of, 1, var_no__joined_process__self, 1, 7,
  // 181: ... join(arguments_of(self))
  var_no__join, 1, 7, 1, 6,
  // 180: ... "
  // 181:   "@(command_of(self)) @(join(arguments_of(self)))" failed!
  var_no__std___string, 5, -string__1289399539, 5, -string__2802191602, 6, -string__755967567, 1, 4,
  // 180: log &self "
  // 181:   "@(command_of(self)) @(join(arguments_of(self)))" failed!
  var_no__log, 2, var_no__joined_process__self, 4, 1, var_no__joined_process__self,
  // 182: exit self EXIT_FAILURE
  var_no__exit, 2, var_no__joined_process__self, var_no__EXIT_FAILURE, -1
};

static TAB_NUM tfunc__joined_process[] = {
  2, // locals
  2, // parameters:
  var_no__joined_process__self,
  var_no__joined_process__status,
  // 175: !self.exit_status_of
  LET, -1, var_no__joined_process__self, var_no__exit_status_of, var_no__joined_process__status, var_no__joined_process__self,
  // 177: status == 0
  var_no__std___equal, 2, var_no__joined_process__status, -number__0, 1, 4,
  // 176: if
  // 177:   status == 0:
  // 178:     wait_for_message self save_autogen
  // 179:   :
  // 180:     log &self "
  // 181:       "@(command_of(self)) @(join(arguments_of(self)))" failed!
  // 182:     exit self EXIT_FAILURE
  var_no__if, 3, 4, -func__joined_process__1, -func__joined_process__2, -1
};

static TAB_NUM tfunc__save_autogen[] = {
  3, // locals
  1, // parameters:
  var_no__save_autogen__self,
  // 185: receive &self $data
  var_no__receive, 1, var_no__save_autogen__self, 2, var_no__save_autogen__self, var_no__save_autogen__data,
  // 186: ... destination_filename_of(self)
  var_no__destination_filename_of, 1, var_no__save_autogen__self, 1, 4,
  // 186: save self destination_filename_of(self) data saved
  var_no__save, 4, var_no__save_autogen__self, 4, var_no__save_autogen__data, var_no__saved, -1
};

static TAB_NUM tfunc__saved[] = {
  3, // locals
  1, // parameters:
  var_no__saved__self,
  // 190: ... destination_filename_of(self)
  var_no__destination_filename_of, 1, var_no__saved__self, 1, 5,
  // 189: ... "
  // 190:   built @(destination_filename_of(self))
  var_no__std___string, 3, -string__2848049997, 5, -string__1142103799, 1, 4,
  // 189: log &self "
  // 190:   built @(destination_filename_of(self))
  var_no__log, 2, var_no__saved__self, 4, 1, var_no__saved__self,
  // 191: exit self
  var_no__exit, 1, var_no__saved__self, -1
};

static TAB_NUM tfunc___module[] = {
  1, // locals
  0, // no parameters
  // 36: program_parameters!
  // 37:   $filenames
  // 38:   list
  // 39:     MANY_PARAMETERS "filenames" "
  // 40:       the names of the funky modules to preprocess
  var_no__program_parameters, 1, -list__MANY_PARAMETERS___string__452442333___string__3803287238, -4, var_no__filenames,
  // 43: io_task_manager! std_types::io_task main
  var_no__io_task_manager, 2, var_no__std_types___io_task, var_no__main, -2
};


static int arguments__list__MANY_PARAMETERS___string__452442333___string__3803287238[] = {
  -var_no__MANY_PARAMETERS,
  string__452442333,
  string__3803287238
};

extern FUNKY_MODULE module__basic__stdlib;

static FUNKY_MODULE *required_modules[] = {
  &module__basic__stdlib
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 9, {.str_8 = "filenames"}},
  {FLT_STRING_8, 45, {.str_8 = "the names of the funky modules to preprocess\012"}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__main}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__initialize}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__load_source_file}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__read_head}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__store_head}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__close_source_file}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__check_head}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__check_if_update_is_necessary}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__maybe_build}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__create_build_process}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__check_process}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__handle_out}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__read_from_out}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__handle_err}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__read_from_err}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__handle_process}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__joined_process}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__save_autogen}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__saved}},
  {FLT_LIST, 3, {.arguments = arguments__list__MANY_PARAMETERS___string__452442333___string__3803287238}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__main__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__main__2}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 1, {.str_8 = "r"}},
  {FLT_POSITIVE_INT64, 0, {.value = 4096}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__close_source_file__1}},
  {FLT_STRING_8, 10, {.str_8 = "# autogen "}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__2}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__check_head__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__2__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__2__1__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__check_head__2__1__make_absolute}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__2__1__make_absolute__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__2__1__make_absolute__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_head__2__1__make_absolute__3}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__check_if_update_is_necessary__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__maybe_build__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__maybe_build__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__create_build_process__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__create_build_process__2}},
  {FLT_STRING_8, 7, {.str_8 = "spawn \042"}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__read_from_out__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__read_from_out__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__read_from_err__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__read_from_err__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__joined_process__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__joined_process__2}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_STRING_8, 10, {.str_8 = "\042 failed!\012"}},
  {FLT_STRING_8, 6, {.str_8 = "built "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc___module}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "source_filename_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "head_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "source_fd_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "command_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "arguments_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "destination_filename_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "do_update\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "pid_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "out_fd_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "err_fd_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "data_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "exit_status_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "filenames\000", NULL,
  },
  {
    FOT_INITIALIZED, 0, 0,
    "main\000", NULL,
    {.const_idx = func__main}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "initialize\000", NULL,
    {.const_idx = func__initialize}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "load_source_file\000", NULL,
    {.const_idx = func__load_source_file}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_head\000", NULL,
    {.const_idx = func__read_head}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "store_head\000", NULL,
    {.const_idx = func__store_head}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "close_source_file\000", NULL,
    {.const_idx = func__close_source_file}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check_head\000", NULL,
    {.const_idx = func__check_head}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check_if_update_is_necessary\000", NULL,
    {.const_idx = func__check_if_update_is_necessary}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "maybe_build\000", NULL,
    {.const_idx = func__maybe_build}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_build_process\000", NULL,
    {.const_idx = func__create_build_process}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "check_process\000", NULL,
    {.const_idx = func__check_process}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "handle_out\000", NULL,
    {.const_idx = func__handle_out}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from_out\000", NULL,
    {.const_idx = func__read_from_out}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "handle_err\000", NULL,
    {.const_idx = func__handle_err}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "read_from_err\000", NULL,
    {.const_idx = func__read_from_err}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "handle_process\000", NULL,
    {.const_idx = func__handle_process}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "joined_process\000", NULL,
    {.const_idx = func__joined_process}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "save_autogen\000", NULL,
    {.const_idx = func__save_autogen}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "saved\000", NULL,
    {.const_idx = func__saved}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANY_PARAMETERS\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_parameters\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io_task_manager\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io_task\000std_types", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "main__self\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "fork\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "perform_io\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "performed_io\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "read_from\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "close_source_file__self\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "try\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__autogen\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__2__command\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__2__source_filename\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__2__path\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__2__arguments\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__2__destination_filename\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "between\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__2__1__argument\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_head__2__1__make_absolute__filename\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_if_update_is_necessary__source_status\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "check_if_update_is_necessary__destination_status\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "maybe_build__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "create_build_process__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "create_build_process__io\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "create_build_process__pid\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "create_build_process__in_fd\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "create_build_process__out_fd\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "create_build_process__err_fd\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_process\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "additional_error_information_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pause\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "read_from_out__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "read_from_out__data\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parent_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "send\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "read_from_err__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "read_from_err__data\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "log\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join_process\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "joined_process__self\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "wait_for_message\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "receive\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "save\000", NULL,
  }
};

FUNKY_MODULE module__autogen = {
  "_autogen",
  "/home/leachim/source/cmds/funky/master/new_compiler/autogen.fky",
  0, 1,
  0, 1,
  66, 106,
  required_modules,
  NULL, used_namespaces,
  constants_table, variables_table
};

int main(int argc, char **argv) {
  main_argc = argc;
  main_argv = argv;
  run(&module__autogen);
}
