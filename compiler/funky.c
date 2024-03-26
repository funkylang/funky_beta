/// require basic/stdlib
/// require ./configuration
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
  list_49_0 = -13,
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
  str_sharefunky = -31,
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
  list_127_0 = -46,
  str_rebuild = -47,
  str_rebuild_all_sour = -48,
  list_130_0 = -49,
  str_printc = -50,
  str_print_C_source_c = -51,
  list_133_0 = -52,
  str_static = -53,
  str_create_a_statica = -54,
  list_136_0 = -55,
  str_FUNKY_LIBRARY_PA = -56,
  lambda_input_filename = -57,
  string_2 = -58,
  str_fky = -59,
  lambda_8 = -60,
  func_print_c = -61,
  func_build_executable = -62,
  lambda_9 = -63,
  lambda_10 = -64,
  lambda_11 = -65,
  lambda_12 = -66,
  lambda_13 = -67,
  str_creating_executa = -68,
  string_3 = -69,
  lambda_modules = -70,
  str_o = -71,
  lambda_14 = -72,
  str_L = -73,
  lambda_do_build_static = -74,
  str_static_2 = -75,
  str_staticlibgcc = -76,
  lambda_15 = -77,
  str_lm = -78,
  str_o_2 = -79,
  lambda_16 = -80,
  str_llibfkyso = -81,
  lambda_2_do_run = -82,
  num_2 = -83,
  lambda_17 = -84,
  lambda_18 = -85,
  str_done = -86,
  str_runtimebuiltins = -87,
  str_runtimedebugger = -88,
  str_runtimeinterpret = -89,
  str_runtimelinker = -90,
  str_runtimememory = -91,
  str_runtimeprofiler = -92,
  list_212_0 = -93,
  func_build_library = -94,
  str_VERSION = -95,
  lambda_19 = -96,
  string_4 = -97,
  lambda_20 = -98,
  lambda_2_modules = -99,
  lambda_2_do_build_static = -100,
  str_libfky = -101,
  str_a = -102,
  lambda_21 = -103,
  lambda_22 = -104,
  lambda_23 = -105,
  lambda_24 = -106,
  lambda_25 = -107,
  str_creating_static = -108,
  str_rcs = -109,
  lambda_26 = -110,
  str_so = -111,
  lambda_27 = -112,
  lambda_28 = -113,
  lambda_29 = -114,
  lambda_30 = -115,
  lambda_31 = -116,
  str_creating_dynamic = -117,
  str_shared = -118,
  str_Wlsonamelibfky = -119,
  lambda_32 = -120,
  func_find_newest_timestamp = -121,
  lambda_33 = -122,
  lambda_timestamp_is_undefined = -123,
  lambda_34 = -124,
  lambda_35 = -125,
  lambda_36 = -126,
  lambda_37 = -127,
  lambda_38 = -128,
  func_collect_entries = -129,
  lambda_39 = -130,
  lambda_40 = -131,
  string_5 = -132,
  lambda_DIRECTORY = -133,
  chr_46 = -134,
  lambda_41 = -135,
  lambda_REGULAR_FILE = -136,
  lambda_42 = -137,
  lambda_43 = -138,
  func_compile = -139,
  lambda_loop = -140,
  lambda_44 = -141,
  lambda_45 = -142,
  lambda_46 = -143,
  lambda_47 = -144,
  lambda_48 = -145,
  lambda_49 = -146,
  lambda_50 = -147,
  lambda_51 = -148,
  lambda_52 = -149,
  str_llibfky = -150,
  lambda_53 = -151,
  str_so_2 = -152,
  lambda_54 = -153,
  func_load_or_create_c_sources = -154,
  lambda_55 = -155,
  str_c = -156,
  lambda_56 = -157,
  str_Input_file = -158,
  str__does_not_exist = -159,
  lambda_57 = -160,
  lambda_58 = -161,
  lambda_59 = -162,
  lambda_60 = -163,
  str_compiling = -164,
  lambda_61 = -165,
  lambda_62 = -166,
  lambda_63 = -167,
  lambda_c_timestamp_is_undefined = -168,
  lambda_64 = -169,
  func_maybe_compile = -170,
  lambda_65 = -171,
  func_c_compile = -172,
  lambda_66 = -173,
  lambda_67 = -174,
  lambda_68 = -175,
  lambda_69 = -176,
  lambda_70 = -177,
  lambda_71 = -178,
  lambda_72 = -179,
  func_compile_c_file = -180,
  lambda_73 = -181,
  str_I = -182,
  str_DNDEBUG = -183,
  str_c_2 = -184,
  func_cc = -185,
  lambda_74 = -186,
  func_ar = -187,
  str_ar = -188,
  lambda_75 = -189,
  func_extract_required = -190,
  lambda_76 = -191,
  str__require = -192,
  lambda_77 = -193,
  num_12 = -194,
  chr_10 = -195,
  lambda_78 = -196,
  lambda_79 = -197,
  lambda_80 = -198,
  func_load_lines = -199,
  lambda_81 = -200,
  lambda_82 = -201,
  str_Empty_source_fil = -202,
  string_6 = -203,
  lambda_83 = -204,
  lambda_84 = -205,
  str_Missing_trailing = -206,
  func_funky__syntax_error = -207,
  lambda_node_is_defined = -208,
  lambda_85 = -209,
  lambda_86 = -210,
  chr_36 = -211,
  chr_33 = -212,
  chr_38 = -213,
  chr_34 = -214,
  chr_39 = -215,
  sequence_543_1 = -216,
  lambda_87 = -217,
  lambda_88 = -218,
  lambda_89 = -219,
  lambda_90 = -220,
  lambda_91 = -221,
  func_handle_error = -222,
  lambda_92 = -223,
  lambda_93 = -224,
  lambda_94 = -225,
  num_50 = -226,
  func_display_error = -227,
  lambda_line_is_defined = -228,
  str_ERROR = -229,
  str__IN_LINE = -230,
  str__OF_FILE = -231,
  string_7 = -232,
  string_8 = -233,
  lambda_95 = -234,
  str__IN_FILE = -235,
  string_9 = -236
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_list, // extern
  var_builtin_functions, // dynamic
  var_hash_set, // extern
  var_funky__is_a_builtin_function_name, // initialized
  var_72_37_identifier, // dynamic
  var_73_1_namespace, // dynamic
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
  var_PREFIX, // extern
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
  var_do_build_static, // dynamic
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
  var_163_10_modules, // dynamic
  var_163_19_libraries, // dynamic
  var_165_1_newest_timestamp, // dynamic
  var_166_1_exe_filename, // dynamic
  var_without_suffix, // extern
  var_167_7_exe_info, // dynamic
  var_stat, // extern
  var_is_undefined, // extern
  var_is_an_error, // extern
  var_modification_time_of, // extern
  var_std__less, // extern
  var_eprint, // extern
  var_first, // extern
  var_map, // extern
  var_183_1_arguments, // dynamic
  var_is_defined, // extern
  var_push, // extern
  var_range, // extern
  var_exec, // extern
  var_228_1_newest_timestamp, // dynamic
  var_229_1_version_filename, // dynamic
  var_231_4_version, // dynamic
  var_load, // extern
  var_trim, // extern
  var_put, // extern
  var_238_1_basename, // dynamic
  var_239_1_object_files, // dynamic
  var_247_1_a_filename, // dynamic
  var_248_7_a_info, // dynamic
  var_260_1_so_filename, // dynamic
  var_261_7_so_info, // dynamic
  var_empty_list, // extern
  var_284_1_newest_timestamp, // dynamic
  var_287_19_timestamp, // dynamic
  var_break, // extern
  var_std__and, // extern
  var_next, // extern
  var_for_each, // extern
  var_303_19_path, // dynamic
  var_304_12_entries, // dynamic
  var_directory, // extern
  var_to_error_message_string, // extern
  var_eprintln, // extern
  var_EXIT_FAILURE, // extern
  var_exit, // extern
  var_308_1_filenames, // dynamic
  var_311_1_name, // dynamic
  var_std__name_of, // extern
  var_312_1_fullname, // dynamic
  var_type_of, // extern
  var_DIRECTORY, // extern
  var_REGULAR_FILE, // extern
  var_case, // extern
  var_332_1_fky_filenames, // dynamic
  var_333_1_modules, // dynamic
  var_334_1_libraries, // dynamic
  var_335_1_object_files_handled, // dynamic
  var_empty_hash_set, // extern
  var_336_1_libraries_handled, // dynamic
  var_338_1_files_to_compile, // dynamic
  var_340_3_fky_filename, // dynamic
  var_true, // extern
  var_merge, // extern
  var_empty_insert_order_set, // extern
  var_map_reduce, // extern
  var_360_3_filename, // dynamic
  var_366_1_library_name, // dynamic
  var_loop, // extern
  var_382_1_modules, // dynamic
  var_384_3_fky_filename, // dynamic
  var_386_1_c_filename, // dynamic
  var_387_7_fky_info, // dynamic
  var_390_7_c_info, // dynamic
  var_tuple, // extern
  var_411_35_c_source, // dynamic
  var_412_1_basename, // dynamic
  var_to_utf8, // extern
  var_save, // extern
  var_421_8_filename, // dynamic
  var_421_41_fky_lines, // dynamic
  var_tuple_or_error, // extern
  var_427_1_compiled_modules, // dynamic
  var_430_8_fky_filename, // dynamic
  var_430_22_c_timestamp, // dynamic
  var_431_1_basename, // dynamic
  var_432_1_obj_filename, // dynamic
  var_433_7_obj_info, // dynamic
  var_475_18_c_filename, // dynamic
  var_CC, // extern
  var_488_34_err, // dynamic
  var_call, // extern
  var_from_utf8, // extern
  var_494_36_err, // dynamic
  var_500_32_c_source, // dynamic
  var_501_1_path, // dynamic
  var_502_1_required, // dynamic
  var_506_1_module_name, // dynamic
  var_is_not_empty, // extern
  var_while, // extern
  var_514_14_filename, // dynamic
  var_515_7_source, // dynamic
  var_cond, // extern
  var_split_source_into_lines, // extern
  var_funky__syntax_error, // initialized
  var_531_0_node, // dynamic
  var_533_4_column, // dynamic
  var_source_group_of, // extern
  var_535_1_line, // dynamic
  var_line_text_of, // extern
  var_length_of, // extern
  var_std__plus, // extern
  var_source_position_of, // extern
  var_std__minus, // extern
  var_std__sequence, // extern
  var_current_filename, // extern
  var_funky__SYNTAX_ERROR, // extern
  var_error, // extern
  var_556_16_obj, // dynamic
  var_error_category_of, // extern
  var_SYNTAX_ERROR, // extern
  var_debug__dump_object, // extern
  var_566_1_message, // dynamic
  var_error_message_text_of, // extern
  var_error_details_of, // extern
  var_567_25_filename, // dynamic
  var_567_35_line, // dynamic
  var_567_41_position, // dynamic
  var_line_no_of, // extern
  var_to_sentence_case, // extern
  var_tabs_and_spaces, // extern
  var__END
};


static TAB_NUM t_func_funky__is_a_builtin_function_name[] = {
  1, // locals
  1, // parameters
  var_72_37_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_72_37_identifier, chr_58, 1, var_73_1_namespace,
  // is_empty
  var_is_empty, 1, var_73_1_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(73, 3),
  POS(75, 15),
  POS(74, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // builtin_functions(identifier)
  var_builtin_functions, 1, var_72_37_identifier, 1, LOCAL(1),
  //  builtin_functions(identifier)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(76, 8),
  POS(76, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__equal, 2, var_73_1_namespace, str_std, 1, LOCAL(1),
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__or, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(79, 9),
  POS(79, 9),
  POS(78, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // namespace .has_prefix. "std-"
  var_has_prefix, 2, var_73_1_namespace, str_std_2, 1, LOCAL(1),
  // namespace .has_prefix. "std-"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(79, 31),
  POS(79, 31)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // identifier .behind. "::")
  var_behind, 2, var_72_37_identifier, string_1, 1, LOCAL(1),
  // builtin_functions(identifier .behind. "::")
  var_builtin_functions, 1, LOCAL(1), 1, LOCAL(2),
  //  builtin_functions(identifier .behind. "::")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(80, 30),
  POS(80, 12),
  POS(80, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(81, 11)
};

static TAB_NUM t_lambda_do_run[] = {
  1, // locals
  0, // parameters
  // is_empty: Error "Missing command line arguments!"
  var_is_empty, 1, var_command_line_arguments, 1, LOCAL(1),
  // on command_line_arguments.is_empty: Error "Missing command line arguments!"
  var_on, 2, LOCAL(1), lambda_6, 0,
  // command_line_arguments(1) false false false false
  var_command_line_arguments, 1, num_1, 1, LOCAL(1),
  // -> command_line_arguments(1) false false false false
  LET, 5, LOCAL(1), var_false, var_false, var_false, var_false, TAIL_CALL,
  POS(99, 31),
  POS(99, 5),
  POS(100, 8),
  POS(100, 5)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // Error "Missing command line arguments!"
  var_Error, 1, str_Missing_command, TAIL_CALL,
  POS(99, 41)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 2, var_COPYRIGHT, str_Copyright_C, 1, LOCAL(1),
  // list
  var_list, 3, var_MANDATORY_PARAMETER, str_filename, str_a_source_code_fi, 1, LOCAL(2),
  // program_parameters!
  var_program_parameters, 6, LOCAL(1), LOCAL(2), list_127_0, list_130_0, list_133_0, list_136_0, IO_TAIL_CALL,
  POS(103, 7),
  POS(124, 7),
  POS(102, 5)
};

static TAB_NUM t_lambda_input_filename[] = {
  1, // locals
  0, // parameters
  // append("./" input_filename)
  var_append, 2, string_2, var_input_filename, 1, LOCAL(1),
  //  append("./" input_filename)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(143, 22),
  POS(143, 21)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // if!
  var_if, 3, var_do_print_c, func_print_c, func_build_executable, IO_TAIL_CALL,
  POS(147, 5)
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
  POS(154, 3),
  POS(155, 3),
  POS(156, 3),
  POS(157, 3),
  POS(158, 3)
};

static TAB_NUM t_func_build_executable[] = {
  1, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // compile! $modules $libraries input_filename
  func_compile, 1, var_input_filename, IO_CALL(2), var_163_10_modules, var_163_19_libraries,
  // c_compile! &modules
  func_c_compile, 1, var_163_10_modules, IO_CALL(1), var_163_10_modules,
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, var_163_10_modules, 1, var_165_1_newest_timestamp,
  // $exe_filename input_filename .without_suffix. ".fky"
  var_without_suffix, 2, var_input_filename, str_fky, 1, var_166_1_exe_filename,
  // stat! $exe_info exe_filename
  var_stat, 1, var_166_1_exe_filename, IO_CALL(1), var_167_7_exe_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_9, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_12, IO_CALL(0),
  // if
  var_if, 3, var_do_run, lambda_2_do_run, lambda_17, IO_TAIL_CALL,
  POS(162, 3),
  POS(163, 3),
  POS(164, 3),
  POS(165, 3),
  POS(166, 3),
  POS(167, 3),
  POS(169, 7),
  POS(168, 3),
  POS(204, 3)
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_165_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_10, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(171, 24),
  POS(169, 7),
  POS(171, 7)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_167_7_exe_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_11, 1, LOCAL(2),
  // exe_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(172, 16),
  POS(169, 7),
  POS(172, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // modification_time_of(exe_info)
  var_modification_time_of, 1, var_167_7_exe_info, 1, LOCAL(1),
  // modification_time_of(exe_info)
  var_std__less, 2, LOCAL(1), var_165_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(exe_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(173, 26),
  POS(173, 26),
  POS(173, 7)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_13, IO_CALL(0),
  // $object_files
  var_map, 2, var_163_10_modules, lambda_modules, 1, LOCAL(2),
  // $arguments cc_options
  LET, 1, list_49_0, 1, var_183_1_arguments,
  // is_defined &arguments
  var_is_defined, 1, var_FUNKY_LIBRARY_PATH, 1, LOCAL(1),
  // update_if FUNKY_LIBRARY_PATH.is_defined &arguments
  var_update_if, 3, LOCAL(1), var_183_1_arguments, lambda_14, 1, var_183_1_arguments,
  // append &arguments object_files
  var_append, 2, var_183_1_arguments, LOCAL(2), 1, var_183_1_arguments,
  // if
  var_if, 3, var_do_build_static, lambda_do_build_static, lambda_16, IO_TAIL_CALL,
  POS(175, 7),
  POS(177, 7),
  POS(183, 7),
  POS(184, 36),
  POS(184, 7),
  POS(186, 7),
  POS(187, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_executa, var_166_1_exe_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(175, 30),
  POS(175, 22)
};

static TAB_NUM t_lambda_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 179_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(181, 15),
  POS(181, 15),
  POS(180, 13)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // list("-L" FUNKY_LIBRARY_PATH))
  var_list, 2, str_L, var_FUNKY_LIBRARY_PATH, 1, LOCAL(1),
  // append(arguments list("-L" FUNKY_LIBRARY_PATH))
  var_append, 2, var_183_1_arguments, LOCAL(1), 1, LOCAL(2),
  //  append(arguments list("-L" FUNKY_LIBRARY_PATH))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(185, 29),
  POS(185, 12),
  POS(185, 11)
};

static TAB_NUM t_lambda_do_build_static[] = {
  1, // locals
  0, // parameters
  // push &arguments "-static"
  var_push, 2, var_183_1_arguments, str_static_2, 1, var_183_1_arguments,
  // push &arguments "-static-libgcc"
  var_push, 2, var_183_1_arguments, str_staticlibgcc, 1, var_183_1_arguments,
  // append &arguments libraries
  var_append, 2, var_183_1_arguments, var_163_19_libraries, 1, var_183_1_arguments,
  // map(runtime_objects: (name) append name ".o")
  var_map, 2, list_212_0, lambda_15, 1, LOCAL(1),
  // append &arguments map(runtime_objects: (name) append name ".o")
  var_append, 2, var_183_1_arguments, LOCAL(1), 1, var_183_1_arguments,
  // push &arguments "-lm"
  var_push, 2, var_183_1_arguments, str_lm, 1, var_183_1_arguments,
  // push &arguments "-o"
  var_push, 2, var_183_1_arguments, str_o_2, 1, var_183_1_arguments,
  // push &arguments exe_filename
  var_push, 2, var_183_1_arguments, var_166_1_exe_filename, 1, var_183_1_arguments,
  // cc! arguments
  func_cc, 1, var_183_1_arguments, IO_TAIL_CALL,
  POS(189, 11),
  POS(190, 11),
  POS(191, 11),
  POS(192, 29),
  POS(192, 11),
  POS(193, 11),
  POS(194, 11),
  POS(195, 11),
  POS(196, 11)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 192_40_name
  // append name ".o")
  var_append, 2, LOCAL(1), str_o, TAIL_CALL,
  POS(192, 57)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // append &arguments libraries
  var_append, 2, var_183_1_arguments, var_163_19_libraries, 1, var_183_1_arguments,
  // "-l:libfky.so.@(MAJOR)"
  var_std__string, 2, str_llibfkyso, num_0, 1, LOCAL(1),
  // push &arguments "-l:libfky.so.@(MAJOR)"
  var_push, 2, var_183_1_arguments, LOCAL(1), 1, var_183_1_arguments,
  // push &arguments "-lm"
  var_push, 2, var_183_1_arguments, str_lm, 1, var_183_1_arguments,
  // push &arguments "-o"
  var_push, 2, var_183_1_arguments, str_o_2, 1, var_183_1_arguments,
  // push &arguments exe_filename
  var_push, 2, var_183_1_arguments, var_166_1_exe_filename, 1, var_183_1_arguments,
  // cc! arguments
  func_cc, 1, var_183_1_arguments, IO_TAIL_CALL,
  POS(198, 11),
  POS(199, 27),
  POS(199, 11),
  POS(200, 11),
  POS(201, 11),
  POS(202, 11),
  POS(203, 11)
};

static TAB_NUM t_lambda_2_do_run[] = {
  1, // locals
  0, // parameters
  // range(command_line_arguments 2 -1)
  var_range, 3, var_command_line_arguments, num_2, minus_num_1, 1, LOCAL(1),
  // exec! exe_filename range(command_line_arguments 2 -1)
  var_exec, 2, var_166_1_exe_filename, LOCAL(1), IO_TAIL_CALL,
  POS(206, 26),
  POS(206, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_18, IO_TAIL_CALL,
  POS(208, 7)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(209, 9)
};

static TAB_NUM t_func_build_library[] = {
  4, // locals
  0, // parameters
  // without_suffix &input_filename '/'
  var_without_suffix, 2, var_input_filename, chr_47, 1, var_input_filename,
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // collect_entries! $filenames input_filename
  func_collect_entries, 1, var_input_filename, IO_CALL(1), LOCAL(2),
  // load_or_create_c_sources! $modules filenames
  func_load_or_create_c_sources, 1, LOCAL(2), IO_CALL(1), LOCAL(3),
  // handle_error! modules
  func_handle_error, 1, LOCAL(3), IO_CALL(0),
  // c_compile! &modules
  func_c_compile, 1, LOCAL(3), IO_CALL(1), LOCAL(3),
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, LOCAL(3), 1, var_228_1_newest_timestamp,
  // $version_filename append(input_filename "/VERSION")
  var_append, 2, var_input_filename, str_VERSION, 1, var_229_1_version_filename,
  // stat! $version_info version_filename
  var_stat, 1, var_229_1_version_filename, IO_CALL(1), LOCAL(4),
  // is_an_error
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // if $version
  var_if, 3, LOCAL(1), lambda_19, lambda_20, IO_CALL(1), var_231_4_version,
  // $basename truncate_until(input_filename '/' -1)
  var_truncate_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_238_1_basename,
  // $object_files
  var_map, 2, LOCAL(3), lambda_2_modules, 1, var_239_1_object_files,
  // if
  var_if, 3, var_do_build_static, lambda_2_do_build_static, lambda_26, IO_TAIL_CALL,
  POS(222, 3),
  POS(223, 3),
  POS(224, 3),
  POS(225, 3),
  POS(226, 3),
  POS(227, 3),
  POS(228, 3),
  POS(229, 3),
  POS(230, 3),
  POS(232, 18),
  POS(231, 3),
  POS(238, 3),
  POS(239, 3),
  POS(245, 3)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_4, TAIL_CALL,
  POS(233, 7)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // load! !version version_filename
  var_load, 1, var_229_1_version_filename, IO_CALL(1), var_231_4_version,
  // trim &version
  var_trim, 1, var_231_4_version, 1, var_231_4_version,
  // put(version '-')
  var_put, 2, var_231_4_version, chr_45, 1, LOCAL(1),
  // -> put(version '-')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(235, 7),
  POS(236, 7),
  POS(237, 10),
  POS(237, 7)
};

static TAB_NUM t_lambda_2_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 241_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(243, 11),
  POS(243, 11),
  POS(242, 9)
};

static TAB_NUM t_lambda_2_do_build_static[] = {
  1, // locals
  0, // parameters
  // $a_filename "libfky-@(basename).a"
  var_std__string, 3, str_libfky, var_238_1_basename, str_a, 1, var_247_1_a_filename,
  // stat! $a_info a_filename
  var_stat, 1, var_247_1_a_filename, IO_CALL(1), var_248_7_a_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_21, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_24, IO_TAIL_CALL,
  POS(247, 7),
  POS(248, 7),
  POS(250, 11),
  POS(249, 7)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_228_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_22, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(252, 28),
  POS(250, 11),
  POS(252, 11)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_248_7_a_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // a_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(253, 18),
  POS(250, 11),
  POS(253, 11)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // modification_time_of(a_info)
  var_modification_time_of, 1, var_248_7_a_info, 1, LOCAL(1),
  // modification_time_of(a_info)
  var_std__less, 2, LOCAL(1), var_228_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(a_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(254, 30),
  POS(254, 30),
  POS(254, 11)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_25, IO_CALL(0),
  // list("rcs" a_filename) object_files)
  var_list, 2, str_rcs, var_247_1_a_filename, 1, LOCAL(1),
  // append(list("rcs" a_filename) object_files)
  var_append, 2, LOCAL(1), var_239_1_object_files, 1, LOCAL(2),
  // ar! append(list("rcs" a_filename) object_files)
  func_ar, 1, LOCAL(2), IO_TAIL_CALL,
  POS(256, 11),
  POS(258, 22),
  POS(258, 15),
  POS(258, 11)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_static, var_247_1_a_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(256, 34),
  POS(256, 26)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // $so_filename "libfky-@(basename)@(version).so.@(MAJOR)"
  var_std__string, 5, str_libfky, var_238_1_basename, var_231_4_version, str_so, num_0, 1, var_260_1_so_filename,
  // stat! $so_info so_filename
  var_stat, 1, var_260_1_so_filename, IO_CALL(1), var_261_7_so_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_27, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_30, IO_CALL(0),
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_32, IO_TAIL_CALL,
  POS(260, 7),
  POS(261, 7),
  POS(263, 11),
  POS(262, 7),
  POS(279, 7)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_228_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(265, 28),
  POS(263, 11),
  POS(265, 11)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_261_7_so_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // so_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(266, 19),
  POS(263, 11),
  POS(266, 11)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // modification_time_of(so_info)
  var_modification_time_of, 1, var_261_7_so_info, 1, LOCAL(1),
  // modification_time_of(so_info)
  var_std__less, 2, LOCAL(1), var_228_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(so_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(267, 30),
  POS(267, 30),
  POS(267, 11)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_31, IO_CALL(0),
  // $arguments empty_list
  LET, 1, var_empty_list, 1, LOCAL(2),
  // push &arguments "-shared"
  var_push, 2, LOCAL(2), str_shared, 1, LOCAL(2),
  // "-Wl,-soname,libfky-@(basename).so.@(MAJOR)"
  var_std__string, 4, str_Wlsonamelibfky, var_238_1_basename, str_so, num_0, 1, LOCAL(1),
  // push &arguments
  var_push, 2, LOCAL(2), LOCAL(1), 1, LOCAL(2),
  // append &arguments object_files
  var_append, 2, LOCAL(2), var_239_1_object_files, 1, LOCAL(2),
  // push &arguments "-o"
  var_push, 2, LOCAL(2), str_o_2, 1, LOCAL(2),
  // push &arguments so_filename
  var_push, 2, LOCAL(2), var_260_1_so_filename, 1, LOCAL(2),
  // cc! arguments
  func_cc, 1, LOCAL(2), IO_TAIL_CALL,
  POS(269, 11),
  POS(271, 11),
  POS(272, 11),
  POS(274, 13),
  POS(273, 11),
  POS(275, 11),
  POS(276, 11),
  POS(277, 11),
  POS(278, 11)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_dynamic, var_260_1_so_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(269, 34),
  POS(269, 26)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(280, 9)
};

static TAB_NUM t_func_find_newest_timestamp[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 283_25_modules
  // $newest_timestamp undefined
  LET, 1, var_undefined, 1, var_284_1_newest_timestamp,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_33, lambda_38, IO_TAIL_CALL,
  POS(284, 3),
  POS(285, 3)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 286_3_module
  // module $_filename $timestamp
  LOCAL(2), 0, 2, LOCAL(1), var_287_19_timestamp,
  // is_undefined:
  var_is_undefined, 1, var_287_19_timestamp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timestamp_is_undefined, lambda_34, IO_TAIL_CALL,
  POS(287, 7),
  POS(289, 19),
  POS(288, 7)
};

static TAB_NUM t_lambda_timestamp_is_undefined[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp undefined
  LET, 1, var_undefined, 1, var_284_1_newest_timestamp,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(290, 11),
  POS(291, 11)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_284_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_37, var_next, IO_TAIL_CALL,
  POS(295, 32),
  POS(294, 15),
  POS(293, 11)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // is_defined && timestamp > newest_timestamp
  var_is_defined, 1, var_287_19_timestamp, 1, LOCAL(1),
  // is_defined && timestamp > newest_timestamp
  var_std__and, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  // timestamp.is_defined && timestamp > newest_timestamp
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(296, 25),
  POS(296, 25),
  POS(296, 15)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // newest_timestamp
  var_std__less, 2, var_284_1_newest_timestamp, var_287_19_timestamp, 1, LOCAL(1),
  // timestamp > newest_timestamp
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(296, 51),
  POS(296, 39)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp timestamp
  LET, 1, var_287_19_timestamp, 1, var_284_1_newest_timestamp,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(298, 15),
  POS(299, 15)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  newest_timestamp
  LET, 1, var_284_1_newest_timestamp, TAIL_CALL,
  POS(301, 7)
};

static TAB_NUM t_func_collect_entries[] = {
  1, // locals
  1, // parameters
  var_303_19_path,
  // directory! $entries path
  var_directory, 1, var_303_19_path, IO_CALL(1), var_304_12_entries,
  // is_an_error:
  var_is_an_error, 1, var_304_12_entries, 1, LOCAL(1),
  // on entries.is_an_error:
  var_on, 2, LOCAL(1), lambda_39, IO_CALL(0),
  // $filenames empty_list
  LET, 1, var_empty_list, 1, var_308_1_filenames,
  // for_each entries
  var_for_each, 3, var_304_12_entries, lambda_40, lambda_43, IO_TAIL_CALL,
  POS(304, 3),
  POS(305, 14),
  POS(305, 3),
  POS(308, 3),
  POS(309, 3)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // to_error_message_string
  var_to_error_message_string, 1, var_304_12_entries, 1, LOCAL(1),
  // eprintln! entries.to_error_message_string
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(306, 23),
  POS(306, 5),
  POS(307, 5)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 310_3_entry
  // $name std::name_of(entry)
  var_std__name_of, 1, LOCAL(2), 1, var_311_1_name,
  // $fullname append(path "/" name)
  var_append, 3, var_303_19_path, string_5, var_311_1_name, 1, var_312_1_fullname,
  // type_of(entry)
  var_type_of, 1, LOCAL(2), 1, LOCAL(1),
  // case type_of(entry)
  var_case, 6, LOCAL(1), var_DIRECTORY, lambda_DIRECTORY, var_REGULAR_FILE, lambda_REGULAR_FILE, var_next, IO_TAIL_CALL,
  POS(311, 7),
  POS(312, 7),
  POS(313, 12),
  POS(313, 7)
};

static TAB_NUM t_lambda_DIRECTORY[] = {
  1, // locals
  0, // parameters
  // name .has_prefix. '.'
  var_has_prefix, 2, var_311_1_name, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_41, IO_TAIL_CALL,
  POS(316, 13),
  POS(315, 11)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // collect_entries! $more_filenames fullname
  func_collect_entries, 1, var_312_1_fullname, IO_CALL(1), LOCAL(1),
  // append &filenames more_filenames
  var_append, 2, var_308_1_filenames, LOCAL(1), 1, var_308_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(319, 15),
  POS(320, 15),
  POS(321, 15)
};

static TAB_NUM t_lambda_REGULAR_FILE[] = {
  1, // locals
  0, // parameters
  // name .has_suffix. ".fky":
  var_has_suffix, 2, var_311_1_name, str_fky, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42, var_next, IO_TAIL_CALL,
  POS(324, 13),
  POS(323, 11)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // push &filenames fullname
  var_push, 2, var_308_1_filenames, var_312_1_fullname, 1, var_308_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(325, 15),
  POS(326, 15)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  filenames
  LET, 1, var_308_1_filenames, TAIL_CALL,
  POS(329, 7)
};

static TAB_NUM t_func_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 331_11_base_filename
  // $fky_filenames list(base_filename)
  var_list, 1, LOCAL(1), 1, var_332_1_fky_filenames,
  // $modules empty_list
  LET, 1, var_empty_list, 1, var_333_1_modules,
  // $libraries empty_list
  LET, 1, var_empty_list, 1, var_334_1_libraries,
  // $object_files_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_335_1_object_files_handled,
  // $libraries_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_336_1_libraries_handled,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(332, 3),
  POS(333, 3),
  POS(334, 3),
  POS(335, 3),
  POS(336, 3),
  POS(337, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // $files_to_compile empty_list
  LET, 1, var_empty_list, 1, var_338_1_files_to_compile,
  // for_each fky_filenames
  var_for_each, 3, var_332_1_fky_filenames, lambda_44, lambda_46, IO_TAIL_CALL,
  POS(338, 5),
  POS(339, 5)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  1, // parameters
  var_340_3_fky_filename,
  // object_files_handled(fky_filename)
  var_335_1_object_files_handled, 1, var_340_3_fky_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_45, IO_TAIL_CALL,
  POS(342, 11),
  POS(341, 9)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // object_files_handled(fky_filename) true
  var_335_1_object_files_handled, 2, var_340_3_fky_filename, var_true, 1, var_335_1_object_files_handled,
  // push &files_to_compile fky_filename
  var_push, 2, var_338_1_files_to_compile, var_340_3_fky_filename, 1, var_338_1_files_to_compile,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(345, 14),
  POS(346, 13),
  POS(347, 13)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_338_1_files_to_compile, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_48, IO_TAIL_CALL,
  POS(350, 28),
  POS(349, 9)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  modules libraries
  LET, 2, var_333_1_modules, var_334_1_libraries, TAIL_CALL,
  POS(351, 13)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // load_or_create_c_sources! $more_modules files_to_compile
  func_load_or_create_c_sources, 1, var_338_1_files_to_compile, IO_CALL(1), LOCAL(1),
  // handle_error! more_modules
  func_handle_error, 1, LOCAL(1), IO_CALL(0),
  // map_reduce $required
  var_map_reduce, 4, LOCAL(1), func_extract_required, var_merge, var_empty_insert_order_set, 1, LOCAL(2),
  // append &modules more_modules
  var_append, 2, var_333_1_modules, LOCAL(1), 1, var_333_1_modules,
  // !fky_filenames empty_list
  LET, 1, var_empty_list, 1, var_332_1_fky_filenames,
  // for_each required
  var_for_each, 3, LOCAL(2), lambda_49, var_next, IO_TAIL_CALL,
  POS(353, 13),
  POS(354, 13),
  POS(355, 13),
  POS(357, 13),
  POS(358, 13),
  POS(359, 13)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  1, // parameters
  var_360_3_filename,
  // filename(1) == '.':
  var_360_3_filename, 1, num_1, 1, LOCAL(1),
  // filename(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_50, lambda_51, IO_TAIL_CALL,
  POS(362, 19),
  POS(362, 19),
  POS(361, 17)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // "@(filename).fky"
  var_std__string, 2, var_360_3_filename, str_fky, 1, LOCAL(1),
  // push &fky_filenames "@(filename).fky"
  var_push, 2, var_332_1_fky_filenames, LOCAL(1), 1, var_332_1_fky_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(363, 41),
  POS(363, 21),
  POS(364, 21)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // $library_name filename .truncate_from. '/'
  var_truncate_from, 2, var_360_3_filename, chr_47, 1, var_366_1_library_name,
  // !library_name
  var_if, 3, var_do_build_static, lambda_52, lambda_53, 1, var_366_1_library_name,
  // libraries_handled(library_name)
  var_336_1_libraries_handled, 1, var_366_1_library_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_54, IO_TAIL_CALL,
  POS(366, 21),
  POS(367, 21),
  POS(373, 23),
  POS(372, 21)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name).a"
  var_std__string, 3, str_llibfky, var_366_1_library_name, str_a, 1, LOCAL(1),
  //  "-l:libfky-@(library_name).a"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(370, 28),
  POS(370, 27)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name).so.0"
  var_std__string, 3, str_llibfky, var_366_1_library_name, str_so_2, 1, LOCAL(1),
  //  "-l:libfky-@(library_name).so.0"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(371, 28),
  POS(371, 27)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // libraries_handled(library_name) true
  var_336_1_libraries_handled, 2, var_366_1_library_name, var_true, 1, var_336_1_libraries_handled,
  // push &libraries library_name
  var_push, 2, var_334_1_libraries, var_366_1_library_name, 1, var_334_1_libraries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(376, 26),
  POS(377, 25),
  POS(378, 25)
};

static TAB_NUM t_func_load_or_create_c_sources[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 381_28_filenames
  // $modules empty_list # a list of tuple(filename c_timestamp c_source fky_lines)
  LET, 1, var_empty_list, 1, var_382_1_modules,
  // for_each filenames # sequential load
  var_for_each, 3, LOCAL(1), lambda_55, lambda_62, IO_TAIL_CALL,
  POS(382, 3),
  POS(383, 3)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  1, // parameters
  var_384_3_fky_filename,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_384_3_fky_filename, chr_46, minus_num_1, 1, LOCAL(2),
  // $c_filename append(basename ".c")
  var_append, 2, LOCAL(2), str_c, 1, var_386_1_c_filename,
  // stat! $fky_info fky_filename
  var_stat, 1, var_384_3_fky_filename, IO_CALL(1), var_387_7_fky_info,
  // is_an_error: Error! "
  var_is_an_error, 1, var_387_7_fky_info, 1, LOCAL(1),
  // on fky_info.is_an_error: Error! "
  var_on, 2, LOCAL(1), lambda_56, IO_CALL(0),
  // stat! $c_info c_filename
  var_stat, 1, var_386_1_c_filename, IO_CALL(1), var_390_7_c_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_57, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_61, IO_TAIL_CALL,
  POS(385, 7),
  POS(386, 7),
  POS(387, 7),
  POS(388, 19),
  POS(388, 7),
  POS(390, 7),
  POS(392, 11),
  POS(391, 7)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Input_file, var_384_3_fky_filename, str__does_not_exist, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(388, 39),
  POS(388, 32)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_390_7_c_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // c_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(394, 18),
  POS(392, 11),
  POS(394, 11)
};

static TAB_NUM t_lambda_58[] = {
  3, // locals
  0, // parameters
  // modification_time_of(fky_info) > modification_time_of(c_info)
  var_modification_time_of, 1, var_387_7_fky_info, 1, LOCAL(1),
  // modification_time_of(c_info)
  var_modification_time_of, 1, var_390_7_c_info, 1, LOCAL(2),
  // modification_time_of(c_info)
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // modification_time_of(fky_info) > modification_time_of(c_info)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(395, 11),
  POS(395, 44),
  POS(395, 44),
  POS(395, 11)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_60, IO_CALL(0),
  // load_lines! $fky_lines fky_filename
  func_load_lines, 1, var_384_3_fky_filename, IO_CALL(1), LOCAL(2),
  // tuple(fky_filename undefined undefined fky_lines)
  var_tuple, 4, var_384_3_fky_filename, var_undefined, var_undefined, LOCAL(2), 1, LOCAL(1),
  // push &modules tuple(fky_filename undefined undefined fky_lines)
  var_push, 2, var_382_1_modules, LOCAL(1), 1, var_382_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(397, 11),
  POS(399, 11),
  POS(400, 25),
  POS(400, 11),
  POS(401, 11)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_384_3_fky_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(397, 34),
  POS(397, 26)
};

static TAB_NUM t_lambda_61[] = {
  3, // locals
  0, // parameters
  // load! $c_source c_filename
  var_load, 1, var_386_1_c_filename, IO_CALL(1), LOCAL(3),
  // modification_time_of(c_info) c_source undefined)
  var_modification_time_of, 1, var_390_7_c_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(c_info) c_source undefined)
  var_tuple, 4, var_384_3_fky_filename, LOCAL(1), LOCAL(3), var_undefined, 1, LOCAL(2),
  // push &modules
  var_push, 2, var_382_1_modules, LOCAL(2), 1, var_382_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(403, 11),
  POS(405, 32),
  POS(405, 13),
  POS(404, 11),
  POS(406, 11)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // map &modules maybe_compile # parallel compile
  var_map, 2, var_382_1_modules, func_maybe_compile, 1, var_382_1_modules,
  // for_each modules # sequential save
  var_for_each, 3, var_382_1_modules, lambda_63, lambda_64, IO_TAIL_CALL,
  POS(408, 7),
  POS(409, 7)
};

static TAB_NUM t_lambda_63[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 410_3_module
  // module $fky_filename $c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), var_411_35_c_source,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, LOCAL(3), chr_46, minus_num_1, 1, var_412_1_basename,
  // is_undefined:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_c_timestamp_is_undefined, var_next, IO_TAIL_CALL,
  POS(411, 11),
  POS(412, 11),
  POS(414, 25),
  POS(413, 11)
};

static TAB_NUM t_lambda_c_timestamp_is_undefined[] = {
  2, // locals
  0, // parameters
  // "@(basename).c" c_source.to_utf8
  var_std__string, 2, var_412_1_basename, str_c, 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, var_411_35_c_source, 1, LOCAL(2),
  // save! "@(basename).c" c_source.to_utf8
  var_save, 2, LOCAL(1), LOCAL(2), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(415, 21),
  POS(415, 46),
  POS(415, 15),
  POS(416, 15)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  modules
  LET, 1, var_382_1_modules, TAIL_CALL,
  POS(418, 11)
};

static TAB_NUM t_func_maybe_compile[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 420_17_module
  // module $filename $c_timestamp $c_source $fky_lines
  LOCAL(2), 0, 4, var_421_8_filename, LOCAL(3), LOCAL(4), var_421_41_fky_lines,
  // is_undefined &c_source:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // update_if c_source.is_undefined &c_source:
  var_update_if, 3, LOCAL(1), LOCAL(4), lambda_65, 1, LOCAL(4),
  // tuple_or_error(filename c_timestamp c_source)
  var_tuple_or_error, 3, var_421_8_filename, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> tuple_or_error(filename c_timestamp c_source)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(421, 3),
  POS(422, 22),
  POS(422, 3),
  POS(424, 6),
  POS(424, 3)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // compile_module filename fky_lines
  var_compile_module, 2, var_421_8_filename, var_421_41_fky_lines, TAIL_CALL,
  POS(423, 5)
};

static TAB_NUM t_func_c_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 426_13_modules
  // $compiled_modules empty_list
  LET, 1, var_empty_list, 1, var_427_1_compiled_modules,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_66, lambda_72, IO_TAIL_CALL,
  POS(427, 3),
  POS(428, 3)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 429_3_module
  // module $fky_filename $c_timestamp
  LOCAL(2), 0, 2, var_430_8_fky_filename, var_430_22_c_timestamp,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_430_8_fky_filename, chr_46, minus_num_1, 1, var_431_1_basename,
  // $obj_filename "@(basename).o"
  var_std__string, 2, var_431_1_basename, str_o, 1, var_432_1_obj_filename,
  // stat! $obj_info obj_filename
  var_stat, 1, var_432_1_obj_filename, IO_CALL(1), var_433_7_obj_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_67, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, IO_TAIL_CALL,
  POS(430, 7),
  POS(431, 7),
  POS(432, 7),
  POS(433, 7),
  POS(435, 11),
  POS(434, 7)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_430_22_c_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // c_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(437, 23),
  POS(435, 11),
  POS(437, 11)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_433_7_obj_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // obj_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(438, 20),
  POS(435, 11),
  POS(438, 11)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info)
  var_modification_time_of, 1, var_433_7_obj_info, 1, LOCAL(1),
  // modification_time_of(obj_info)
  var_std__less, 2, LOCAL(1), var_430_22_c_timestamp, 1, LOCAL(2),
  // c_timestamp > modification_time_of(obj_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(439, 25),
  POS(439, 25),
  POS(439, 11)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // "@(basename).c" obj_filename
  var_std__string, 2, var_431_1_basename, str_c, 1, LOCAL(1),
  // compile_c_file! "@(basename).c" obj_filename
  func_compile_c_file, 2, LOCAL(1), var_432_1_obj_filename, IO_CALL(0),
  // tuple(fky_filename undefined)
  var_tuple, 2, var_430_8_fky_filename, var_undefined, 1, LOCAL(1),
  // push &compiled_modules tuple(fky_filename undefined)
  var_push, 2, var_427_1_compiled_modules, LOCAL(1), 1, var_427_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(441, 27),
  POS(441, 11),
  POS(442, 34),
  POS(442, 11),
  POS(443, 11)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info))
  var_modification_time_of, 1, var_433_7_obj_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(obj_info))
  var_tuple, 2, var_430_8_fky_filename, LOCAL(1), 1, LOCAL(2),
  // push &compiled_modules
  var_push, 2, var_427_1_compiled_modules, LOCAL(2), 1, var_427_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(446, 32),
  POS(446, 13),
  POS(445, 11),
  POS(447, 11)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  compiled_modules
  LET, 1, var_427_1_compiled_modules, TAIL_CALL,
  POS(448, 7)
};

static TAB_NUM t_func_compile_c_file[] = {
  3, // locals
  2, // parameters
  var_475_18_c_filename,
  LOCAL(2), // 475_29_o_filename
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_73, IO_CALL(0),
  // $arguments cc_options
  LET, 1, list_49_0, 1, LOCAL(3),
  // "-I@(include_path)"
  var_std__string, 2, str_I, var_include_path, 1, LOCAL(1),
  // push &arguments "-I@(include_path)"
  var_push, 2, LOCAL(3), LOCAL(1), 1, LOCAL(3),
  // push &arguments "-DNDEBUG"
  var_push, 2, LOCAL(3), str_DNDEBUG, 1, LOCAL(3),
  // push &arguments "-c"
  var_push, 2, LOCAL(3), str_c_2, 1, LOCAL(3),
  // push &arguments c_filename
  var_push, 2, LOCAL(3), var_475_18_c_filename, 1, LOCAL(3),
  // push &arguments "-o"
  var_push, 2, LOCAL(3), str_o_2, 1, LOCAL(3),
  // push &arguments o_filename
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // cc! arguments
  func_cc, 1, LOCAL(3), IO_TAIL_CALL,
  POS(476, 3),
  POS(478, 3),
  POS(479, 19),
  POS(479, 3),
  POS(480, 3),
  POS(481, 3),
  POS(482, 3),
  POS(483, 3),
  POS(484, 3),
  POS(485, 3)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_475_18_c_filename, string_3, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(476, 26),
  POS(476, 18)
};

static TAB_NUM t_func_cc[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 487_6_arguments
  // call! CC arguments $status $_out $err
  var_call, 2, var_CC, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_488_34_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_74, IO_TAIL_CALL,
  POS(488, 3),
  POS(489, 6),
  POS(489, 6),
  POS(489, 3)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_488_34_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(490, 17),
  POS(490, 5),
  POS(491, 5)
};

static TAB_NUM t_func_ar[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 493_6_arguments
  // call! "ar" arguments $status $_out $err
  var_call, 2, str_ar, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_494_36_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_75, IO_TAIL_CALL,
  POS(494, 3),
  POS(495, 6),
  POS(495, 6),
  POS(495, 3)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_494_36_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(496, 17),
  POS(496, 5),
  POS(497, 5)
};

static TAB_NUM t_func_extract_required[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 499_20_module
  // module $filename $_c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_500_32_c_source,
  // $path before(filename '/' -1)
  var_before, 3, LOCAL(3), chr_47, minus_num_1, 1, var_501_1_path,
  // $required empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_502_1_required,
  // while
  var_while, 3, lambda_76, lambda_77, lambda_80, TAIL_CALL,
  POS(500, 3),
  POS(501, 3),
  POS(502, 3),
  POS(503, 3)
};

static TAB_NUM t_lambda_76[] = {
  1, // locals
  0, // parameters
  // c_source .has_prefix. "/// require"
  var_has_prefix, 2, var_500_32_c_source, str__require, 1, LOCAL(1),
  //  c_source .has_prefix. "/// require"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(504, 8),
  POS(504, 7)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // range(c_source 12 -1) .before. '@nl;').trim
  var_range, 3, var_500_32_c_source, num_12, minus_num_1, 1, LOCAL(1),
  // range(c_source 12 -1) .before. '@nl;').trim
  var_before, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // $module_name (range(c_source 12 -1) .before. '@nl;').trim
  var_trim, 1, LOCAL(2), 1, var_506_1_module_name,
  // is_not_empty && module_name(1) == '.' &module_name
  var_is_not_empty, 1, var_501_1_path, 1, LOCAL(1),
  // is_not_empty && module_name(1) == '.' &module_name
  var_std__and, 2, LOCAL(1), lambda_78, 1, LOCAL(2),
  // update_if path.is_not_empty && module_name(1) == '.' &module_name
  var_update_if, 3, LOCAL(2), var_506_1_module_name, lambda_79, 1, var_506_1_module_name,
  // required(module_name) true
  var_502_1_required, 2, var_506_1_module_name, var_true, 1, var_502_1_required,
  // truncate_until &c_source '@nl;'
  var_truncate_until, 2, var_500_32_c_source, chr_10, 1, var_500_32_c_source,
  // next
  var_next, 0, TAIL_CALL,
  POS(506, 21),
  POS(506, 21),
  POS(506, 7),
  POS(507, 22),
  POS(507, 22),
  POS(507, 7),
  POS(509, 8),
  POS(510, 7),
  POS(511, 7)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // module_name(1) == '.' &module_name
  var_506_1_module_name, 1, num_1, 1, LOCAL(1),
  // module_name(1) == '.' &module_name
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // module_name(1) == '.' &module_name
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(507, 38),
  POS(507, 38),
  POS(507, 38)
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // range(module_name 2 -1))
  var_range, 3, var_506_1_module_name, num_2, minus_num_1, 1, LOCAL(1),
  // append(path range(module_name 2 -1))
  var_append, 2, var_501_1_path, LOCAL(1), 1, LOCAL(2),
  //  append(path range(module_name 2 -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(508, 24),
  POS(508, 12),
  POS(508, 11)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  required
  LET, 1, var_502_1_required, TAIL_CALL,
  POS(512, 7)
};

static TAB_NUM t_func_load_lines[] = {
  0, // locals
  1, // parameters
  var_514_14_filename,
  // load! $source filename
  var_load, 1, var_514_14_filename, IO_CALL(1), var_515_7_source,
  // cond
  var_cond, 2, lambda_81, lambda_83, IO_CALL(0),
  // from_utf8 &source
  var_from_utf8, 1, var_515_7_source, 1, var_515_7_source,
  // split_source_into_lines source
  var_split_source_into_lines, 1, var_515_7_source, TAIL_CALL,
  POS(515, 3),
  POS(516, 3),
  POS(523, 3),
  POS(524, 3)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_515_7_source, 1, LOCAL(1),
  //  source.is_empty:
  LET, 2, LOCAL(1), lambda_82, IO_TAIL_CALL,
  POS(517, 15),
  POS(517, 7)
};

static TAB_NUM t_lambda_82[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Empty_source_fil, var_514_14_filename, string_6, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(518, 14),
  POS(518, 7)
};

static TAB_NUM t_lambda_83[] = {
  3, // locals
  0, // parameters
  // source(-1) != '@nl;':
  var_515_7_source, 1, minus_num_1, 1, LOCAL(1),
  // source(-1) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // source(-1) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  source(-1) != '@nl;':
  LET, 2, LOCAL(3), lambda_84, IO_TAIL_CALL,
  POS(520, 8),
  POS(520, 8),
  POS(520, 8),
  POS(520, 7)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Missing_trailing, var_514_14_filename, string_6, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(521, 14),
  POS(521, 7)
};

static TAB_NUM t_func_funky__syntax_error[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 530_0_message
  var_undefined, var_531_0_node,
  // is_defined:
  var_is_defined, 1, var_531_0_node, 1, LOCAL(1),
  // if $column
  var_if, 3, LOCAL(1), lambda_node_is_defined, lambda_89, 1, var_533_4_column,
  // is_defined
  var_is_defined, 1, var_531_0_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_90, lambda_91, 1, LOCAL(2),
  // $details
  var_tuple, 3, var_current_filename, LOCAL(2), var_533_4_column, 1, LOCAL(4),
  // error funky::SYNTAX_ERROR message details
  var_error, 3, var_funky__SYNTAX_ERROR, LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(534, 10),
  POS(533, 3),
  POS(550, 14),
  POS(549, 7),
  POS(546, 3),
  POS(554, 3)
};

static TAB_NUM t_lambda_node_is_defined[] = {
  4, // locals
  0, // parameters
  // source_group_of(node))
  var_source_group_of, 1, var_531_0_node, 1, LOCAL(1),
  // $line line_text_of(source_group_of(node))
  var_line_text_of, 1, LOCAL(1), 1, var_535_1_line,
  // length_of(line)+1-length_of(source_position_of(node))
  var_length_of, 1, var_535_1_line, 1, LOCAL(1),
  // length_of(line)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // source_position_of(node))
  var_source_position_of, 1, var_531_0_node, 1, LOCAL(3),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(3), 1, LOCAL(4),
  // !column length_of(line)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(2), LOCAL(4), 1, var_533_4_column,
  // column == 1
  var_std__equal, 2, var_533_4_column, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_85, lambda_86, TAIL_CALL,
  POS(535, 26),
  POS(535, 7),
  POS(536, 15),
  POS(536, 15),
  POS(536, 43),
  POS(536, 33),
  POS(536, 7),
  POS(538, 9),
  POS(537, 7)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_533_4_column, TAIL_CALL,
  POS(539, 11)
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // column-1)
  var_std__minus, 2, var_533_4_column, num_1, 1, LOCAL(1),
  // line(column-1)
  var_535_1_line, 1, LOCAL(1), 1, LOCAL(2),
  // case
  var_case, 4, LOCAL(2), sequence_543_1, lambda_87, lambda_88, TAIL_CALL,
  POS(542, 18),
  POS(542, 13),
  POS(541, 11)
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // column-1
  var_std__minus, 2, var_533_4_column, num_1, 1, LOCAL(1),
  //  column-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(543, 50),
  POS(543, 49)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_533_4_column, TAIL_CALL,
  POS(544, 15)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(545, 7)
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // source_group_of(node)
  var_source_group_of, 1, var_531_0_node, 1, LOCAL(1),
  //  source_group_of(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(551, 12),
  POS(551, 11)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(552, 11)
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  1, // parameters
  var_556_16_obj,
  // is_an_error:
  var_is_an_error, 1, var_556_16_obj, 1, LOCAL(1),
  // on obj.is_an_error:
  var_on, 2, LOCAL(1), lambda_92, IO_TAIL_CALL,
  POS(557, 10),
  POS(557, 3)
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // error_category_of(obj) == SYNTAX_ERROR:
  var_error_category_of, 1, var_556_16_obj, 1, LOCAL(1),
  // error_category_of(obj) == SYNTAX_ERROR:
  var_std__equal, 2, LOCAL(1), var_SYNTAX_ERROR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_93, lambda_94, IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(559, 7),
  POS(559, 7),
  POS(558, 5),
  POS(563, 5)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // display_error! obj
  func_display_error, 1, var_556_16_obj, IO_TAIL_CALL,
  POS(560, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  // debug::dump_object 50 obj
  var_debug__dump_object, 2, num_50, var_556_16_obj, TAIL_CALL,
  POS(562, 9)
};

static TAB_NUM t_func_display_error[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 565_17_error
  // $message error_message_text_of(error)
  var_error_message_text_of, 1, LOCAL(2), 1, var_566_1_message,
  // error_details_of(error) $filename $line $position
  var_error_details_of, 1, LOCAL(2), 1, LOCAL(1),
  // error_details_of(error) $filename $line $position
  LOCAL(1), 0, 3, var_567_25_filename, var_567_35_line, var_567_41_position,
  // is_defined:
  var_is_defined, 1, var_567_35_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_defined, lambda_95, IO_TAIL_CALL,
  POS(566, 3),
  POS(567, 3),
  POS(567, 3),
  POS(569, 10),
  POS(568, 3)
};

static TAB_NUM t_lambda_line_is_defined[] = {
  9, // locals
  0, // parameters
  // line $indent $text
  var_567_35_line, 0, 2, LOCAL(7), LOCAL(8),
  // $line_no line_no_of(line)
  var_line_no_of, 1, var_567_35_line, 1, LOCAL(9),
  // to_sentence_case) IN LINE @(line_no) OF FILE @(filename)
  var_to_sentence_case, 1, var_566_1_message, 1, LOCAL(1),
  // tabs_and_spaces(indent))@(text)@
  var_tabs_and_spaces, 1, LOCAL(7), 1, LOCAL(2),
  // indent+position-1))^
  var_std__plus, 2, LOCAL(7), var_567_41_position, 1, LOCAL(3),
  // indent+position-1))^
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // tabs_and_spaces(indent+position-1))^
  var_tabs_and_spaces, 1, LOCAL(4), 1, LOCAL(5),
  // "
  var_std__string, 11, str_ERROR, LOCAL(1), str__IN_LINE, LOCAL(9), str__OF_FILE, var_567_25_filename, string_7, LOCAL(2), LOCAL(8), LOCAL(5), string_8, 1, LOCAL(6),
  // eprint! "
  var_eprint, 1, LOCAL(6), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(570, 7),
  POS(571, 7),
  POS(573, 26),
  POS(575, 11),
  POS(576, 27),
  POS(576, 27),
  POS(576, 11),
  POS(572, 15),
  POS(572, 7),
  POS(577, 7)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // to_sentence_case) IN FILE @(filename)
  var_to_sentence_case, 1, var_566_1_message, 1, LOCAL(1),
  // "
  var_std__string, 5, str_ERROR, LOCAL(1), str__IN_FILE, var_567_25_filename, string_9, 1, LOCAL(2),
  // eprint! "
  var_eprint, 1, LOCAL(2), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(580, 26),
  POS(579, 15),
  POS(579, 7),
  POS(581, 7)
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
  // "@(PREFIX)/share/funky-@(MAJOR)"
  var_std__string, 3, var_PREFIX, str_sharefunky, num_0, 1, LOCAL(2),
  // $include_path
  var_default_value, 2, LOCAL(1), LOCAL(2), 1, var_include_path,
  // truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_truncate_until, 3, var_program_name, chr_47, minus_num_1, 1, LOCAL(1),
  // truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_truncate_from, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // $do_run (truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_std__equal, 2, LOCAL(2), str_fkyrun, 1, var_do_run,
  // if $input_filename $be_verbose $do_rebuild $do_print_c $do_build_static
  var_if, 3, var_do_run, lambda_do_run, lambda_7, IO_CALL(5), var_input_filename, var_be_verbose, var_do_rebuild, var_do_print_c, var_do_build_static,
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
  POS(63, 1),
  POS(83, 1),
  POS(85, 1),
  POS(89, 5),
  POS(90, 5),
  POS(87, 1),
  POS(92, 10),
  POS(92, 10),
  POS(92, 1),
  POS(97, 1),
  POS(140, 1),
  POS(142, 11),
  POS(142, 11),
  POS(142, 11),
  POS(142, 1),
  POS(145, 3),
  POS(144, 1)
};

static int list_49_0_arguments[] = {
  -str_Wall, -str_Wnounusedfunctio, -str_Wnounusedvariabl, -str_Wnoparentheses, -str_Wnoswitch, -str_Wnotrigraphs, -str_O, -str_fomitframepointe, -str_fnostackprotecto, -str_falignfunctions, -str_falignloops
};

static int list_127_0_arguments[] = {
  -str_verbose, -str_output_detailed
};

static int list_130_0_arguments[] = {
  -str_rebuild, -str_rebuild_all_sour
};

static int list_133_0_arguments[] = {
  -str_printc, -str_print_C_source_c
};

static int list_136_0_arguments[] = {
  -str_static, -str_create_a_statica
};

static int list_212_0_arguments[] = {
  -str_runtimebuiltins, -str_runtimedebugger, -str_runtimeinterpret, -str_runtimelinker, -str_runtimememory, -str_runtimeprofiler
};

static int sequence_543_1_arguments[] = {
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
  {FLT_LIST, 11, {.arguments = list_49_0_arguments}},
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
  {FLT_STRING_8, 13, {.str_8 = "/share/funky-"}},
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
  {FLT_LIST, 2, {.arguments = list_127_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "rebuild"}},
  {FLT_STRING_8, 25, {.str_8 = "rebuild all source files\012"}},
  {FLT_LIST, 2, {.arguments = list_130_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "print-c"}},
  {FLT_STRING_8, 40, {.str_8 = "print C source code for a single module\012"}},
  {FLT_LIST, 2, {.arguments = list_133_0_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "static"}},
  {FLT_STRING_8, 38, {.str_8 = "create a statically linked executable\012"}},
  {FLT_LIST, 2, {.arguments = list_136_0_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "-static"}},
  {FLT_STRING_8, 14, {.str_8 = "-static-libgcc"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_STRING_8, 3, {.str_8 = "-lm"}},
  {FLT_STRING_8, 2, {.str_8 = "-o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 13, {.str_8 = "-l:libfky.so."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_run}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 5, {.str_8 = "done\012"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/builtins"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/debugger"}},
  {FLT_STRING_8, 19, {.str_8 = "runtime/interpreter"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/linker"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/memory"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/profiler"}},
  {FLT_LIST, 6, {.arguments = list_212_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_library}},
  {FLT_STRING_8, 8, {.str_8 = "/VERSION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_modules}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "libfky-"}},
  {FLT_STRING_8, 2, {.str_8 = ".a"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_STRING_8, 25, {.str_8 = "creating static library \042"}},
  {FLT_STRING_8, 3, {.str_8 = "rcs"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_STRING_8, 4, {.str_8 = ".so."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_STRING_8, 26, {.str_8 = "creating dynamic library \042"}},
  {FLT_STRING_8, 7, {.str_8 = "-shared"}},
  {FLT_STRING_8, 19, {.str_8 = "-Wl,-soname,libfky-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_find_newest_timestamp}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_entries}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DIRECTORY}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_REGULAR_FILE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_STRING_8, 10, {.str_8 = "-l:libfky-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_STRING_8, 5, {.str_8 = ".so.0"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_or_create_c_sources}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_STRING_8, 2, {.str_8 = ".c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_STRING_8, 12, {.str_8 = "Input file \042"}},
  {FLT_STRING_8, 17, {.str_8 = "\042 does not exist!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_STRING_8, 11, {.str_8 = "compiling \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_c_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile_c_file}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_STRING_8, 2, {.str_8 = "-I"}},
  {FLT_STRING_8, 8, {.str_8 = "-DNDEBUG"}},
  {FLT_STRING_8, 2, {.str_8 = "-c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_cc}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ar}},
  {FLT_STRING_8, 2, {.str_8 = "ar"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_required}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_STRING_8, 11, {.str_8 = "/// require"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_POSITIVE_INT64, 0, {.value = 12}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_STRING_8, 19, {.str_8 = "Empty source file \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_STRING_8, 39, {.str_8 = "Missing trailing newline character in \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__syntax_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_node_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_SEQUENCE, 5, {.arguments = sequence_543_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_POSITIVE_INT64, 0, {.value = 50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_display_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_line_is_defined}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}},
  {FLT_STRING_8, 9, {.str_8 = " IN LINE "}},
  {FLT_STRING_8, 9, {.str_8 = " OF FILE "}},
  {FLT_STRING_8, 2, {.str_8 = "\012\012"}},
  {FLT_STRING_8, 2, {.str_8 = "^\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_STRING_8, 9, {.str_8 = " IN FILE "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(45, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(50, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "builtin_functions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(64, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_builtin_function_name\000funky", NULL,
    {.const_idx = -func_funky__is_a_builtin_function_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "72_37_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_1_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(73, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(75, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(79, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(79, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(79, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(80, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(81, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(78, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "character_from_name\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_character_names\000", NULL,
    {.position = POS(83, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_environment\000", NULL,
    {.position = POS(85, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PREFIX\000", NULL,
    {.position = POS(90, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(90, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "include_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(88, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(92, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(92, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(92, 10)}
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
    {.position = POS(94, 24)}
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
    FOT_UNINITIALIZED, 0, 0,
    "do_build_static\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "command_line_arguments\000", NULL,
    {.position = POS(99, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(99, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(99, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(104, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(125, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_parameters\000", NULL,
    {.position = POS(102, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "FUNKY_LIBRARY_PATH\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(142, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(143, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(142, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(145, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(154, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(154, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "compile_module\000", NULL,
    {.position = POS(156, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(158, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_10_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_19_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_1_exe_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(166, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_7_exe_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(167, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(171, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(172, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(173, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(173, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(175, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(181, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(178, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(184, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(189, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(206, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exec\000", NULL,
    {.position = POS(206, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "228_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "229_1_version_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_4_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(235, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(236, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(237, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_1_object_files\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_1_a_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_7_a_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_1_so_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_7_so_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(271, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "287_19_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(291, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(296, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(299, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(285, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_19_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_12_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "directory\000", NULL,
    {.position = POS(304, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_error_message_string\000", NULL,
    {.position = POS(306, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(306, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(307, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(307, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_1_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_1_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000std", NULL,
    {.position = POS(311, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_1_fullname\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(313, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIRECTORY\000", NULL,
    {.position = POS(314, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REGULAR_FILE\000", NULL,
    {.position = POS(322, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(313, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_fky_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "334_1_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_1_object_files_handled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(335, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_1_libraries_handled\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_1_files_to_compile\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_3_fky_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(345, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL,
    {.position = POS(356, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(356, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(355, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_3_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_1_library_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(337, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "384_3_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_1_c_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "387_7_fky_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_7_c_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(400, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_35_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_1_basename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(415, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "save\000", NULL,
    {.position = POS(415, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_8_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_41_fky_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple_or_error\000", NULL,
    {.position = POS(424, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_1_compiled_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_8_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_22_c_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_1_obj_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "433_7_obj_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_18_c_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CC\000", NULL,
    {.position = POS(488, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "488_34_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(488, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(490, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_36_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_32_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_1_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_1_required\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "506_1_module_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(507, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "while\000", NULL,
    {.position = POS(503, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_14_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_7_source\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(516, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_source_into_lines\000", NULL,
    {.position = POS(524, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "syntax_error\000funky", NULL,
    {.const_idx = -func_funky__syntax_error}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_0_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_4_column\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(535, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_1_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(535, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(536, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(536, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(536, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(536, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(543, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(548, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000funky", NULL,
    {.position = POS(554, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(554, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "556_16_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_category_of\000", NULL,
    {.position = POS(559, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000", NULL,
    {.position = POS(559, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(562, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_1_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(566, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_details_of\000", NULL,
    {.position = POS(567, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_25_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_35_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_41_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(571, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(573, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(575, 11)}
  }
};

extern FUNKY_MODULE module__basic__stdlib;
extern FUNKY_MODULE module__configuration;
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
  &module__configuration,
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
  15, // number of required modules
  2, // number of defined namespaces
  2, // number of used namespaces
  237, // number of constants
  179, // number of variables
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
