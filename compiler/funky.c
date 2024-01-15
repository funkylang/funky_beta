/// require basic/stdlib
/// require ./character_names
/// require ./nodes
/// require ./parser
/// require ./nodes_metadata
/// require ./dump
/// require ./compile
/// require ./simplify
/// require ./simplify_autogen
/// require ./collect_literals
/// require ./collect_literals_autogen
/// require ./collect_variables
/// require ./collect_variables_autogen
/// require ./generate_tabular_code

#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  str_Wall = -2,
  str_Wnounusedfunctio = -3,
  str_Wnounusedvariabl = -4,
  str_Wnoparentheses = -5,
  str_Wnoswitch = -6,
  str_Wnotrigraphs = -7,
  str_O = -8,
  str_fomitframepointe = -9,
  str_fnostackprotecto = -10,
  str_falignfunctions = -11,
  str_falignloops = -12,
  list_48_0 = -13,
  str_assign = -14,
  str_key_value_pair = -15,
  str_list = -16,
  str_tuple = -17,
  str_sequence = -18,
  str_value_range = -19,
  func_funky__is_a_builtin_function_name = -20,
  chr_58 = -21,
  lambda_1 = -22,
  lambda_2 = -23,
  str_std = -24,
  lambda_3 = -25,
  str_std_2 = -26,
  lambda_4 = -27,
  string_1 = -28,
  lambda_5 = -29,
  str_FUNKY_INCLUDE_PA = -30,
  str_usrlocalsharefun = -31,
  chr_47 = -32,
  minus_num_1 = -33,
  chr_45 = -34,
  str_fkyrun = -35,
  lambda_do_run = -36,
  lambda_6 = -37,
  str_Missing_command = -38,
  num_1 = -39,
  lambda_7 = -40,
  str_Copyright_C = -41,
  str_filename = -42,
  str_a_source_code_fi = -43,
  str_verbose = -44,
  str_output_detailed = -45,
  list_126_0 = -46,
  str_rebuild = -47,
  str_rebuild_all_sour = -48,
  list_129_0 = -49,
  str_printc = -50,
  str_print_C_source_c = -51,
  list_132_0 = -52,
  str_FUNKY_LIBRARY_PA = -53,
  lambda_input_filename = -54,
  string_2 = -55,
  str_fky = -56,
  lambda_8 = -57,
  func_print_c = -58,
  func_build_executable = -59,
  lambda_9 = -60,
  lambda_10 = -61,
  lambda_11 = -62,
  lambda_12 = -63,
  lambda_13 = -64,
  str_creating_executa = -65,
  string_3 = -66,
  lambda_modules = -67,
  str_o = -68,
  lambda_14 = -69,
  str_L = -70,
  str_llibfkyso = -71,
  str_lm = -72,
  str_o_2 = -73,
  str_gcc = -74,
  lambda_15 = -75,
  lambda_2_do_run = -76,
  num_2 = -77,
  lambda_16 = -78,
  lambda_17 = -79,
  str_done = -80,
  func_build_library = -81,
  str_VERSION = -82,
  lambda_18 = -83,
  string_4 = -84,
  lambda_19 = -85,
  str_libfky = -86,
  str_so = -87,
  lambda_20 = -88,
  lambda_21 = -89,
  lambda_22 = -90,
  lambda_23 = -91,
  lambda_24 = -92,
  str_creating_library = -93,
  lambda_2_modules = -94,
  str_shared = -95,
  str_Wlsonamelibfky = -96,
  lambda_25 = -97,
  lambda_26 = -98,
  func_find_newest_timestamp = -99,
  lambda_27 = -100,
  lambda_timestamp_is_undefined = -101,
  lambda_28 = -102,
  lambda_29 = -103,
  lambda_30 = -104,
  lambda_31 = -105,
  lambda_32 = -106,
  func_collect_entries = -107,
  lambda_33 = -108,
  string_5 = -109,
  lambda_DIRECTORY = -110,
  chr_46 = -111,
  lambda_34 = -112,
  lambda_REGULAR_FILE = -113,
  lambda_35 = -114,
  lambda_36 = -115,
  func_compile = -116,
  lambda_loop = -117,
  lambda_37 = -118,
  lambda_38 = -119,
  lambda_39 = -120,
  lambda_40 = -121,
  lambda_41 = -122,
  lambda_42 = -123,
  lambda_43 = -124,
  lambda_44 = -125,
  str_llibfky = -126,
  str_so_2 = -127,
  lambda_45 = -128,
  func_load_or_create_c_sources = -129,
  lambda_46 = -130,
  str_c = -131,
  lambda_47 = -132,
  str_Input_file = -133,
  str__does_not_exist = -134,
  lambda_48 = -135,
  lambda_49 = -136,
  lambda_50 = -137,
  lambda_51 = -138,
  str_compiling = -139,
  lambda_52 = -140,
  lambda_53 = -141,
  lambda_54 = -142,
  lambda_c_timestamp_is_undefined = -143,
  lambda_55 = -144,
  func_maybe_compile = -145,
  lambda_56 = -146,
  func_c_compile = -147,
  lambda_57 = -148,
  lambda_58 = -149,
  lambda_59 = -150,
  lambda_60 = -151,
  lambda_61 = -152,
  lambda_62 = -153,
  str_I = -154,
  str_DNDEBUG = -155,
  str_c_2 = -156,
  lambda_63 = -157,
  lambda_64 = -158,
  lambda_65 = -159,
  func_extract_required = -160,
  lambda_66 = -161,
  str__require = -162,
  lambda_67 = -163,
  num_12 = -164,
  chr_10 = -165,
  lambda_68 = -166,
  lambda_69 = -167,
  lambda_70 = -168,
  func_load_lines = -169,
  lambda_71 = -170,
  lambda_72 = -171,
  str_Empty_source_fil = -172,
  string_6 = -173,
  lambda_73 = -174,
  lambda_74 = -175,
  str_Missing_trailing = -176,
  func_funky__syntax_error = -177,
  lambda_node_is_defined = -178,
  lambda_75 = -179,
  lambda_76 = -180,
  chr_36 = -181,
  chr_33 = -182,
  chr_38 = -183,
  chr_34 = -184,
  chr_39 = -185,
  sequence_473_1 = -186,
  lambda_77 = -187,
  lambda_78 = -188,
  lambda_79 = -189,
  lambda_80 = -190,
  lambda_81 = -191,
  func_handle_error = -192,
  lambda_82 = -193,
  lambda_83 = -194,
  lambda_84 = -195,
  num_50 = -196,
  func_display_error = -197,
  lambda_line_is_defined = -198,
  str_ERROR = -199,
  str__IN_LINE = -200,
  str__OF_FILE = -201,
  string_7 = -202,
  string_8 = -203,
  lambda_85 = -204,
  str__IN_FILE = -205,
  string_9 = -206
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_list, // extern
  var_builtin_functions, // dynamic
  var_hash_set, // extern
  var_funky__is_a_builtin_function_name, // initialized
  var_71_37_identifier, // dynamic
  var_72_1_namespace, // dynamic
  var_before, // extern
  var_is_empty, // extern
  var_std__equal, // extern
  var_has_prefix, // extern
  var_std__or, // extern
  var_behind, // extern
  var_false, // extern
  var_if, // extern
  var_funky__character_from_name, // dynamic
  var_get_character_names, // extern
  var_get_environment, // extern
  var_std__string, // extern
  var_include_path, // dynamic
  var_default_value, // extern
  var_program_name, // extern
  var_truncate_until, // extern
  var_truncate_from, // extern
  var_do_run, // dynamic
  var_funky__base_directory, // derived
  var_undefined, // extern
  var_funky__current_module_name, // derived
  var_input_filename, // dynamic
  var_be_verbose, // dynamic
  var_do_rebuild, // dynamic
  var_do_print_c, // dynamic
  var_command_line_arguments, // extern
  var_Error, // extern
  var_on, // extern
  var_COPYRIGHT, // extern
  var_MANDATORY_PARAMETER, // extern
  var_program_parameters, // extern
  var_FUNKY_LIBRARY_PATH, // dynamic
  var_std__not, // extern
  var_append, // extern
  var_update_if, // extern
  var_has_suffix, // extern
  var_base_directory, // extern
  var_until, // extern
  var_compile_module, // extern
  var_print, // extern
  var_160_10_modules, // dynamic
  var_160_19_libraries, // dynamic
  var_162_1_newest_timestamp, // dynamic
  var_163_1_exe_filename, // dynamic
  var_without_suffix, // extern
  var_164_7_exe_info, // dynamic
  var_stat, // extern
  var_is_undefined, // extern
  var_is_an_error, // extern
  var_modification_time_of, // extern
  var_std__less, // extern
  var_eprint, // extern
  var_first, // extern
  var_map, // extern
  var_180_1_arguments, // dynamic
  var_is_defined, // extern
  var_push, // extern
  var_189_37_err, // dynamic
  var_call, // extern
  var_from_utf8, // extern
  var_EXIT_FAILURE, // extern
  var_exit, // extern
  var_range, // extern
  var_exec, // extern
  var_207_27_modules, // dynamic
  var_210_1_newest_timestamp, // dynamic
  var_211_1_version_filename, // dynamic
  var_213_4_version, // dynamic
  var_load, // extern
  var_trim, // extern
  var_put, // extern
  var_220_1_basename, // dynamic
  var_221_1_so_filename, // dynamic
  var_222_7_so_info, // dynamic
  var_empty_list, // extern
  var_245_37_err, // dynamic
  var_254_1_newest_timestamp, // dynamic
  var_257_19_timestamp, // dynamic
  var_break, // extern
  var_std__and, // extern
  var_next, // extern
  var_for_each, // extern
  var_273_19_path, // dynamic
  var_directory, // extern
  var_275_1_filenames, // dynamic
  var_278_1_name, // dynamic
  var_std__name_of, // extern
  var_279_1_fullname, // dynamic
  var_type_of, // extern
  var_DIRECTORY, // extern
  var_REGULAR_FILE, // extern
  var_case, // extern
  var_299_1_fky_filenames, // dynamic
  var_300_1_modules, // dynamic
  var_301_1_libraries, // dynamic
  var_302_1_object_files_handled, // dynamic
  var_empty_hash_set, // extern
  var_303_1_libraries_handled, // dynamic
  var_305_1_files_to_compile, // dynamic
  var_307_3_fky_filename, // dynamic
  var_true, // extern
  var_merge, // extern
  var_empty_insert_order_set, // extern
  var_map_reduce, // extern
  var_327_3_filename, // dynamic
  var_333_1_library_name, // dynamic
  var_loop, // extern
  var_348_1_modules, // dynamic
  var_350_3_fky_filename, // dynamic
  var_352_1_c_filename, // dynamic
  var_353_7_fky_info, // dynamic
  var_356_7_c_info, // dynamic
  var_tuple, // extern
  var_377_35_c_source, // dynamic
  var_378_1_basename, // dynamic
  var_to_utf8, // extern
  var_save, // extern
  var_387_8_filename, // dynamic
  var_387_41_fky_lines, // dynamic
  var_tuple_or_error, // extern
  var_393_1_compiled_modules, // dynamic
  var_396_8_fky_filename, // dynamic
  var_396_22_c_timestamp, // dynamic
  var_397_1_basename, // dynamic
  var_398_1_obj_filename, // dynamic
  var_399_7_obj_info, // dynamic
  var_407_1_c_filename, // dynamic
  var_417_37_err, // dynamic
  var_430_32_c_source, // dynamic
  var_431_1_path, // dynamic
  var_432_1_required, // dynamic
  var_436_1_module_name, // dynamic
  var_is_not_empty, // extern
  var_while, // extern
  var_444_14_filename, // dynamic
  var_445_7_source, // dynamic
  var_cond, // extern
  var_split_source_into_lines, // extern
  var_funky__syntax_error, // initialized
  var_461_0_node, // dynamic
  var_463_4_column, // dynamic
  var_source_group_of, // extern
  var_465_1_line, // dynamic
  var_line_text_of, // extern
  var_length_of, // extern
  var_std__plus, // extern
  var_source_position_of, // extern
  var_std__minus, // extern
  var_std__sequence, // extern
  var_current_filename, // extern
  var_funky__SYNTAX_ERROR, // extern
  var_error, // extern
  var_486_16_obj, // dynamic
  var_error_category_of, // extern
  var_SYNTAX_ERROR, // extern
  var_debug__dump_object, // extern
  var_496_1_message, // dynamic
  var_error_message_text_of, // extern
  var_error_details_of, // extern
  var_497_25_filename, // dynamic
  var_497_35_line, // dynamic
  var_497_41_position, // dynamic
  var_line_no_of, // extern
  var_to_sentence_case, // extern
  var_tabs_and_spaces, // extern
  var__END
};


static TAB_NUM t_func_funky__is_a_builtin_function_name[] = {
  1, // locals
  1, // parameters
  var_71_37_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_71_37_identifier, chr_58, 1, var_72_1_namespace,
  // is_empty
  var_is_empty, 1, var_72_1_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(72, 3),
  POS(74, 15),
  POS(73, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // builtin_functions(identifier)
  var_builtin_functions, 1, var_71_37_identifier, 1, LOCAL(1),
  //  builtin_functions(identifier)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(75, 8),
  POS(75, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__equal, 2, var_72_1_namespace, str_std, 1, LOCAL(1),
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__or, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(78, 9),
  POS(78, 9),
  POS(77, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // namespace .has_prefix. "std-"
  var_has_prefix, 2, var_72_1_namespace, str_std_2, 1, LOCAL(1),
  // namespace .has_prefix. "std-"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(78, 31),
  POS(78, 31)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // identifier .behind. "::")
  var_behind, 2, var_71_37_identifier, string_1, 1, LOCAL(1),
  // builtin_functions(identifier .behind. "::")
  var_builtin_functions, 1, LOCAL(1), 1, LOCAL(2),
  //  builtin_functions(identifier .behind. "::")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(79, 30),
  POS(79, 12),
  POS(79, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(80, 11)
};

static TAB_NUM t_lambda_do_run[] = {
  1, // locals
  0, // parameters
  // is_empty: Error "Missing command line arguments!"
  var_is_empty, 1, var_command_line_arguments, 1, LOCAL(1),
  // on command_line_arguments.is_empty: Error "Missing command line arguments!"
  var_on, 2, LOCAL(1), lambda_6, 0,
  // command_line_arguments(1) false false false
  var_command_line_arguments, 1, num_1, 1, LOCAL(1),
  // -> command_line_arguments(1) false false false
  LET, 4, LOCAL(1), var_false, var_false, var_false, TAIL_CALL,
  POS(98, 31),
  POS(98, 5),
  POS(99, 8),
  POS(99, 5)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // Error "Missing command line arguments!"
  var_Error, 1, str_Missing_command, TAIL_CALL,
  POS(98, 41)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 2, var_COPYRIGHT, str_Copyright_C, 1, LOCAL(1),
  // list
  var_list, 3, var_MANDATORY_PARAMETER, str_filename, str_a_source_code_fi, 1, LOCAL(2),
  // program_parameters!
  var_program_parameters, 5, LOCAL(1), LOCAL(2), list_126_0, list_129_0, list_132_0, IO_TAIL_CALL,
  POS(102, 7),
  POS(123, 7),
  POS(101, 5)
};

static TAB_NUM t_lambda_input_filename[] = {
  1, // locals
  0, // parameters
  // append("./" input_filename)
  var_append, 2, string_2, var_input_filename, 1, LOCAL(1),
  //  append("./" input_filename)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(139, 22),
  POS(139, 21)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // if!
  var_if, 3, var_do_print_c, func_print_c, func_build_executable, IO_TAIL_CALL,
  POS(143, 5)
};

static TAB_NUM t_func_print_c[] = {
  2, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // load_lines! $fky_lines input_filename
  func_load_lines, 1, var_input_filename, IO_CALL(1), LOCAL(1),
  // compile_module $c_source input_filename fky_lines
  var_compile_module, 2, var_input_filename, LOCAL(1), 1, LOCAL(2),
  // handle_error! c_source
  func_handle_error, 1, LOCAL(2), IO_CALL(0),
  // print! c_source
  var_print, 1, LOCAL(2), IO_TAIL_CALL,
  POS(150, 3),
  POS(151, 3),
  POS(152, 3),
  POS(153, 3),
  POS(154, 3)
};

static TAB_NUM t_func_build_executable[] = {
  1, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // compile! $modules $libraries input_filename
  func_compile, 1, var_input_filename, IO_CALL(2), var_160_10_modules, var_160_19_libraries,
  // c_compile! &modules
  func_c_compile, 1, var_160_10_modules, IO_CALL(1), var_160_10_modules,
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, var_160_10_modules, 1, var_162_1_newest_timestamp,
  // $exe_filename input_filename .without_suffix. ".fky"
  var_without_suffix, 2, var_input_filename, str_fky, 1, var_163_1_exe_filename,
  // stat! $exe_info exe_filename
  var_stat, 1, var_163_1_exe_filename, IO_CALL(1), var_164_7_exe_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_9, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_12, IO_CALL(0),
  // if
  var_if, 3, var_do_run, lambda_2_do_run, lambda_16, IO_TAIL_CALL,
  POS(159, 3),
  POS(160, 3),
  POS(161, 3),
  POS(162, 3),
  POS(163, 3),
  POS(164, 3),
  POS(166, 7),
  POS(165, 3),
  POS(193, 3)
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_162_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(168, 24),
  POS(166, 7),
  POS(168, 7)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_164_7_exe_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_11, 1, LOCAL(2),
  // exe_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(169, 16),
  POS(166, 7),
  POS(169, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // modification_time_of(exe_info)
  var_modification_time_of, 1, var_164_7_exe_info, 1, LOCAL(1),
  // modification_time_of(exe_info)
  var_std__less, 2, LOCAL(1), var_162_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(exe_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(170, 26),
  POS(170, 26),
  POS(170, 7)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_13, IO_CALL(0),
  // $object_files
  var_map, 2, var_160_10_modules, lambda_modules, 1, LOCAL(3),
  // $arguments cc_options
  LET, 1, list_48_0, 1, var_180_1_arguments,
  // is_defined &arguments
  var_is_defined, 1, var_FUNKY_LIBRARY_PATH, 1, LOCAL(1),
  // update_if FUNKY_LIBRARY_PATH.is_defined &arguments
  var_update_if, 3, LOCAL(1), var_180_1_arguments, lambda_14, 1, var_180_1_arguments,
  // append &arguments object_files
  var_append, 2, var_180_1_arguments, LOCAL(3), 1, var_180_1_arguments,
  // append &arguments libraries
  var_append, 2, var_180_1_arguments, var_160_19_libraries, 1, var_180_1_arguments,
  // "-l:libfky.so.@(MAJOR)"
  var_std__string, 2, str_llibfkyso, num_0, 1, LOCAL(1),
  // push &arguments "-l:libfky.so.@(MAJOR)"
  var_push, 2, var_180_1_arguments, LOCAL(1), 1, var_180_1_arguments,
  // push &arguments "-lm"
  var_push, 2, var_180_1_arguments, str_lm, 1, var_180_1_arguments,
  // push &arguments "-o"
  var_push, 2, var_180_1_arguments, str_o_2, 1, var_180_1_arguments,
  // push &arguments exe_filename
  var_push, 2, var_180_1_arguments, var_163_1_exe_filename, 1, var_180_1_arguments,
  // call! "gcc" arguments $status $_out $err
  var_call, 2, str_gcc, var_180_1_arguments, IO_CALL(3), LOCAL(4), LOCAL(1), var_189_37_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_15, IO_TAIL_CALL,
  POS(172, 7),
  POS(174, 7),
  POS(180, 7),
  POS(181, 36),
  POS(181, 7),
  POS(183, 7),
  POS(184, 7),
  POS(185, 23),
  POS(185, 7),
  POS(186, 7),
  POS(187, 7),
  POS(188, 7),
  POS(189, 7),
  POS(190, 10),
  POS(190, 10),
  POS(190, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_executa, var_163_1_exe_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(172, 30),
  POS(172, 22)
};

static TAB_NUM t_lambda_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 176_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(178, 15),
  POS(178, 15),
  POS(177, 13)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // list("-L" FUNKY_LIBRARY_PATH))
  var_list, 2, str_L, var_FUNKY_LIBRARY_PATH, 1, LOCAL(1),
  // append(arguments list("-L" FUNKY_LIBRARY_PATH))
  var_append, 2, var_180_1_arguments, LOCAL(1), 1, LOCAL(2),
  //  append(arguments list("-L" FUNKY_LIBRARY_PATH))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(182, 29),
  POS(182, 12),
  POS(182, 11)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_189_37_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(191, 21),
  POS(191, 9),
  POS(192, 9)
};

static TAB_NUM t_lambda_2_do_run[] = {
  1, // locals
  0, // parameters
  // range(command_line_arguments 2 -1)
  var_range, 3, var_command_line_arguments, num_2, minus_num_1, 1, LOCAL(1),
  // exec! exe_filename range(command_line_arguments 2 -1)
  var_exec, 2, var_163_1_exe_filename, LOCAL(1), IO_TAIL_CALL,
  POS(195, 26),
  POS(195, 7)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_17, IO_TAIL_CALL,
  POS(197, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(198, 9)
};

static TAB_NUM t_func_build_library[] = {
  3, // locals
  0, // parameters
  // without_suffix &input_filename '/'
  var_without_suffix, 2, var_input_filename, chr_47, 1, var_input_filename,
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // collect_entries! $filenames input_filename
  func_collect_entries, 1, var_input_filename, IO_CALL(1), LOCAL(2),
  // load_or_create_c_sources! $modules filenames
  func_load_or_create_c_sources, 1, LOCAL(2), IO_CALL(1), var_207_27_modules,
  // handle_error! modules
  func_handle_error, 1, var_207_27_modules, IO_CALL(0),
  // c_compile! &modules
  func_c_compile, 1, var_207_27_modules, IO_CALL(1), var_207_27_modules,
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, var_207_27_modules, 1, var_210_1_newest_timestamp,
  // $version_filename append(input_filename "/VERSION")
  var_append, 2, var_input_filename, str_VERSION, 1, var_211_1_version_filename,
  // stat! $version_info version_filename
  var_stat, 1, var_211_1_version_filename, IO_CALL(1), LOCAL(3),
  // is_an_error
  var_is_an_error, 1, LOCAL(3), 1, LOCAL(1),
  // if $version
  var_if, 3, LOCAL(1), lambda_18, lambda_19, IO_CALL(1), var_213_4_version,
  // $basename truncate_until(input_filename '/' -1)
  var_truncate_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_220_1_basename,
  // $so_filename "libfky-@(basename)@(version).so.@(MAJOR)"
  var_std__string, 5, str_libfky, var_220_1_basename, var_213_4_version, str_so, num_0, 1, var_221_1_so_filename,
  // stat! $so_info so_filename
  var_stat, 1, var_221_1_so_filename, IO_CALL(1), var_222_7_so_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_20, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_23, IO_CALL(0),
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_26, IO_TAIL_CALL,
  POS(204, 3),
  POS(205, 3),
  POS(206, 3),
  POS(207, 3),
  POS(208, 3),
  POS(209, 3),
  POS(210, 3),
  POS(211, 3),
  POS(212, 3),
  POS(214, 18),
  POS(213, 3),
  POS(220, 3),
  POS(221, 3),
  POS(222, 3),
  POS(224, 7),
  POS(223, 3),
  POS(249, 3)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_4, TAIL_CALL,
  POS(215, 7)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // load! !version version_filename
  var_load, 1, var_211_1_version_filename, IO_CALL(1), var_213_4_version,
  // trim &version
  var_trim, 1, var_213_4_version, 1, var_213_4_version,
  // put(version '-')
  var_put, 2, var_213_4_version, chr_45, 1, LOCAL(1),
  // -> put(version '-')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(217, 7),
  POS(218, 7),
  POS(219, 10),
  POS(219, 7)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_210_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_21, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(226, 24),
  POS(224, 7),
  POS(226, 7)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_222_7_so_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_22, 1, LOCAL(2),
  // so_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(227, 15),
  POS(224, 7),
  POS(227, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // modification_time_of(so_info)
  var_modification_time_of, 1, var_222_7_so_info, 1, LOCAL(1),
  // modification_time_of(so_info)
  var_std__less, 2, LOCAL(1), var_210_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(so_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(228, 26),
  POS(228, 26),
  POS(228, 7)
};

static TAB_NUM t_lambda_23[] = {
  5, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_24, IO_CALL(0),
  // $object_files
  var_map, 2, var_207_27_modules, lambda_2_modules, 1, LOCAL(3),
  // $arguments empty_list
  LET, 1, var_empty_list, 1, LOCAL(4),
  // push &arguments "-shared"
  var_push, 2, LOCAL(4), str_shared, 1, LOCAL(4),
  // "-Wl,-soname,libfky-@(basename).so.@(MAJOR)"
  var_std__string, 4, str_Wlsonamelibfky, var_220_1_basename, str_so, num_0, 1, LOCAL(1),
  // push &arguments
  var_push, 2, LOCAL(4), LOCAL(1), 1, LOCAL(4),
  // append &arguments object_files
  var_append, 2, LOCAL(4), LOCAL(3), 1, LOCAL(4),
  // push &arguments "-o"
  var_push, 2, LOCAL(4), str_o_2, 1, LOCAL(4),
  // push &arguments so_filename
  var_push, 2, LOCAL(4), var_221_1_so_filename, 1, LOCAL(4),
  // call! "gcc" arguments $status $_out $err
  var_call, 2, str_gcc, LOCAL(4), IO_CALL(3), LOCAL(5), LOCAL(1), var_245_37_err,
  // status != 0:
  var_std__equal, 2, LOCAL(5), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_25, IO_TAIL_CALL,
  POS(230, 7),
  POS(232, 7),
  POS(238, 7),
  POS(239, 7),
  POS(241, 9),
  POS(240, 7),
  POS(242, 7),
  POS(243, 7),
  POS(244, 7),
  POS(245, 7),
  POS(246, 10),
  POS(246, 10),
  POS(246, 7)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_library, var_221_1_so_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(230, 30),
  POS(230, 22)
};

static TAB_NUM t_lambda_2_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 234_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(236, 15),
  POS(236, 15),
  POS(235, 13)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_245_37_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(247, 21),
  POS(247, 9),
  POS(248, 9)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(250, 5)
};

static TAB_NUM t_func_find_newest_timestamp[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 253_25_modules
  // $newest_timestamp undefined
  LET, 1, var_undefined, 1, var_254_1_newest_timestamp,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_27, lambda_32, IO_TAIL_CALL,
  POS(254, 3),
  POS(255, 3)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 256_3_module
  // module $_filename $timestamp
  LOCAL(2), 0, 2, LOCAL(1), var_257_19_timestamp,
  // is_undefined:
  var_is_undefined, 1, var_257_19_timestamp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timestamp_is_undefined, lambda_28, IO_TAIL_CALL,
  POS(257, 7),
  POS(259, 19),
  POS(258, 7)
};

static TAB_NUM t_lambda_timestamp_is_undefined[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp undefined
  LET, 1, var_undefined, 1, var_254_1_newest_timestamp,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(260, 11),
  POS(261, 11)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_254_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, var_next, IO_TAIL_CALL,
  POS(265, 32),
  POS(264, 15),
  POS(263, 11)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // is_defined && timestamp > newest_timestamp
  var_is_defined, 1, var_257_19_timestamp, 1, LOCAL(1),
  // is_defined && timestamp > newest_timestamp
  var_std__and, 2, LOCAL(1), lambda_30, 1, LOCAL(2),
  // timestamp.is_defined && timestamp > newest_timestamp
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(266, 25),
  POS(266, 25),
  POS(266, 15)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // newest_timestamp
  var_std__less, 2, var_254_1_newest_timestamp, var_257_19_timestamp, 1, LOCAL(1),
  // timestamp > newest_timestamp
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(266, 51),
  POS(266, 39)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp timestamp
  LET, 1, var_257_19_timestamp, 1, var_254_1_newest_timestamp,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(268, 15),
  POS(269, 15)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  newest_timestamp
  LET, 1, var_254_1_newest_timestamp, TAIL_CALL,
  POS(271, 7)
};

static TAB_NUM t_func_collect_entries[] = {
  1, // locals
  1, // parameters
  var_273_19_path,
  // directory! $entries path
  var_directory, 1, var_273_19_path, IO_CALL(1), LOCAL(1),
  // $filenames empty_list
  LET, 1, var_empty_list, 1, var_275_1_filenames,
  // for_each entries
  var_for_each, 3, LOCAL(1), lambda_33, lambda_36, IO_TAIL_CALL,
  POS(274, 3),
  POS(275, 3),
  POS(276, 3)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 277_3_entry
  // $name std::name_of(entry)
  var_std__name_of, 1, LOCAL(2), 1, var_278_1_name,
  // $fullname append(path "/" name)
  var_append, 3, var_273_19_path, string_5, var_278_1_name, 1, var_279_1_fullname,
  // type_of(entry)
  var_type_of, 1, LOCAL(2), 1, LOCAL(1),
  // case type_of(entry)
  var_case, 6, LOCAL(1), var_DIRECTORY, lambda_DIRECTORY, var_REGULAR_FILE, lambda_REGULAR_FILE, var_next, IO_TAIL_CALL,
  POS(278, 7),
  POS(279, 7),
  POS(280, 12),
  POS(280, 7)
};

static TAB_NUM t_lambda_DIRECTORY[] = {
  1, // locals
  0, // parameters
  // name .has_prefix. '.'
  var_has_prefix, 2, var_278_1_name, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_34, IO_TAIL_CALL,
  POS(283, 13),
  POS(282, 11)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // collect_entries! $more_filenames fullname
  func_collect_entries, 1, var_279_1_fullname, IO_CALL(1), LOCAL(1),
  // append &filenames more_filenames
  var_append, 2, var_275_1_filenames, LOCAL(1), 1, var_275_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(286, 15),
  POS(287, 15),
  POS(288, 15)
};

static TAB_NUM t_lambda_REGULAR_FILE[] = {
  1, // locals
  0, // parameters
  // name .has_suffix. ".fky":
  var_has_suffix, 2, var_278_1_name, str_fky, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, var_next, IO_TAIL_CALL,
  POS(291, 13),
  POS(290, 11)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // push &filenames fullname
  var_push, 2, var_275_1_filenames, var_279_1_fullname, 1, var_275_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(292, 15),
  POS(293, 15)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  filenames
  LET, 1, var_275_1_filenames, TAIL_CALL,
  POS(296, 7)
};

static TAB_NUM t_func_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 298_11_base_filename
  // $fky_filenames list(base_filename)
  var_list, 1, LOCAL(1), 1, var_299_1_fky_filenames,
  // $modules empty_list
  LET, 1, var_empty_list, 1, var_300_1_modules,
  // $libraries empty_list
  LET, 1, var_empty_list, 1, var_301_1_libraries,
  // $object_files_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_302_1_object_files_handled,
  // $libraries_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_303_1_libraries_handled,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(299, 3),
  POS(300, 3),
  POS(301, 3),
  POS(302, 3),
  POS(303, 3),
  POS(304, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // $files_to_compile empty_list
  LET, 1, var_empty_list, 1, var_305_1_files_to_compile,
  // for_each fky_filenames
  var_for_each, 3, var_299_1_fky_filenames, lambda_37, lambda_39, IO_TAIL_CALL,
  POS(305, 5),
  POS(306, 5)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  1, // parameters
  var_307_3_fky_filename,
  // object_files_handled(fky_filename)
  var_302_1_object_files_handled, 1, var_307_3_fky_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_38, IO_TAIL_CALL,
  POS(309, 11),
  POS(308, 9)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // object_files_handled(fky_filename) true
  var_302_1_object_files_handled, 2, var_307_3_fky_filename, var_true, 1, var_302_1_object_files_handled,
  // push &files_to_compile fky_filename
  var_push, 2, var_305_1_files_to_compile, var_307_3_fky_filename, 1, var_305_1_files_to_compile,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(312, 14),
  POS(313, 13),
  POS(314, 13)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_305_1_files_to_compile, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, IO_TAIL_CALL,
  POS(317, 28),
  POS(316, 9)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  modules libraries
  LET, 2, var_300_1_modules, var_301_1_libraries, TAIL_CALL,
  POS(318, 13)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // load_or_create_c_sources! $more_modules files_to_compile
  func_load_or_create_c_sources, 1, var_305_1_files_to_compile, IO_CALL(1), LOCAL(1),
  // handle_error! more_modules
  func_handle_error, 1, LOCAL(1), IO_CALL(0),
  // map_reduce $required
  var_map_reduce, 4, LOCAL(1), func_extract_required, var_merge, var_empty_insert_order_set, 1, LOCAL(2),
  // append &modules more_modules
  var_append, 2, var_300_1_modules, LOCAL(1), 1, var_300_1_modules,
  // !fky_filenames empty_list
  LET, 1, var_empty_list, 1, var_299_1_fky_filenames,
  // for_each required
  var_for_each, 3, LOCAL(2), lambda_42, var_next, IO_TAIL_CALL,
  POS(320, 13),
  POS(321, 13),
  POS(322, 13),
  POS(324, 13),
  POS(325, 13),
  POS(326, 13)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  1, // parameters
  var_327_3_filename,
  // filename(1) == '.':
  var_327_3_filename, 1, num_1, 1, LOCAL(1),
  // filename(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, lambda_44, IO_TAIL_CALL,
  POS(329, 19),
  POS(329, 19),
  POS(328, 17)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // "@(filename).fky"
  var_std__string, 2, var_327_3_filename, str_fky, 1, LOCAL(1),
  // push &fky_filenames "@(filename).fky"
  var_push, 2, var_299_1_fky_filenames, LOCAL(1), 1, var_299_1_fky_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(330, 41),
  POS(330, 21),
  POS(331, 21)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // filename .truncate_from. '/'
  var_truncate_from, 2, var_327_3_filename, chr_47, 1, LOCAL(1),
  // $library_name
  var_append, 3, str_llibfky, LOCAL(1), str_so_2, 1, var_333_1_library_name,
  // libraries_handled(library_name)
  var_303_1_libraries_handled, 1, var_333_1_library_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_45, IO_TAIL_CALL,
  POS(336, 25),
  POS(333, 21),
  POS(339, 23),
  POS(338, 21)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // libraries_handled(library_name) true
  var_303_1_libraries_handled, 2, var_333_1_library_name, var_true, 1, var_303_1_libraries_handled,
  // push &libraries library_name
  var_push, 2, var_301_1_libraries, var_333_1_library_name, 1, var_301_1_libraries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(342, 26),
  POS(343, 25),
  POS(344, 25)
};

static TAB_NUM t_func_load_or_create_c_sources[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 347_28_filenames
  // $modules empty_list # a list of tuple(filename c_timestamp c_source fky_lines)
  LET, 1, var_empty_list, 1, var_348_1_modules,
  // for_each filenames # sequential load
  var_for_each, 3, LOCAL(1), lambda_46, lambda_53, IO_TAIL_CALL,
  POS(348, 3),
  POS(349, 3)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  1, // parameters
  var_350_3_fky_filename,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_350_3_fky_filename, chr_46, minus_num_1, 1, LOCAL(2),
  // $c_filename append(basename ".c")
  var_append, 2, LOCAL(2), str_c, 1, var_352_1_c_filename,
  // stat! $fky_info fky_filename
  var_stat, 1, var_350_3_fky_filename, IO_CALL(1), var_353_7_fky_info,
  // is_an_error: Error! "
  var_is_an_error, 1, var_353_7_fky_info, 1, LOCAL(1),
  // on fky_info.is_an_error: Error! "
  var_on, 2, LOCAL(1), lambda_47, IO_CALL(0),
  // stat! $c_info c_filename
  var_stat, 1, var_352_1_c_filename, IO_CALL(1), var_356_7_c_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_48, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_52, IO_TAIL_CALL,
  POS(351, 7),
  POS(352, 7),
  POS(353, 7),
  POS(354, 19),
  POS(354, 7),
  POS(356, 7),
  POS(358, 11),
  POS(357, 7)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Input_file, var_350_3_fky_filename, str__does_not_exist, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(354, 39),
  POS(354, 32)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_356_7_c_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // c_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(360, 18),
  POS(358, 11),
  POS(360, 11)
};

static TAB_NUM t_lambda_49[] = {
  3, // locals
  0, // parameters
  // modification_time_of(fky_info) > modification_time_of(c_info)
  var_modification_time_of, 1, var_353_7_fky_info, 1, LOCAL(1),
  // modification_time_of(c_info)
  var_modification_time_of, 1, var_356_7_c_info, 1, LOCAL(2),
  // modification_time_of(c_info)
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // modification_time_of(fky_info) > modification_time_of(c_info)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(361, 11),
  POS(361, 44),
  POS(361, 44),
  POS(361, 11)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_51, IO_CALL(0),
  // load_lines! $fky_lines fky_filename
  func_load_lines, 1, var_350_3_fky_filename, IO_CALL(1), LOCAL(2),
  // tuple(fky_filename undefined undefined fky_lines)
  var_tuple, 4, var_350_3_fky_filename, var_undefined, var_undefined, LOCAL(2), 1, LOCAL(1),
  // push &modules tuple(fky_filename undefined undefined fky_lines)
  var_push, 2, var_348_1_modules, LOCAL(1), 1, var_348_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(363, 11),
  POS(365, 11),
  POS(366, 25),
  POS(366, 11),
  POS(367, 11)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_350_3_fky_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(363, 34),
  POS(363, 26)
};

static TAB_NUM t_lambda_52[] = {
  3, // locals
  0, // parameters
  // load! $c_source c_filename
  var_load, 1, var_352_1_c_filename, IO_CALL(1), LOCAL(3),
  // modification_time_of(c_info) c_source undefined)
  var_modification_time_of, 1, var_356_7_c_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(c_info) c_source undefined)
  var_tuple, 4, var_350_3_fky_filename, LOCAL(1), LOCAL(3), var_undefined, 1, LOCAL(2),
  // push &modules
  var_push, 2, var_348_1_modules, LOCAL(2), 1, var_348_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(369, 11),
  POS(371, 32),
  POS(371, 13),
  POS(370, 11),
  POS(372, 11)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // map &modules maybe_compile # parallel compile
  var_map, 2, var_348_1_modules, func_maybe_compile, 1, var_348_1_modules,
  // for_each modules # sequential save
  var_for_each, 3, var_348_1_modules, lambda_54, lambda_55, IO_TAIL_CALL,
  POS(374, 7),
  POS(375, 7)
};

static TAB_NUM t_lambda_54[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 376_3_module
  // module $fky_filename $c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), var_377_35_c_source,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, LOCAL(3), chr_46, minus_num_1, 1, var_378_1_basename,
  // is_undefined:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_c_timestamp_is_undefined, var_next, IO_TAIL_CALL,
  POS(377, 11),
  POS(378, 11),
  POS(380, 25),
  POS(379, 11)
};

static TAB_NUM t_lambda_c_timestamp_is_undefined[] = {
  2, // locals
  0, // parameters
  // "@(basename).c" c_source.to_utf8
  var_std__string, 2, var_378_1_basename, str_c, 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, var_377_35_c_source, 1, LOCAL(2),
  // save! "@(basename).c" c_source.to_utf8
  var_save, 2, LOCAL(1), LOCAL(2), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(381, 21),
  POS(381, 46),
  POS(381, 15),
  POS(382, 15)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  modules
  LET, 1, var_348_1_modules, TAIL_CALL,
  POS(384, 11)
};

static TAB_NUM t_func_maybe_compile[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 386_17_module
  // module $filename $c_timestamp $c_source $fky_lines
  LOCAL(2), 0, 4, var_387_8_filename, LOCAL(3), LOCAL(4), var_387_41_fky_lines,
  // is_undefined &c_source:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // update_if c_source.is_undefined &c_source:
  var_update_if, 3, LOCAL(1), LOCAL(4), lambda_56, 1, LOCAL(4),
  // tuple_or_error(filename c_timestamp c_source)
  var_tuple_or_error, 3, var_387_8_filename, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> tuple_or_error(filename c_timestamp c_source)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(387, 3),
  POS(388, 22),
  POS(388, 3),
  POS(390, 6),
  POS(390, 3)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // compile_module filename fky_lines
  var_compile_module, 2, var_387_8_filename, var_387_41_fky_lines, TAIL_CALL,
  POS(389, 5)
};

static TAB_NUM t_func_c_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 392_13_modules
  // $compiled_modules empty_list
  LET, 1, var_empty_list, 1, var_393_1_compiled_modules,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_57, lambda_65, IO_TAIL_CALL,
  POS(393, 3),
  POS(394, 3)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 395_3_module
  // module $fky_filename $c_timestamp
  LOCAL(2), 0, 2, var_396_8_fky_filename, var_396_22_c_timestamp,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_396_8_fky_filename, chr_46, minus_num_1, 1, var_397_1_basename,
  // $obj_filename "@(basename).o"
  var_std__string, 2, var_397_1_basename, str_o, 1, var_398_1_obj_filename,
  // stat! $obj_info obj_filename
  var_stat, 1, var_398_1_obj_filename, IO_CALL(1), var_399_7_obj_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_58, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_64, IO_TAIL_CALL,
  POS(396, 7),
  POS(397, 7),
  POS(398, 7),
  POS(399, 7),
  POS(401, 11),
  POS(400, 7)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_396_22_c_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // c_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(403, 23),
  POS(401, 11),
  POS(403, 11)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_399_7_obj_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_60, 1, LOCAL(2),
  // obj_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(404, 20),
  POS(401, 11),
  POS(404, 11)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info)
  var_modification_time_of, 1, var_399_7_obj_info, 1, LOCAL(1),
  // modification_time_of(obj_info)
  var_std__less, 2, LOCAL(1), var_396_22_c_timestamp, 1, LOCAL(2),
  // c_timestamp > modification_time_of(obj_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(405, 25),
  POS(405, 25),
  POS(405, 11)
};

static TAB_NUM t_lambda_61[] = {
  4, // locals
  0, // parameters
  // $c_filename "@(basename).c"
  var_std__string, 2, var_397_1_basename, str_c, 1, var_407_1_c_filename,
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_62, IO_CALL(0),
  // $arguments cc_options
  LET, 1, list_48_0, 1, LOCAL(3),
  // "-I@(include_path)"
  var_std__string, 2, str_I, var_include_path, 1, LOCAL(1),
  // push &arguments "-I@(include_path)"
  var_push, 2, LOCAL(3), LOCAL(1), 1, LOCAL(3),
  // push &arguments "-DNDEBUG"
  var_push, 2, LOCAL(3), str_DNDEBUG, 1, LOCAL(3),
  // push &arguments "-c"
  var_push, 2, LOCAL(3), str_c_2, 1, LOCAL(3),
  // "@(c_filename)"
  var_std__string, 1, var_407_1_c_filename, 1, LOCAL(1),
  // push &arguments "@(c_filename)"
  var_push, 2, LOCAL(3), LOCAL(1), 1, LOCAL(3),
  // push &arguments "-o"
  var_push, 2, LOCAL(3), str_o_2, 1, LOCAL(3),
  // push &arguments obj_filename
  var_push, 2, LOCAL(3), var_398_1_obj_filename, 1, LOCAL(3),
  // call! "gcc" arguments $status $_out $err
  var_call, 2, str_gcc, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_417_37_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_63, IO_CALL(0),
  // tuple(fky_filename undefined)
  var_tuple, 2, var_396_8_fky_filename, var_undefined, 1, LOCAL(1),
  // push &compiled_modules tuple(fky_filename undefined)
  var_push, 2, var_393_1_compiled_modules, LOCAL(1), 1, var_393_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(407, 11),
  POS(408, 11),
  POS(410, 11),
  POS(411, 27),
  POS(411, 11),
  POS(412, 11),
  POS(413, 11),
  POS(414, 27),
  POS(414, 11),
  POS(415, 11),
  POS(416, 11),
  POS(417, 11),
  POS(418, 14),
  POS(418, 14),
  POS(418, 11),
  POS(421, 34),
  POS(421, 11),
  POS(422, 11)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_407_1_c_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(408, 34),
  POS(408, 26)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_417_37_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(419, 25),
  POS(419, 13),
  POS(420, 13)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info))
  var_modification_time_of, 1, var_399_7_obj_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(obj_info))
  var_tuple, 2, var_396_8_fky_filename, LOCAL(1), 1, LOCAL(2),
  // push &compiled_modules
  var_push, 2, var_393_1_compiled_modules, LOCAL(2), 1, var_393_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(425, 32),
  POS(425, 13),
  POS(424, 11),
  POS(426, 11)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  //  compiled_modules
  LET, 1, var_393_1_compiled_modules, TAIL_CALL,
  POS(427, 7)
};

static TAB_NUM t_func_extract_required[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 429_20_module
  // module $filename $_c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_430_32_c_source,
  // $path before(filename '/' -1)
  var_before, 3, LOCAL(3), chr_47, minus_num_1, 1, var_431_1_path,
  // $required empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_432_1_required,
  // while
  var_while, 3, lambda_66, lambda_67, lambda_70, TAIL_CALL,
  POS(430, 3),
  POS(431, 3),
  POS(432, 3),
  POS(433, 3)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // c_source .has_prefix. "/// require"
  var_has_prefix, 2, var_430_32_c_source, str__require, 1, LOCAL(1),
  //  c_source .has_prefix. "/// require"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(434, 8),
  POS(434, 7)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // range(c_source 12 -1) .before. '@nl;').trim
  var_range, 3, var_430_32_c_source, num_12, minus_num_1, 1, LOCAL(1),
  // range(c_source 12 -1) .before. '@nl;').trim
  var_before, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // $module_name (range(c_source 12 -1) .before. '@nl;').trim
  var_trim, 1, LOCAL(2), 1, var_436_1_module_name,
  // is_not_empty && module_name(1) == '.' &module_name
  var_is_not_empty, 1, var_431_1_path, 1, LOCAL(1),
  // is_not_empty && module_name(1) == '.' &module_name
  var_std__and, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // update_if path.is_not_empty && module_name(1) == '.' &module_name
  var_update_if, 3, LOCAL(2), var_436_1_module_name, lambda_69, 1, var_436_1_module_name,
  // required(module_name) true
  var_432_1_required, 2, var_436_1_module_name, var_true, 1, var_432_1_required,
  // truncate_until &c_source '@nl;'
  var_truncate_until, 2, var_430_32_c_source, chr_10, 1, var_430_32_c_source,
  // next
  var_next, 0, TAIL_CALL,
  POS(436, 21),
  POS(436, 21),
  POS(436, 7),
  POS(437, 22),
  POS(437, 22),
  POS(437, 7),
  POS(439, 8),
  POS(440, 7),
  POS(441, 7)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // module_name(1) == '.' &module_name
  var_436_1_module_name, 1, num_1, 1, LOCAL(1),
  // module_name(1) == '.' &module_name
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // module_name(1) == '.' &module_name
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(437, 38),
  POS(437, 38),
  POS(437, 38)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // range(module_name 2 -1))
  var_range, 3, var_436_1_module_name, num_2, minus_num_1, 1, LOCAL(1),
  // append(path range(module_name 2 -1))
  var_append, 2, var_431_1_path, LOCAL(1), 1, LOCAL(2),
  //  append(path range(module_name 2 -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(438, 24),
  POS(438, 12),
  POS(438, 11)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  required
  LET, 1, var_432_1_required, TAIL_CALL,
  POS(442, 7)
};

static TAB_NUM t_func_load_lines[] = {
  0, // locals
  1, // parameters
  var_444_14_filename,
  // load! $source filename
  var_load, 1, var_444_14_filename, IO_CALL(1), var_445_7_source,
  // cond
  var_cond, 2, lambda_71, lambda_73, IO_CALL(0),
  // from_utf8 &source
  var_from_utf8, 1, var_445_7_source, 1, var_445_7_source,
  // split_source_into_lines source
  var_split_source_into_lines, 1, var_445_7_source, TAIL_CALL,
  POS(445, 3),
  POS(446, 3),
  POS(453, 3),
  POS(454, 3)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_445_7_source, 1, LOCAL(1),
  //  source.is_empty:
  LET, 2, LOCAL(1), lambda_72, IO_TAIL_CALL,
  POS(447, 15),
  POS(447, 7)
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Empty_source_fil, var_444_14_filename, string_6, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(448, 14),
  POS(448, 7)
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // source(-1) != '@nl;':
  var_445_7_source, 1, minus_num_1, 1, LOCAL(1),
  // source(-1) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // source(-1) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  source(-1) != '@nl;':
  LET, 2, LOCAL(3), lambda_74, IO_TAIL_CALL,
  POS(450, 8),
  POS(450, 8),
  POS(450, 8),
  POS(450, 7)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Missing_trailing, var_444_14_filename, string_6, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(451, 14),
  POS(451, 7)
};

static TAB_NUM t_func_funky__syntax_error[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 460_0_message
  var_undefined, var_461_0_node,
  // is_defined:
  var_is_defined, 1, var_461_0_node, 1, LOCAL(1),
  // if $column
  var_if, 3, LOCAL(1), lambda_node_is_defined, lambda_79, 1, var_463_4_column,
  // is_defined
  var_is_defined, 1, var_461_0_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_80, lambda_81, 1, LOCAL(2),
  // $details
  var_tuple, 3, var_current_filename, LOCAL(2), var_463_4_column, 1, LOCAL(4),
  // error funky::SYNTAX_ERROR message details
  var_error, 3, var_funky__SYNTAX_ERROR, LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(464, 10),
  POS(463, 3),
  POS(480, 14),
  POS(479, 7),
  POS(476, 3),
  POS(484, 3)
};

static TAB_NUM t_lambda_node_is_defined[] = {
  4, // locals
  0, // parameters
  // source_group_of(node))
  var_source_group_of, 1, var_461_0_node, 1, LOCAL(1),
  // $line line_text_of(source_group_of(node))
  var_line_text_of, 1, LOCAL(1), 1, var_465_1_line,
  // length_of(line)+1-length_of(source_position_of(node))
  var_length_of, 1, var_465_1_line, 1, LOCAL(1),
  // length_of(line)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // source_position_of(node))
  var_source_position_of, 1, var_461_0_node, 1, LOCAL(3),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(3), 1, LOCAL(4),
  // !column length_of(line)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(2), LOCAL(4), 1, var_463_4_column,
  // column == 1
  var_std__equal, 2, var_463_4_column, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_75, lambda_76, TAIL_CALL,
  POS(465, 26),
  POS(465, 7),
  POS(466, 15),
  POS(466, 15),
  POS(466, 43),
  POS(466, 33),
  POS(466, 7),
  POS(468, 9),
  POS(467, 7)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_463_4_column, TAIL_CALL,
  POS(469, 11)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // column-1)
  var_std__minus, 2, var_463_4_column, num_1, 1, LOCAL(1),
  // line(column-1)
  var_465_1_line, 1, LOCAL(1), 1, LOCAL(2),
  // case
  var_case, 4, LOCAL(2), sequence_473_1, lambda_77, lambda_78, TAIL_CALL,
  POS(472, 18),
  POS(472, 13),
  POS(471, 11)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // column-1
  var_std__minus, 2, var_463_4_column, num_1, 1, LOCAL(1),
  //  column-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(473, 50),
  POS(473, 49)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_463_4_column, TAIL_CALL,
  POS(474, 15)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(475, 7)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  0, // parameters
  // source_group_of(node)
  var_source_group_of, 1, var_461_0_node, 1, LOCAL(1),
  //  source_group_of(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(481, 12),
  POS(481, 11)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(482, 11)
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  1, // parameters
  var_486_16_obj,
  // is_an_error:
  var_is_an_error, 1, var_486_16_obj, 1, LOCAL(1),
  // on obj.is_an_error:
  var_on, 2, LOCAL(1), lambda_82, IO_TAIL_CALL,
  POS(487, 10),
  POS(487, 3)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // error_category_of(obj) == SYNTAX_ERROR:
  var_error_category_of, 1, var_486_16_obj, 1, LOCAL(1),
  // error_category_of(obj) == SYNTAX_ERROR:
  var_std__equal, 2, LOCAL(1), var_SYNTAX_ERROR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_83, lambda_84, IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(489, 7),
  POS(489, 7),
  POS(488, 5),
  POS(493, 5)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // display_error! obj
  func_display_error, 1, var_486_16_obj, IO_TAIL_CALL,
  POS(490, 9)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // debug::dump_object 50 obj
  var_debug__dump_object, 2, num_50, var_486_16_obj, TAIL_CALL,
  POS(492, 9)
};

static TAB_NUM t_func_display_error[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 495_17_error
  // $message error_message_text_of(error)
  var_error_message_text_of, 1, LOCAL(2), 1, var_496_1_message,
  // error_details_of(error) $filename $line $position
  var_error_details_of, 1, LOCAL(2), 1, LOCAL(1),
  // error_details_of(error) $filename $line $position
  LOCAL(1), 0, 3, var_497_25_filename, var_497_35_line, var_497_41_position,
  // is_defined:
  var_is_defined, 1, var_497_35_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_defined, lambda_85, IO_TAIL_CALL,
  POS(496, 3),
  POS(497, 3),
  POS(497, 3),
  POS(499, 10),
  POS(498, 3)
};

static TAB_NUM t_lambda_line_is_defined[] = {
  9, // locals
  0, // parameters
  // line $indent $text
  var_497_35_line, 0, 2, LOCAL(7), LOCAL(8),
  // $line_no line_no_of(line)
  var_line_no_of, 1, var_497_35_line, 1, LOCAL(9),
  // to_sentence_case) IN LINE @(line_no) OF FILE @(filename)
  var_to_sentence_case, 1, var_496_1_message, 1, LOCAL(1),
  // tabs_and_spaces(indent))@(text)@
  var_tabs_and_spaces, 1, LOCAL(7), 1, LOCAL(2),
  // indent+position-1))^
  var_std__plus, 2, LOCAL(7), var_497_41_position, 1, LOCAL(3),
  // indent+position-1))^
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // tabs_and_spaces(indent+position-1))^
  var_tabs_and_spaces, 1, LOCAL(4), 1, LOCAL(5),
  // "
  var_std__string, 11, str_ERROR, LOCAL(1), str__IN_LINE, LOCAL(9), str__OF_FILE, var_497_25_filename, string_7, LOCAL(2), LOCAL(8), LOCAL(5), string_8, 1, LOCAL(6),
  // eprint! "
  var_eprint, 1, LOCAL(6), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(500, 7),
  POS(501, 7),
  POS(503, 26),
  POS(505, 11),
  POS(506, 27),
  POS(506, 27),
  POS(506, 11),
  POS(502, 15),
  POS(502, 7),
  POS(507, 7)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // to_sentence_case) IN FILE @(filename)
  var_to_sentence_case, 1, var_496_1_message, 1, LOCAL(1),
  // "
  var_std__string, 5, str_ERROR, LOCAL(1), str__IN_FILE, var_497_25_filename, string_9, 1, LOCAL(2),
  // eprint! "
  var_eprint, 1, LOCAL(2), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(510, 26),
  POS(509, 15),
  POS(509, 7),
  POS(511, 7)
};

static TAB_NUM t_module_entry[] = {
  4, // locals
  0, // parameters
  // $builtin_functions
  var_hash_set, 6, str_assign, str_key_value_pair, str_list, str_tuple, str_sequence, str_value_range, 1, var_builtin_functions,
  // $funky::character_from_name get_character_names()
  var_get_character_names, 0, 1, var_funky__character_from_name,
  // get_environment $environment
  var_get_environment, 0, 1, LOCAL(4),
  // environment("FUNKY_INCLUDE_PATH")
  LOCAL(4), 1, str_FUNKY_INCLUDE_PA, 1, LOCAL(1),
  // "/usr/local/share/funky-@(MAJOR)"
  var_std__string, 2, str_usrlocalsharefun, num_0, 1, LOCAL(2),
  // $include_path
  var_default_value, 2, LOCAL(1), LOCAL(2), 1, var_include_path,
  // truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_truncate_until, 3, var_program_name, chr_47, minus_num_1, 1, LOCAL(1),
  // truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_truncate_from, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // $do_run (truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_std__equal, 2, LOCAL(2), str_fkyrun, 1, var_do_run,
  // if $input_filename $be_verbose $do_rebuild $do_print_c
  var_if, 3, var_do_run, lambda_do_run, lambda_7, IO_CALL(4), var_input_filename, var_be_verbose, var_do_rebuild, var_do_print_c,
  // $FUNKY_LIBRARY_PATH environment("FUNKY_LIBRARY_PATH")
  LOCAL(4), 1, str_FUNKY_LIBRARY_PA, 1, var_FUNKY_LIBRARY_PATH,
  // input_filename(1) != '/'
  var_input_filename, 1, num_1, 1, LOCAL(1),
  // input_filename(1) != '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // input_filename(1) != '/'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // update_if input_filename(1) != '/'
  var_update_if, 3, LOCAL(3), var_input_filename, lambda_input_filename, 1, var_input_filename,
  // input_filename .has_suffix. ".fky"
  var_has_suffix, 2, var_input_filename, str_fky, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_8, func_build_library, IO_TAIL_CALL,
  POS(62, 1),
  POS(82, 1),
  POS(84, 1),
  POS(88, 5),
  POS(89, 5),
  POS(86, 1),
  POS(91, 10),
  POS(91, 10),
  POS(91, 1),
  POS(96, 1),
  POS(136, 1),
  POS(138, 11),
  POS(138, 11),
  POS(138, 11),
  POS(138, 1),
  POS(141, 3),
  POS(140, 1)
};

static int list_48_0_arguments[] = {
  -str_Wall, -str_Wnounusedfunctio, -str_Wnounusedvariabl, -str_Wnoparentheses, -str_Wnoswitch, -str_Wnotrigraphs, -str_O, -str_fomitframepointe, -str_fnostackprotecto, -str_falignfunctions, -str_falignloops
};

static int list_126_0_arguments[] = {
  -str_verbose, -str_output_detailed
};

static int list_129_0_arguments[] = {
  -str_rebuild, -str_rebuild_all_sour
};

static int list_132_0_arguments[] = {
  -str_printc, -str_print_C_source_c
};

static int sequence_473_1_arguments[] = {
  -chr_36, -chr_33, -chr_38, -chr_34, -chr_39
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_STRING_8, 5, {.str_8 = "-Wall"}},
  {FLT_STRING_8, 20, {.str_8 = "-Wno-unused-function"}},
  {FLT_STRING_8, 20, {.str_8 = "-Wno-unused-variable"}},
  {FLT_STRING_8, 16, {.str_8 = "-Wno-parentheses"}},
  {FLT_STRING_8, 11, {.str_8 = "-Wno-switch"}},
  {FLT_STRING_8, 14, {.str_8 = "-Wno-trigraphs"}},
  {FLT_STRING_8, 3, {.str_8 = "-O2"}},
  {FLT_STRING_8, 20, {.str_8 = "-fomit-frame-pointer"}},
  {FLT_STRING_8, 20, {.str_8 = "-fno-stack-protector"}},
  {FLT_STRING_8, 20, {.str_8 = "-falign-functions=16"}},
  {FLT_STRING_8, 16, {.str_8 = "-falign-loops=16"}},
  {FLT_LIST, 11, {.arguments = list_48_0_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_STRING_8, 5, {.str_8 = "tuple"}},
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__is_a_builtin_function_name}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 3, {.str_8 = "std"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_STRING_8, 4, {.str_8 = "std-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_INCLUDE_PATH"}},
  {FLT_STRING_8, 23, {.str_8 = "/usr/local/share/funky-"}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_STRING_8, 6, {.str_8 = "fkyrun"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_run}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_STRING_8, 31, {.str_8 = "Missing command line arguments!"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 742, {.str_8 = "Copyright (C) 2024 by\012Dipl.-Ing. Michael Niederle\012\012This program is free software; you can redistribute it and/or modify\012it under the terms of the GNU General Public License, version 2, or\012(at your option) version 3.\012\012This program is distributed in the hope that it will be useful,\012but WITHOUT ANY WARRANTY; without even the implied warranty of\012MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the\012GNU General Public License for more details.\012\012For details of the GNU General Public License see the accompanying\012files GPLv2.txt and GLPv3.txt or\012http://www.gnu.org/licenses/gpl-2.0.html\012http://www.gnu.org/licenses/gpl-3.0.html\012or write to the\012Free Software Foundation, Inc.,\01251 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.\012"}},
  {FLT_STRING_8, 8, {.str_8 = "filename"}},
  {FLT_STRING_8, 45, {.str_8 = "a source code file with the extension \042.fky\042\012"}},
  {FLT_STRING_8, 7, {.str_8 = "verbose"}},
  {FLT_STRING_8, 52, {.str_8 = "output detailed information about the build process\012"}},
  {FLT_LIST, 2, {.arguments = list_126_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "rebuild"}},
  {FLT_STRING_8, 25, {.str_8 = "rebuild all source files\012"}},
  {FLT_LIST, 2, {.arguments = list_129_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "print-c"}},
  {FLT_STRING_8, 40, {.str_8 = "print C source code for a single module\012"}},
  {FLT_LIST, 2, {.arguments = list_132_0_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_LIBRARY_PATH"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_input_filename}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_STRING_8, 4, {.str_8 = ".fky"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_c}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_executable}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_STRING_8, 21, {.str_8 = "creating executable \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_modules}},
  {FLT_STRING_8, 2, {.str_8 = ".o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 2, {.str_8 = "-L"}},
  {FLT_STRING_8, 13, {.str_8 = "-l:libfky.so."}},
  {FLT_STRING_8, 3, {.str_8 = "-lm"}},
  {FLT_STRING_8, 2, {.str_8 = "-o"}},
  {FLT_STRING_8, 3, {.str_8 = "gcc"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_run}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 5, {.str_8 = "done\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_library}},
  {FLT_STRING_8, 8, {.str_8 = "/VERSION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 7, {.str_8 = "libfky-"}},
  {FLT_STRING_8, 4, {.str_8 = ".so."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_STRING_8, 18, {.str_8 = "creating library \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_modules}},
  {FLT_STRING_8, 7, {.str_8 = "-shared"}},
  {FLT_STRING_8, 19, {.str_8 = "-Wl,-soname,libfky-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_find_newest_timestamp}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_entries}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DIRECTORY}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_REGULAR_FILE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_STRING_8, 10, {.str_8 = "-l:libfky-"}},
  {FLT_STRING_8, 5, {.str_8 = ".so.0"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_or_create_c_sources}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_STRING_8, 2, {.str_8 = ".c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_STRING_8, 12, {.str_8 = "Input file \042"}},
  {FLT_STRING_8, 17, {.str_8 = "\042 does not exist!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_STRING_8, 11, {.str_8 = "compiling \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_c_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_STRING_8, 2, {.str_8 = "-I"}},
  {FLT_STRING_8, 8, {.str_8 = "-DNDEBUG"}},
  {FLT_STRING_8, 2, {.str_8 = "-c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_required}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_STRING_8, 11, {.str_8 = "/// require"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_POSITIVE_INT64, 0, {.value = 12}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_STRING_8, 19, {.str_8 = "Empty source file \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_STRING_8, 39, {.str_8 = "Missing trailing newline character in \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__syntax_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_node_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_SEQUENCE, 5, {.arguments = sequence_473_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_POSITIVE_INT64, 0, {.value = 50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_display_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_line_is_defined}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}},
  {FLT_STRING_8, 9, {.str_8 = " IN LINE "}},
  {FLT_STRING_8, 9, {.str_8 = " OF FILE "}},
  {FLT_STRING_8, 2, {.str_8 = "\012\012"}},
  {FLT_STRING_8, 2, {.str_8 = "^\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_STRING_8, 9, {.str_8 = " IN FILE "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(49, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "builtin_functions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(63, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_builtin_function_name\000funky", NULL,
    {.const_idx = -func_funky__is_a_builtin_function_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "71_37_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "72_1_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(72, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(74, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(78, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(78, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(78, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(79, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(80, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(77, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "character_from_name\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_character_names\000", NULL,
    {.position = POS(82, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_environment\000", NULL,
    {.position = POS(84, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(89, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "include_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(87, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(91, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(91, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(91, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_run\000", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "base_directory\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(93, 24)}
  },
  {
    FOT_DERIVED, 0, 0,
    "current_module_name\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "input_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_rebuild\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_print_c\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "command_line_arguments\000", NULL,
    {.position = POS(98, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(98, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(98, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(103, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(124, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_parameters\000", NULL,
    {.position = POS(101, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "FUNKY_LIBRARY_PATH\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(138, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(139, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(138, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(141, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(150, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(150, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "compile_module\000", NULL,
    {.position = POS(152, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(154, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_10_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_19_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_1_exe_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(163, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_7_exe_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(164, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(168, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(169, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(170, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(170, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(172, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(178, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(175, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(181, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(185, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_37_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(189, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(191, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(192, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(192, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(195, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exec\000", NULL,
    {.position = POS(195, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "207_27_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "211_1_version_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_4_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(217, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(218, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(219, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_1_so_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_7_so_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(238, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_37_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "254_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_19_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(261, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(266, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(269, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(255, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_19_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "directory\000", NULL,
    {.position = POS(274, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "275_1_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_1_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000std", NULL,
    {.position = POS(278, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_1_fullname\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(280, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIRECTORY\000", NULL,
    {.position = POS(281, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REGULAR_FILE\000", NULL,
    {.position = POS(289, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(280, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_1_fky_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "301_1_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_1_object_files_handled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(302, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_1_libraries_handled\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_1_files_to_compile\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_3_fky_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(312, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL,
    {.position = POS(323, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(323, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(322, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_3_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_1_library_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(304, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_3_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_1_c_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_7_fky_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_7_c_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(366, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_35_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_1_basename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(381, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "save\000", NULL,
    {.position = POS(381, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "387_8_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "387_41_fky_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple_or_error\000", NULL,
    {.position = POS(390, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "393_1_compiled_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_8_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_22_c_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_1_obj_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_7_obj_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_1_c_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_37_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_32_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_1_required\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_1_module_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(437, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "while\000", NULL,
    {.position = POS(433, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_14_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "445_7_source\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(446, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_source_into_lines\000", NULL,
    {.position = POS(454, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "syntax_error\000funky", NULL,
    {.const_idx = -func_funky__syntax_error}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "461_0_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_4_column\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(465, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "465_1_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(465, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(466, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(466, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(466, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(466, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(473, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(478, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000funky", NULL,
    {.position = POS(484, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(484, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "486_16_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_category_of\000", NULL,
    {.position = POS(489, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000", NULL,
    {.position = POS(489, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(492, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "496_1_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(496, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_details_of\000", NULL,
    {.position = POS(497, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_25_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_35_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_41_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(501, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(503, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(505, 11)}
  }
};

extern FUNKY_MODULE module__basic__stdlib;
extern FUNKY_MODULE module__character_names;
extern FUNKY_MODULE module__nodes;
extern FUNKY_MODULE module__parser;
extern FUNKY_MODULE module__nodes_metadata;
extern FUNKY_MODULE module__dump;
extern FUNKY_MODULE module__compile;
extern FUNKY_MODULE module__simplify;
extern FUNKY_MODULE module__simplify_autogen;
extern FUNKY_MODULE module__collect_literals;
extern FUNKY_MODULE module__collect_literals_autogen;
extern FUNKY_MODULE module__collect_variables;
extern FUNKY_MODULE module__collect_variables_autogen;
extern FUNKY_MODULE module__generate_tabular_code;

static FUNKY_MODULE *required_modules[] = {
  &module__basic__stdlib,
  &module__character_names,
  &module__nodes,
  &module__parser,
  &module__nodes_metadata,
  &module__dump,
  &module__compile,
  &module__simplify,
  &module__simplify_autogen,
  &module__collect_literals,
  &module__collect_literals_autogen,
  &module__collect_variables,
  &module__collect_variables_autogen,
  &module__generate_tabular_code
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"funky", 1, 0},
  {"funky_types", 1, 0}
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__funky = {
  "_funky", // module name
  "funky.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  14, // number of required modules
  2, // number of defined namespaces
  2, // number of used namespaces
  207, // number of constants
  172, // number of variables
  required_modules,
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
int main(int argc, char **argv) {
  main_argc = argc;
  main_argv = argv;
  run(&module__funky);
}
