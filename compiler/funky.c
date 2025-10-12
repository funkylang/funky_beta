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
/// require ./pretty_print

#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  str_cygwin = -2,
  lambda_1 = -3,
  string_1 = -4,
  str_dll = -5,
  lambda_2 = -6,
  str_so = -7,
  lambda_3 = -8,
  str_exe = -9,
  lambda_4 = -10,
  string_2 = -11,
  str_Wall = -12,
  str_Wnounusedfunctio = -13,
  str_Wnounusedvariabl = -14,
  str_Wnoparentheses = -15,
  str_Wnoswitch = -16,
  str_Wnotrigraphs = -17,
  str_O = -18,
  str_fomitframepointe = -19,
  str_fnostackprotecto = -20,
  str_falignfunctions = -21,
  str_falignloops = -22,
  list_66_1 = -23,
  str_assign = -24,
  str_key_value_pair = -25,
  str_list = -26,
  str_tuple = -27,
  str_sequence = -28,
  str_value_range = -29,
  func_funky__is_a_builtin_function_name = -30,
  chr_58 = -31,
  lambda_5 = -32,
  lambda_6 = -33,
  str_std = -34,
  lambda_7 = -35,
  str_std_2 = -36,
  lambda_8 = -37,
  string_3 = -38,
  lambda_9 = -39,
  str_FUNKY_INCLUDE_PA = -40,
  str_sharefunky = -41,
  chr_47 = -42,
  minus_num_1 = -43,
  chr_45 = -44,
  str_fkyrun = -45,
  lambda_do_run = -46,
  lambda_10 = -47,
  str_Missing_command = -48,
  num_1 = -49,
  lambda_11 = -50,
  str_Copyright_C = -51,
  str_filename = -52,
  str_a_source_code_fi = -53,
  str_brief = -54,
  str_show_brief_error = -55,
  list_146_7 = -56,
  str_verbose = -57,
  str_output_detailed = -58,
  list_149_7 = -59,
  str_rebuild = -60,
  str_rebuild_all_sour = -61,
  list_152_7 = -62,
  str_printc = -63,
  str_print_C_source_c = -64,
  list_155_7 = -65,
  str_moduleprefix = -66,
  str_needed_to_compil = -67,
  str_static = -68,
  str_create_a_statica = -69,
  list_161_7 = -70,
  str_prettyprint = -71,
  str_do_not_compile_j = -72,
  list_164_7 = -73,
  str_FUNKY_LIBRARY_PA = -74,
  str_lib = -75,
  lambda_input_filename = -76,
  string_4 = -77,
  str_fky = -78,
  lambda_12 = -79,
  lambda_13 = -80,
  lambda_14 = -81,
  lambda_15 = -82,
  func_print_c = -83,
  func_pretty_print = -84,
  func_build_executable = -85,
  lambda_16 = -86,
  lambda_17 = -87,
  lambda_18 = -88,
  lambda_19 = -89,
  lambda_20 = -90,
  str_creating_executa = -91,
  string_5 = -92,
  lambda_modules = -93,
  str_o = -94,
  str_L = -95,
  lambda_do_build_static = -96,
  str_static_2 = -97,
  str_staticlibgcc = -98,
  lambda_21 = -99,
  str_lm = -100,
  str_o_2 = -101,
  lambda_22 = -102,
  str_llibfky = -103,
  lambda_2_do_run = -104,
  num_2 = -105,
  lambda_23 = -106,
  lambda_24 = -107,
  str_done = -108,
  str_runtimebuiltins = -109,
  str_runtimedebugger = -110,
  str_runtimeinterpret = -111,
  str_runtimelinker = -112,
  str_runtimememory = -113,
  str_runtimeprofiler = -114,
  list_254_1 = -115,
  func_build_library = -116,
  str_VERSION = -117,
  lambda_25 = -118,
  lambda_26 = -119,
  lambda_2_modules = -120,
  lambda_2_do_build_static = -121,
  str_libfky = -122,
  str_a = -123,
  lambda_27 = -124,
  lambda_28 = -125,
  lambda_29 = -126,
  lambda_30 = -127,
  lambda_31 = -128,
  str_creating_static = -129,
  str_rcs = -130,
  lambda_32 = -131,
  lambda_33 = -132,
  lambda_34 = -133,
  lambda_35 = -134,
  lambda_36 = -135,
  lambda_37 = -136,
  str_creating_dynamic = -137,
  str_shared = -138,
  str_Wlsonamelibfky = -139,
  lambda_38 = -140,
  func_find_newest_timestamp = -141,
  lambda_39 = -142,
  lambda_timestamp_is_undefined = -143,
  lambda_40 = -144,
  lambda_41 = -145,
  lambda_42 = -146,
  lambda_43 = -147,
  lambda_44 = -148,
  func_collect_entries = -149,
  lambda_45 = -150,
  lambda_46 = -151,
  string_6 = -152,
  lambda_DIRECTORY = -153,
  chr_46 = -154,
  lambda_47 = -155,
  lambda_REGULAR_FILE = -156,
  lambda_48 = -157,
  lambda_49 = -158,
  func_compile = -159,
  lambda_loop = -160,
  lambda_50 = -161,
  lambda_51 = -162,
  lambda_52 = -163,
  lambda_53 = -164,
  lambda_54 = -165,
  lambda_55 = -166,
  lambda_56 = -167,
  lambda_57 = -168,
  lambda_58 = -169,
  str_llibfky_2 = -170,
  lambda_59 = -171,
  lambda_60 = -172,
  func_load_or_create_c_sources = -173,
  lambda_61 = -174,
  str_c = -175,
  lambda_62 = -176,
  str_Input_file = -177,
  str__does_not_exist = -178,
  lambda_63 = -179,
  lambda_64 = -180,
  lambda_65 = -181,
  lambda_66 = -182,
  str_compiling = -183,
  lambda_67 = -184,
  lambda_68 = -185,
  lambda_69 = -186,
  lambda_c_timestamp_is_undefined = -187,
  lambda_70 = -188,
  func_maybe_compile = -189,
  lambda_71 = -190,
  func_c_compile = -191,
  lambda_72 = -192,
  lambda_73 = -193,
  lambda_74 = -194,
  lambda_75 = -195,
  lambda_76 = -196,
  lambda_77 = -197,
  lambda_78 = -198,
  func_compile_c_file = -199,
  lambda_79 = -200,
  str_I = -201,
  str_DNDEBUG = -202,
  str_c_2 = -203,
  func_cc = -204,
  lambda_80 = -205,
  func_ar = -206,
  str_ar = -207,
  lambda_81 = -208,
  func_extract_required = -209,
  lambda_82 = -210,
  str__require = -211,
  lambda_83 = -212,
  num_12 = -213,
  chr_10 = -214,
  lambda_84 = -215,
  lambda_85 = -216,
  lambda_86 = -217,
  func_load_lines = -218,
  lambda_87 = -219,
  lambda_88 = -220,
  str_Empty_source_fil = -221,
  string_7 = -222,
  lambda_89 = -223,
  lambda_90 = -224,
  str_Missing_trailing = -225,
  func_funky__syntax_error = -226,
  lambda_node_is_defined = -227,
  lambda_91 = -228,
  lambda_92 = -229,
  chr_36 = -230,
  chr_33 = -231,
  chr_38 = -232,
  chr_34 = -233,
  chr_39 = -234,
  sequence_585_14 = -235,
  lambda_93 = -236,
  lambda_94 = -237,
  lambda_95 = -238,
  lambda_96 = -239,
  lambda_97 = -240,
  func_handle_error = -241,
  lambda_98 = -242,
  lambda_99 = -243,
  lambda_100 = -244,
  num_50 = -245,
  func_display_error = -246,
  lambda_line_is_defined = -247,
  lambda_do_show_brief_error_messages = -248,
  string_8 = -249,
  string_9 = -250,
  string_10 = -251,
  lambda_101 = -252,
  str_ERROR = -253,
  str__IN_LINE = -254,
  str__OF_FILE = -255,
  string_11 = -256,
  string_12 = -257,
  lambda_102 = -258,
  lambda_2_do_show_brief_error_messages = -259,
  lambda_103 = -260,
  str__IN_FILE = -261
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_DLL_VERSION, // initialized
  var_OS, // extern
  var_std__equal, // extern
  var_std__string, // extern
  var_DLL_EXTENSION, // dynamic
  var_if, // extern
  var_EXE_EXTENSION, // dynamic
  var_list, // extern
  var_builtin_functions, // dynamic
  var_hash_set, // extern
  var_funky__is_a_builtin_function_name, // initialized
  var_89_38_identifier, // dynamic
  var_90_4_namespace, // dynamic
  var_before, // extern
  var_is_empty, // extern
  var_has_prefix, // extern
  var_std__or, // extern
  var_behind, // extern
  var_false, // extern
  var_funky__character_from_name, // dynamic
  var_get_character_names, // extern
  var_environment, // extern
  var_PREFIX, // extern
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
  var_do_show_brief_error_messages, // dynamic
  var_be_verbose, // dynamic
  var_do_rebuild, // dynamic
  var_do_print_c, // dynamic
  var_funky__module_prefix, // dynamic
  var_do_build_static, // dynamic
  var_do_pretty_print, // dynamic
  var_command_line_arguments, // extern
  var_Error, // extern
  var_on, // extern
  var_COPYRIGHT, // extern
  var_MANDATORY_PARAMETER, // extern
  var_VALUED_OPTION, // extern
  var_program_parameters, // extern
  var_library_path, // dynamic
  var_std__not, // extern
  var_append, // extern
  var_update_if, // extern
  var_has_suffix, // extern
  var_true, // extern
  var_cond, // extern
  var_base_directory, // extern
  var_until, // extern
  var_compile_module, // extern
  var_print, // extern
  var_current_filename, // extern
  var_current_module_name, // extern
  var_extract_current_filename_and_module_name, // extern
  var_parse_module, // extern
  var_statements_to_source, // extern
  var_202_13_modules, // dynamic
  var_202_22_libraries, // dynamic
  var_204_4_newest_timestamp, // dynamic
  var_without_suffix, // extern
  var_205_4_exe_filename, // dynamic
  var_209_10_exe_info, // dynamic
  var_stat, // extern
  var_is_undefined, // extern
  var_is_an_error, // extern
  var_modification_time_of, // extern
  var_std__less, // extern
  var_eprint, // extern
  var_first, // extern
  var_map, // extern
  var_225_8_arguments, // dynamic
  var_push, // extern
  var_range, // extern
  var_exec, // extern
  var_270_4_newest_timestamp, // dynamic
  var_271_4_version_filename, // dynamic
  var_273_7_version, // dynamic
  var_load, // extern
  var_trim, // extern
  var_put, // extern
  var_280_4_basename, // dynamic
  var_281_4_object_files, // dynamic
  var_289_8_a_filename, // dynamic
  var_290_14_a_info, // dynamic
  var_302_8_so_filename, // dynamic
  var_303_14_so_info, // dynamic
  var_empty_list, // extern
  var_326_4_newest_timestamp, // dynamic
  var_329_26_timestamp, // dynamic
  var_break, // extern
  var_is_defined, // extern
  var_std__and, // extern
  var_next, // extern
  var_for_each, // extern
  var_345_20_path, // dynamic
  var_346_15_entries, // dynamic
  var_directory, // extern
  var_to_error_message_string, // extern
  var_eprintln, // extern
  var_EXIT_FAILURE, // extern
  var_exit, // extern
  var_350_4_filenames, // dynamic
  var_353_8_name, // dynamic
  var_std__name_of, // extern
  var_354_8_fullname, // dynamic
  var_type_of, // extern
  var_DIRECTORY, // extern
  var_REGULAR_FILE, // extern
  var_case, // extern
  var_374_4_fky_filenames, // dynamic
  var_375_4_modules, // dynamic
  var_376_4_libraries, // dynamic
  var_377_4_object_files_handled, // dynamic
  var_empty_hash_set, // extern
  var_378_4_libraries_handled, // dynamic
  var_380_6_files_to_compile, // dynamic
  var_382_10_fky_filename, // dynamic
  var_merge, // extern
  var_empty_insert_order_set, // extern
  var_map_reduce, // extern
  var_402_18_filename, // dynamic
  var_408_22_library_name, // dynamic
  var_loop, // extern
  var_424_4_modules, // dynamic
  var_426_8_fky_filename, // dynamic
  var_428_8_c_filename, // dynamic
  var_429_14_fky_info, // dynamic
  var_432_14_c_info, // dynamic
  var_tuple, // extern
  var_453_46_c_source, // dynamic
  var_454_12_basename, // dynamic
  var_to_utf8, // extern
  var_save, // extern
  var_463_11_filename, // dynamic
  var_463_44_fky_lines, // dynamic
  var_tuple_or_error, // extern
  var_469_4_compiled_modules, // dynamic
  var_472_15_fky_filename, // dynamic
  var_472_29_c_timestamp, // dynamic
  var_473_8_basename, // dynamic
  var_474_8_obj_filename, // dynamic
  var_475_14_obj_info, // dynamic
  var_517_19_c_filename, // dynamic
  var_CC, // extern
  var_530_37_err, // dynamic
  var_call, // extern
  var_from_utf8, // extern
  var_536_39_err, // dynamic
  var_542_35_c_source, // dynamic
  var_543_4_path, // dynamic
  var_544_4_required, // dynamic
  var_548_8_module_name, // dynamic
  var_is_not_empty, // extern
  var_while, // extern
  var_556_15_filename, // dynamic
  var_557_10_source, // dynamic
  var_split_source_into_lines, // extern
  var_funky__syntax_error, // initialized
  var_573_5_node, // dynamic
  var_575_7_column, // dynamic
  var_source_group_of, // extern
  var_577_8_line, // dynamic
  var_line_text_of, // extern
  var_length_of, // extern
  var_std__plus, // extern
  var_source_position_of, // extern
  var_std__minus, // extern
  var_std__sequence, // extern
  var_funky__SYNTAX_ERROR, // extern
  var_error, // extern
  var_598_17_obj, // dynamic
  var_error_category_of, // extern
  var_SYNTAX_ERROR, // extern
  var_debug__dump_object, // extern
  var_608_4_message, // dynamic
  var_error_message_text_of, // extern
  var_error_details_of, // extern
  var_609_28_filename, // dynamic
  var_609_38_line, // dynamic
  var_609_44_position, // dynamic
  var_612_13_indent, // dynamic
  var_612_21_text, // dynamic
  var_613_8_line_no, // dynamic
  var_line_no_of, // extern
  var_to_sentence_case, // extern
  var_tabs_and_spaces, // extern
  var__END
};


static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // "-@(DLL_VERSION).dll"
  var_std__string, 3, string_1, var_DLL_VERSION, str_dll, 1, LOCAL(1),
  //  "-@(DLL_VERSION).dll"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(57, 8),
  POS(57, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // ".so.@(DLL_VERSION)"
  var_std__string, 2, str_so, var_DLL_VERSION, 1, LOCAL(1),
  //  ".so.@(DLL_VERSION)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(58, 8),
  POS(58, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ".exe"
  LET, 1, str_exe, TAIL_CALL,
  POS(63, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(64, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky__is_a_builtin_function_name[] = {
  1, // locals
  1, // parameters
  var_89_38_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_89_38_identifier, chr_58, 1, var_90_4_namespace,
  // is_empty
  var_is_empty, 1, var_90_4_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(90, 3),
  POS(92, 15),
  POS(91, 3)
};

static FUNCTION_INFO i_func_funky__is_a_builtin_function_name = {
  t_func_funky__is_a_builtin_function_name, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // builtin_functions(identifier)
  var_builtin_functions, 1, var_89_38_identifier, 1, LOCAL(1),
  //  builtin_functions(identifier)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(93, 8),
  POS(93, 7)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__equal, 2, var_90_4_namespace, str_std, 1, LOCAL(1),
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__or, 2, LOCAL(1), lambda_7, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_9, TAIL_CALL,
  POS(96, 9),
  POS(96, 9),
  POS(95, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // namespace .has_prefix. "std-"
  var_has_prefix, 2, var_90_4_namespace, str_std_2, 1, LOCAL(1),
  // namespace .has_prefix. "std-"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(96, 31),
  POS(96, 31)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // identifier .behind. "::")
  var_behind, 2, var_89_38_identifier, string_3, 1, LOCAL(1),
  // builtin_functions(identifier .behind. "::")
  var_builtin_functions, 1, LOCAL(1), 1, LOCAL(2),
  //  builtin_functions(identifier .behind. "::")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(97, 30),
  POS(97, 12),
  POS(97, 11)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(98, 11)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_do_run[] = {
  1, // locals
  0, // parameters
  // is_empty: Error "Missing command line arguments!"
  var_is_empty, 1, var_command_line_arguments, 1, LOCAL(1),
  // on command_line_arguments.is_empty: Error "Missing command line arguments!"
  var_on, 2, LOCAL(1), lambda_10, 0,
  // command_line_arguments(1) false false false false undefined false false
  var_command_line_arguments, 1, num_1, 1, LOCAL(1),
  // -> command_line_arguments(1) false false false false undefined false false
  LET, 8, LOCAL(1), var_false, var_false, var_false, var_false, var_undefined, var_false, var_false, TAIL_CALL,
  POS(118, 31),
  POS(118, 5),
  POS(119, 8),
  POS(119, 5)
};

static FUNCTION_INFO i_lambda_do_run = {
  t_lambda_do_run, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // Error "Missing command line arguments!"
  var_Error, 1, str_Missing_command, TAIL_CALL,
  POS(118, 41)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  7, // locals
  0, // parameters
  // list
  var_list, 2, var_COPYRIGHT, str_Copyright_C, 1, LOCAL(1),
  // list
  var_list, 3, var_MANDATORY_PARAMETER, str_filename, str_a_source_code_fi, 1, LOCAL(2),
  // list
  var_list, 3, var_VALUED_OPTION, str_moduleprefix, str_needed_to_compil, 1, LOCAL(7),
  // program_parameters!
  var_program_parameters, 9, LOCAL(1), LOCAL(2), list_146_7, list_149_7, list_152_7, list_155_7, LOCAL(7), list_161_7, list_164_7, IO_TAIL_CALL,
  POS(122, 7),
  POS(143, 7),
  POS(158, 7),
  POS(121, 5)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_input_filename[] = {
  1, // locals
  0, // parameters
  // append("./" input_filename)
  var_append, 2, string_4, var_input_filename, 1, LOCAL(1),
  //  append("./" input_filename)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(174, 22),
  POS(174, 21)
};

static FUNCTION_INFO i_lambda_input_filename = {
  t_lambda_input_filename, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // cond!
  var_cond, 3, lambda_13, lambda_14, lambda_15, IO_TAIL_CALL,
  POS(178, 5)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  do_print_c print_c
  LET, 2, var_do_print_c, func_print_c, TAIL_CALL,
  POS(179, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  do_pretty_print pretty_print
  LET, 2, var_do_pretty_print, func_pretty_print, TAIL_CALL,
  POS(180, 9)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  true build_executable
  LET, 2, var_true, func_build_executable, TAIL_CALL,
  POS(181, 9)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 1, 0,
  {}
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
  POS(185, 3),
  POS(186, 3),
  POS(187, 3),
  POS(188, 3),
  POS(189, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_print_c = {
  t_func_print_c, NULL, 5, 2,
  {"187_19_c_source\000", "186_16_fky_lines\000"}
};

static TAB_NUM t_func_pretty_print[] = {
  3, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // load_lines! $fky_lines input_filename
  func_load_lines, 1, var_input_filename, IO_CALL(1), LOCAL(2),
  // extract_current_filename_and_module_name input_filename
  var_extract_current_filename_and_module_name, 1, var_input_filename, 2, var_current_filename, var_current_module_name,
  // parse_module $statements fky_lines
  var_parse_module, 1, LOCAL(2), 1, LOCAL(3),
  // statements_to_source(statements)
  var_statements_to_source, 1, LOCAL(3), 1, LOCAL(1),
  // print! statements_to_source(statements)
  var_print, 1, LOCAL(1), IO_TAIL_CALL,
  POS(192, 3),
  POS(193, 3),
  POS(194, 3),
  POS(196, 3),
  POS(197, 10),
  POS(197, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_pretty_print = {
  t_func_pretty_print, NULL, 6, 2,
  {"196_17_statements\000", "193_16_fky_lines\000"}
};

static TAB_NUM t_func_build_executable[] = {
  1, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // compile! $modules $libraries input_filename
  func_compile, 1, var_input_filename, IO_CALL(2), var_202_13_modules, var_202_22_libraries,
  // c_compile! &modules
  func_c_compile, 1, var_202_13_modules, IO_CALL(1), var_202_13_modules,
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, var_202_13_modules, 1, var_204_4_newest_timestamp,
  // input_filename .without_suffix. ".fky"
  var_without_suffix, 2, var_input_filename, str_fky, 1, LOCAL(1),
  // $exe_filename
  var_append, 2, LOCAL(1), var_EXE_EXTENSION, 1, var_205_4_exe_filename,
  // stat! $exe_info exe_filename
  var_stat, 1, var_205_4_exe_filename, IO_CALL(1), var_209_10_exe_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_16, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_19, IO_CALL(0),
  // if
  var_if, 3, var_do_run, lambda_2_do_run, lambda_23, IO_TAIL_CALL,
  POS(201, 3),
  POS(202, 3),
  POS(203, 3),
  POS(204, 3),
  POS(207, 7),
  POS(205, 3),
  POS(209, 3),
  POS(211, 7),
  POS(210, 3),
  POS(246, 3)
};

static FUNCTION_INFO i_func_build_executable = {
  t_func_build_executable, NULL, 10, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_204_4_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_17, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(213, 24),
  POS(211, 7),
  POS(213, 7)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_209_10_exe_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // exe_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(214, 16),
  POS(211, 7),
  POS(214, 7)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // modification_time_of(exe_info)
  var_modification_time_of, 1, var_209_10_exe_info, 1, LOCAL(1),
  // modification_time_of(exe_info)
  var_std__less, 2, LOCAL(1), var_204_4_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(exe_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(215, 26),
  POS(215, 26),
  POS(215, 7)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_20, IO_CALL(0),
  // $object_files
  var_map, 2, var_202_13_modules, lambda_modules, 1, LOCAL(1),
  // $arguments cc_options
  LET, 1, list_66_1, 1, var_225_8_arguments,
  // push &arguments "-L"
  var_push, 2, var_225_8_arguments, str_L, 1, var_225_8_arguments,
  // push &arguments library_path
  var_push, 2, var_225_8_arguments, var_library_path, 1, var_225_8_arguments,
  // append &arguments object_files
  var_append, 2, var_225_8_arguments, LOCAL(1), 1, var_225_8_arguments,
  // if
  var_if, 3, var_do_build_static, lambda_do_build_static, lambda_22, IO_TAIL_CALL,
  POS(217, 7),
  POS(219, 7),
  POS(225, 7),
  POS(226, 7),
  POS(227, 7),
  POS(228, 7),
  POS(229, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 7, 1,
  {"219_8_object_files\000"}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_executa, var_205_4_exe_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(217, 30),
  POS(217, 22)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 221_21_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(223, 15),
  POS(223, 15),
  POS(222, 13),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_modules = {
  t_lambda_modules, NULL, 3, 1,
  {"221_21_module\000"}
};

static TAB_NUM t_lambda_do_build_static[] = {
  1, // locals
  0, // parameters
  // push &arguments "-static"
  var_push, 2, var_225_8_arguments, str_static_2, 1, var_225_8_arguments,
  // push &arguments "-static-libgcc"
  var_push, 2, var_225_8_arguments, str_staticlibgcc, 1, var_225_8_arguments,
  // append &arguments libraries
  var_append, 2, var_225_8_arguments, var_202_22_libraries, 1, var_225_8_arguments,
  // map(runtime_objects: (name) append name ".o")
  var_map, 2, list_254_1, lambda_21, 1, LOCAL(1),
  // append &arguments map(runtime_objects: (name) append name ".o")
  var_append, 2, var_225_8_arguments, LOCAL(1), 1, var_225_8_arguments,
  // push &arguments "-lm"
  var_push, 2, var_225_8_arguments, str_lm, 1, var_225_8_arguments,
  // push &arguments "-o"
  var_push, 2, var_225_8_arguments, str_o_2, 1, var_225_8_arguments,
  // push &arguments exe_filename
  var_push, 2, var_225_8_arguments, var_205_4_exe_filename, 1, var_225_8_arguments,
  // cc! arguments
  func_cc, 1, var_225_8_arguments, IO_TAIL_CALL,
  POS(231, 11),
  POS(232, 11),
  POS(233, 11),
  POS(234, 29),
  POS(234, 11),
  POS(235, 11),
  POS(236, 11),
  POS(237, 11),
  POS(238, 11)
};

static FUNCTION_INFO i_lambda_do_build_static = {
  t_lambda_do_build_static, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 234_51_name
  // append name ".o")
  var_append, 2, LOCAL(1), str_o, TAIL_CALL,
  POS(234, 57),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 1,
  {"234_51_name\000"}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // append &arguments libraries
  var_append, 2, var_225_8_arguments, var_202_22_libraries, 1, var_225_8_arguments,
  // "-l:libfky@(DLL_EXTENSION)"
  var_std__string, 2, str_llibfky, var_DLL_EXTENSION, 1, LOCAL(1),
  // push &arguments "-l:libfky@(DLL_EXTENSION)"
  var_push, 2, var_225_8_arguments, LOCAL(1), 1, var_225_8_arguments,
  // push &arguments "-lm"
  var_push, 2, var_225_8_arguments, str_lm, 1, var_225_8_arguments,
  // push &arguments "-o"
  var_push, 2, var_225_8_arguments, str_o_2, 1, var_225_8_arguments,
  // push &arguments exe_filename
  var_push, 2, var_225_8_arguments, var_205_4_exe_filename, 1, var_225_8_arguments,
  // cc! arguments
  func_cc, 1, var_225_8_arguments, IO_TAIL_CALL,
  POS(240, 11),
  POS(241, 27),
  POS(241, 11),
  POS(242, 11),
  POS(243, 11),
  POS(244, 11),
  POS(245, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_2_do_run[] = {
  1, // locals
  0, // parameters
  // range(command_line_arguments 2 -1)
  var_range, 3, var_command_line_arguments, num_2, minus_num_1, 1, LOCAL(1),
  // exec! exe_filename range(command_line_arguments 2 -1)
  var_exec, 2, var_205_4_exe_filename, LOCAL(1), IO_TAIL_CALL,
  POS(248, 26),
  POS(248, 7)
};

static FUNCTION_INFO i_lambda_2_do_run = {
  t_lambda_2_do_run, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_24, IO_TAIL_CALL,
  POS(250, 7)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(251, 9)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 1, 0,
  {}
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
  func_find_newest_timestamp, 1, LOCAL(3), 1, var_270_4_newest_timestamp,
  // $version_filename append(input_filename "/VERSION")
  var_append, 2, var_input_filename, str_VERSION, 1, var_271_4_version_filename,
  // stat! $version_info version_filename
  var_stat, 1, var_271_4_version_filename, IO_CALL(1), LOCAL(4),
  // is_an_error
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // if $version
  var_if, 3, LOCAL(1), lambda_25, lambda_26, IO_CALL(1), var_273_7_version,
  // $basename truncate_until(input_filename '/' -1)
  var_truncate_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_280_4_basename,
  // $object_files
  var_map, 2, LOCAL(3), lambda_2_modules, 1, var_281_4_object_files,
  // if
  var_if, 3, var_do_build_static, lambda_2_do_build_static, lambda_32, IO_TAIL_CALL,
  POS(264, 3),
  POS(265, 3),
  POS(266, 3),
  POS(267, 3),
  POS(268, 3),
  POS(269, 3),
  POS(270, 3),
  POS(271, 3),
  POS(272, 3),
  POS(274, 18),
  POS(273, 3),
  POS(280, 3),
  POS(281, 3),
  POS(287, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_build_library = {
  t_func_build_library, NULL, 14, 3,
  {"272_10_version_info\000", "267_30_modules\000", "266_21_filenames\000"}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(275, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // load! !version version_filename
  var_load, 1, var_271_4_version_filename, IO_CALL(1), var_273_7_version,
  // trim &version
  var_trim, 1, var_273_7_version, 1, var_273_7_version,
  // put(version '-')
  var_put, 2, var_273_7_version, chr_45, 1, LOCAL(1),
  // -> put(version '-')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(277, 7),
  POS(278, 7),
  POS(279, 10),
  POS(279, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 283_17_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(285, 11),
  POS(285, 11),
  POS(284, 9),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_2_modules = {
  t_lambda_2_modules, NULL, 3, 1,
  {"283_17_module\000"}
};

static TAB_NUM t_lambda_2_do_build_static[] = {
  1, // locals
  0, // parameters
  // $a_filename "libfky-@(basename).a"
  var_std__string, 3, str_libfky, var_280_4_basename, str_a, 1, var_289_8_a_filename,
  // stat! $a_info a_filename
  var_stat, 1, var_289_8_a_filename, IO_CALL(1), var_290_14_a_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_27, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_30, IO_TAIL_CALL,
  POS(289, 7),
  POS(290, 7),
  POS(292, 11),
  POS(291, 7)
};

static FUNCTION_INFO i_lambda_2_do_build_static = {
  t_lambda_2_do_build_static, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_270_4_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(294, 28),
  POS(292, 11),
  POS(294, 11)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_290_14_a_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // a_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(295, 18),
  POS(292, 11),
  POS(295, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // modification_time_of(a_info)
  var_modification_time_of, 1, var_290_14_a_info, 1, LOCAL(1),
  // modification_time_of(a_info)
  var_std__less, 2, LOCAL(1), var_270_4_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(a_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(296, 30),
  POS(296, 30),
  POS(296, 11)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_31, IO_CALL(0),
  // list("rcs" a_filename) object_files)
  var_list, 2, str_rcs, var_289_8_a_filename, 1, LOCAL(1),
  // append(list("rcs" a_filename) object_files)
  var_append, 2, LOCAL(1), var_281_4_object_files, 1, LOCAL(2),
  // ar! append(list("rcs" a_filename) object_files)
  func_ar, 1, LOCAL(2), IO_TAIL_CALL,
  POS(298, 11),
  POS(300, 22),
  POS(300, 15),
  POS(300, 11)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_static, var_289_8_a_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(298, 34),
  POS(298, 26)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // $so_filename "libfky-@(basename)@(version)@(DLL_EXTENSION)"
  var_std__string, 4, str_libfky, var_280_4_basename, var_273_7_version, var_DLL_EXTENSION, 1, var_302_8_so_filename,
  // stat! $so_info so_filename
  var_stat, 1, var_302_8_so_filename, IO_CALL(1), var_303_14_so_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_33, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_36, IO_CALL(0),
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_38, IO_TAIL_CALL,
  POS(302, 7),
  POS(303, 7),
  POS(305, 11),
  POS(304, 7),
  POS(321, 7)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_270_4_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_34, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(307, 28),
  POS(305, 11),
  POS(307, 11)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_303_14_so_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // so_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(308, 19),
  POS(305, 11),
  POS(308, 11)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // modification_time_of(so_info)
  var_modification_time_of, 1, var_303_14_so_info, 1, LOCAL(1),
  // modification_time_of(so_info)
  var_std__less, 2, LOCAL(1), var_270_4_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(so_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(309, 30),
  POS(309, 30),
  POS(309, 11)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_37, IO_CALL(0),
  // $arguments empty_list
  LET, 1, var_empty_list, 1, LOCAL(2),
  // push &arguments "-shared"
  var_push, 2, LOCAL(2), str_shared, 1, LOCAL(2),
  // "-Wl,-soname,libfky-@(basename)@(DLL_EXTENSION)"
  var_std__string, 3, str_Wlsonamelibfky, var_280_4_basename, var_DLL_EXTENSION, 1, LOCAL(1),
  // push &arguments
  var_push, 2, LOCAL(2), LOCAL(1), 1, LOCAL(2),
  // append &arguments object_files
  var_append, 2, LOCAL(2), var_281_4_object_files, 1, LOCAL(2),
  // push &arguments "-o"
  var_push, 2, LOCAL(2), str_o_2, 1, LOCAL(2),
  // push &arguments so_filename
  var_push, 2, LOCAL(2), var_302_8_so_filename, 1, LOCAL(2),
  // cc! arguments
  func_cc, 1, LOCAL(2), IO_TAIL_CALL,
  POS(311, 11),
  POS(313, 11),
  POS(314, 11),
  POS(316, 13),
  POS(315, 11),
  POS(317, 11),
  POS(318, 11),
  POS(319, 11),
  POS(320, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 9, 1,
  {"313_12_arguments\000"}
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_dynamic, var_302_8_so_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(311, 34),
  POS(311, 26)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(322, 9)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_find_newest_timestamp[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 325_26_modules
  // $newest_timestamp undefined
  LET, 1, var_undefined, 1, var_326_4_newest_timestamp,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_39, lambda_44, IO_TAIL_CALL,
  POS(326, 3),
  POS(327, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_find_newest_timestamp = {
  t_func_find_newest_timestamp, NULL, 2, 1,
  {"325_26_modules\000"}
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 328_8_module
  // module $_filename $timestamp
  LOCAL(2), 0, 2, LOCAL(1), var_329_26_timestamp,
  // is_undefined:
  var_is_undefined, 1, var_329_26_timestamp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timestamp_is_undefined, lambda_40, IO_TAIL_CALL,
  POS(329, 7),
  POS(331, 19),
  POS(330, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 3, 1,
  {"328_8_module\000"}
};

static TAB_NUM t_lambda_timestamp_is_undefined[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp undefined
  LET, 1, var_undefined, 1, var_326_4_newest_timestamp,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(332, 11),
  POS(333, 11)
};

static FUNCTION_INFO i_lambda_timestamp_is_undefined = {
  t_lambda_timestamp_is_undefined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_326_4_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, var_next, IO_TAIL_CALL,
  POS(337, 32),
  POS(336, 15),
  POS(335, 11)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // is_defined && timestamp > newest_timestamp
  var_is_defined, 1, var_329_26_timestamp, 1, LOCAL(1),
  // is_defined && timestamp > newest_timestamp
  var_std__and, 2, LOCAL(1), lambda_42, 1, LOCAL(2),
  // timestamp.is_defined && timestamp > newest_timestamp
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(338, 25),
  POS(338, 25),
  POS(338, 15)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // newest_timestamp
  var_std__less, 2, var_326_4_newest_timestamp, var_329_26_timestamp, 1, LOCAL(1),
  // timestamp > newest_timestamp
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(338, 51),
  POS(338, 39)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp timestamp
  LET, 1, var_329_26_timestamp, 1, var_326_4_newest_timestamp,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(340, 15),
  POS(341, 15)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  newest_timestamp
  LET, 1, var_326_4_newest_timestamp, TAIL_CALL,
  POS(343, 7)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collect_entries[] = {
  1, // locals
  1, // parameters
  var_345_20_path,
  // directory! $entries path
  var_directory, 1, var_345_20_path, IO_CALL(1), var_346_15_entries,
  // is_an_error:
  var_is_an_error, 1, var_346_15_entries, 1, LOCAL(1),
  // on entries.is_an_error:
  var_on, 2, LOCAL(1), lambda_45, IO_CALL(0),
  // $filenames empty_list
  LET, 1, var_empty_list, 1, var_350_4_filenames,
  // for_each entries
  var_for_each, 3, var_346_15_entries, lambda_46, lambda_49, IO_TAIL_CALL,
  POS(346, 3),
  POS(347, 14),
  POS(347, 3),
  POS(350, 3),
  POS(351, 3)
};

static FUNCTION_INFO i_func_collect_entries = {
  t_func_collect_entries, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // to_error_message_string
  var_to_error_message_string, 1, var_346_15_entries, 1, LOCAL(1),
  // eprintln! entries.to_error_message_string
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(348, 23),
  POS(348, 5),
  POS(349, 5)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 352_8_entry
  // $name std::name_of(entry)
  var_std__name_of, 1, LOCAL(2), 1, var_353_8_name,
  // $fullname append(path "/" name)
  var_append, 3, var_345_20_path, string_6, var_353_8_name, 1, var_354_8_fullname,
  // type_of(entry)
  var_type_of, 1, LOCAL(2), 1, LOCAL(1),
  // case type_of(entry)
  var_case, 6, LOCAL(1), var_DIRECTORY, lambda_DIRECTORY, var_REGULAR_FILE, lambda_REGULAR_FILE, var_next, IO_TAIL_CALL,
  POS(353, 7),
  POS(354, 7),
  POS(355, 12),
  POS(355, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 4, 1,
  {"352_8_entry\000"}
};

static TAB_NUM t_lambda_DIRECTORY[] = {
  1, // locals
  0, // parameters
  // name .has_prefix. '.'
  var_has_prefix, 2, var_353_8_name, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_47, IO_TAIL_CALL,
  POS(358, 13),
  POS(357, 11)
};

static FUNCTION_INFO i_lambda_DIRECTORY = {
  t_lambda_DIRECTORY, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // collect_entries! $more_filenames fullname
  func_collect_entries, 1, var_354_8_fullname, IO_CALL(1), LOCAL(1),
  // append &filenames more_filenames
  var_append, 2, var_350_4_filenames, LOCAL(1), 1, var_350_4_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(361, 15),
  POS(362, 15),
  POS(363, 15),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 1,
  {"361_33_more_filenames\000"}
};

static TAB_NUM t_lambda_REGULAR_FILE[] = {
  1, // locals
  0, // parameters
  // name .has_suffix. ".fky":
  var_has_suffix, 2, var_353_8_name, str_fky, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, var_next, IO_TAIL_CALL,
  POS(366, 13),
  POS(365, 11)
};

static FUNCTION_INFO i_lambda_REGULAR_FILE = {
  t_lambda_REGULAR_FILE, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // push &filenames fullname
  var_push, 2, var_350_4_filenames, var_354_8_fullname, 1, var_350_4_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(367, 15),
  POS(368, 15)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  filenames
  LET, 1, var_350_4_filenames, TAIL_CALL,
  POS(371, 7)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 373_12_base_filename
  // $fky_filenames list(base_filename)
  var_list, 1, LOCAL(1), 1, var_374_4_fky_filenames,
  // $modules empty_list
  LET, 1, var_empty_list, 1, var_375_4_modules,
  // $libraries empty_list
  LET, 1, var_empty_list, 1, var_376_4_libraries,
  // $object_files_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_377_4_object_files_handled,
  // $libraries_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_378_4_libraries_handled,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(374, 3),
  POS(375, 3),
  POS(376, 3),
  POS(377, 3),
  POS(378, 3),
  POS(379, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_compile = {
  t_func_compile, NULL, 6, 1,
  {"373_12_base_filename\000"}
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // $files_to_compile empty_list
  LET, 1, var_empty_list, 1, var_380_6_files_to_compile,
  // for_each fky_filenames
  var_for_each, 3, var_374_4_fky_filenames, lambda_50, lambda_52, IO_TAIL_CALL,
  POS(380, 5),
  POS(381, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  1, // parameters
  var_382_10_fky_filename,
  // object_files_handled(fky_filename)
  var_377_4_object_files_handled, 1, var_382_10_fky_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_51, IO_TAIL_CALL,
  POS(384, 11),
  POS(383, 9)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // object_files_handled(fky_filename) true
  var_377_4_object_files_handled, 2, var_382_10_fky_filename, var_true, 1, var_377_4_object_files_handled,
  // push &files_to_compile fky_filename
  var_push, 2, var_380_6_files_to_compile, var_382_10_fky_filename, 1, var_380_6_files_to_compile,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(387, 14),
  POS(388, 13),
  POS(389, 13)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_380_6_files_to_compile, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, IO_TAIL_CALL,
  POS(392, 28),
  POS(391, 9)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  modules libraries
  LET, 2, var_375_4_modules, var_376_4_libraries, TAIL_CALL,
  POS(393, 13)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // load_or_create_c_sources! $more_modules files_to_compile
  func_load_or_create_c_sources, 1, var_380_6_files_to_compile, IO_CALL(1), LOCAL(1),
  // handle_error! more_modules
  func_handle_error, 1, LOCAL(1), IO_CALL(0),
  // map_reduce $required
  var_map_reduce, 4, LOCAL(1), func_extract_required, var_merge, var_empty_insert_order_set, 1, LOCAL(2),
  // append &modules more_modules
  var_append, 2, var_375_4_modules, LOCAL(1), 1, var_375_4_modules,
  // !fky_filenames empty_list
  LET, 1, var_empty_list, 1, var_374_4_fky_filenames,
  // for_each required
  var_for_each, 3, LOCAL(2), lambda_55, var_next, IO_TAIL_CALL,
  POS(395, 13),
  POS(396, 13),
  POS(397, 13),
  POS(399, 13),
  POS(400, 13),
  POS(401, 13),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 6, 2,
  {"397_25_required\000", "395_40_more_modules\000"}
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  1, // parameters
  var_402_18_filename,
  // filename(1) == '.':
  var_402_18_filename, 1, num_1, 1, LOCAL(1),
  // filename(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, lambda_57, IO_TAIL_CALL,
  POS(404, 19),
  POS(404, 19),
  POS(403, 17)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // "@(filename).fky"
  var_std__string, 2, var_402_18_filename, str_fky, 1, LOCAL(1),
  // push &fky_filenames "@(filename).fky"
  var_push, 2, var_374_4_fky_filenames, LOCAL(1), 1, var_374_4_fky_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(405, 41),
  POS(405, 21),
  POS(406, 21)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // $library_name filename .truncate_from. '/'
  var_truncate_from, 2, var_402_18_filename, chr_47, 1, var_408_22_library_name,
  // !library_name
  var_if, 3, var_do_build_static, lambda_58, lambda_59, 1, var_408_22_library_name,
  // libraries_handled(library_name)
  var_378_4_libraries_handled, 1, var_408_22_library_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_60, IO_TAIL_CALL,
  POS(408, 21),
  POS(409, 21),
  POS(415, 23),
  POS(414, 21)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name).a"
  var_std__string, 3, str_llibfky_2, var_408_22_library_name, str_a, 1, LOCAL(1),
  //  "-l:libfky-@(library_name).a"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(412, 28),
  POS(412, 27)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name)@(DLL_EXTENSION)"
  var_std__string, 3, str_llibfky_2, var_408_22_library_name, var_DLL_EXTENSION, 1, LOCAL(1),
  //  "-l:libfky-@(library_name)@(DLL_EXTENSION)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(413, 28),
  POS(413, 27)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // libraries_handled(library_name) true
  var_378_4_libraries_handled, 2, var_408_22_library_name, var_true, 1, var_378_4_libraries_handled,
  // push &libraries library_name
  var_push, 2, var_376_4_libraries, var_408_22_library_name, 1, var_376_4_libraries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(418, 26),
  POS(419, 25),
  POS(420, 25)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_load_or_create_c_sources[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 423_29_filenames
  // $modules empty_list # a list of tuple(filename c_timestamp c_source fky_lines)
  LET, 1, var_empty_list, 1, var_424_4_modules,
  // for_each filenames # sequential load
  var_for_each, 3, LOCAL(1), lambda_61, lambda_68, IO_TAIL_CALL,
  POS(424, 3),
  POS(425, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_load_or_create_c_sources = {
  t_func_load_or_create_c_sources, NULL, 2, 1,
  {"423_29_filenames\000"}
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  1, // parameters
  var_426_8_fky_filename,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_426_8_fky_filename, chr_46, minus_num_1, 1, LOCAL(2),
  // $c_filename append(basename ".c")
  var_append, 2, LOCAL(2), str_c, 1, var_428_8_c_filename,
  // stat! $fky_info fky_filename
  var_stat, 1, var_426_8_fky_filename, IO_CALL(1), var_429_14_fky_info,
  // is_an_error: Error! "
  var_is_an_error, 1, var_429_14_fky_info, 1, LOCAL(1),
  // on fky_info.is_an_error: Error! "
  var_on, 2, LOCAL(1), lambda_62, IO_CALL(0),
  // stat! $c_info c_filename
  var_stat, 1, var_428_8_c_filename, IO_CALL(1), var_432_14_c_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_63, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_67, IO_TAIL_CALL,
  POS(427, 7),
  POS(428, 7),
  POS(429, 7),
  POS(430, 19),
  POS(430, 7),
  POS(432, 7),
  POS(434, 11),
  POS(433, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 8, 1,
  {"427_8_basename\000"}
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Input_file, var_426_8_fky_filename, str__does_not_exist, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(430, 39),
  POS(430, 32)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_432_14_c_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // c_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(436, 18),
  POS(434, 11),
  POS(436, 11)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  3, // locals
  0, // parameters
  // modification_time_of(fky_info) > modification_time_of(c_info)
  var_modification_time_of, 1, var_429_14_fky_info, 1, LOCAL(1),
  // modification_time_of(c_info)
  var_modification_time_of, 1, var_432_14_c_info, 1, LOCAL(2),
  // modification_time_of(c_info)
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // modification_time_of(fky_info) > modification_time_of(c_info)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(437, 11),
  POS(437, 44),
  POS(437, 44),
  POS(437, 11)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_66, IO_CALL(0),
  // load_lines! $fky_lines fky_filename
  func_load_lines, 1, var_426_8_fky_filename, IO_CALL(1), LOCAL(2),
  // tuple(fky_filename undefined undefined fky_lines)
  var_tuple, 4, var_426_8_fky_filename, var_undefined, var_undefined, LOCAL(2), 1, LOCAL(1),
  // push &modules tuple(fky_filename undefined undefined fky_lines)
  var_push, 2, var_424_4_modules, LOCAL(1), 1, var_424_4_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(439, 11),
  POS(441, 11),
  POS(442, 25),
  POS(442, 11),
  POS(443, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 5, 1,
  {"441_24_fky_lines\000"}
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_426_8_fky_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(439, 34),
  POS(439, 26)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // load! $c_source c_filename
  var_load, 1, var_428_8_c_filename, IO_CALL(1), LOCAL(3),
  // modification_time_of(c_info) c_source undefined)
  var_modification_time_of, 1, var_432_14_c_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(c_info) c_source undefined)
  var_tuple, 4, var_426_8_fky_filename, LOCAL(1), LOCAL(3), var_undefined, 1, LOCAL(2),
  // push &modules
  var_push, 2, var_424_4_modules, LOCAL(2), 1, var_424_4_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(445, 11),
  POS(447, 32),
  POS(447, 13),
  POS(446, 11),
  POS(448, 11),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 5, 1,
  {"445_18_c_source\000"}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // map &modules maybe_compile # parallel compile
  var_map, 2, var_424_4_modules, func_maybe_compile, 1, var_424_4_modules,
  // for_each modules # sequential save
  var_for_each, 3, var_424_4_modules, lambda_69, lambda_70, IO_TAIL_CALL,
  POS(450, 7),
  POS(451, 7)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 452_12_module
  // module $fky_filename $c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), var_453_46_c_source,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, LOCAL(3), chr_46, minus_num_1, 1, var_454_12_basename,
  // is_undefined:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_c_timestamp_is_undefined, var_next, IO_TAIL_CALL,
  POS(453, 11),
  POS(454, 11),
  POS(456, 25),
  POS(455, 11),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 4, 3,
  {"453_19_fky_filename\000", "453_33_c_timestamp\000", "452_12_module\000"}
};

static TAB_NUM t_lambda_c_timestamp_is_undefined[] = {
  2, // locals
  0, // parameters
  // "@(basename).c" c_source.to_utf8
  var_std__string, 2, var_454_12_basename, str_c, 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, var_453_46_c_source, 1, LOCAL(2),
  // save! "@(basename).c" c_source.to_utf8
  var_save, 2, LOCAL(1), LOCAL(2), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(457, 21),
  POS(457, 46),
  POS(457, 15),
  POS(458, 15)
};

static FUNCTION_INFO i_lambda_c_timestamp_is_undefined = {
  t_lambda_c_timestamp_is_undefined, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  modules
  LET, 1, var_424_4_modules, TAIL_CALL,
  POS(460, 11)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_maybe_compile[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 462_18_module
  // module $filename $c_timestamp $c_source $fky_lines
  LOCAL(2), 0, 4, var_463_11_filename, LOCAL(3), LOCAL(4), var_463_44_fky_lines,
  // is_undefined &c_source:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // update_if c_source.is_undefined &c_source:
  var_update_if, 3, LOCAL(1), LOCAL(4), lambda_71, 1, LOCAL(4),
  // tuple_or_error(filename c_timestamp c_source)
  var_tuple_or_error, 3, var_463_11_filename, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> tuple_or_error(filename c_timestamp c_source)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(463, 3),
  POS(464, 22),
  POS(464, 3),
  POS(466, 6),
  POS(466, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_maybe_compile = {
  t_func_maybe_compile, NULL, 5, 3,
  {"463_34_c_source\000", "463_21_c_timestamp\000", "462_18_module\000"}
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // compile_module filename fky_lines
  var_compile_module, 2, var_463_11_filename, var_463_44_fky_lines, TAIL_CALL,
  POS(465, 5)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_c_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 468_14_modules
  // $compiled_modules empty_list
  LET, 1, var_empty_list, 1, var_469_4_compiled_modules,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_72, lambda_78, IO_TAIL_CALL,
  POS(469, 3),
  POS(470, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_c_compile = {
  t_func_c_compile, NULL, 2, 1,
  {"468_14_modules\000"}
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 471_8_module
  // module $fky_filename $c_timestamp
  LOCAL(2), 0, 2, var_472_15_fky_filename, var_472_29_c_timestamp,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_472_15_fky_filename, chr_46, minus_num_1, 1, var_473_8_basename,
  // $obj_filename "@(basename).o"
  var_std__string, 2, var_473_8_basename, str_o, 1, var_474_8_obj_filename,
  // stat! $obj_info obj_filename
  var_stat, 1, var_474_8_obj_filename, IO_CALL(1), var_475_14_obj_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_73, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, IO_TAIL_CALL,
  POS(472, 7),
  POS(473, 7),
  POS(474, 7),
  POS(475, 7),
  POS(477, 11),
  POS(476, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 6, 1,
  {"471_8_module\000"}
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_472_29_c_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_74, 1, LOCAL(2),
  // c_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(479, 23),
  POS(477, 11),
  POS(479, 11)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_475_14_obj_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // obj_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(480, 20),
  POS(477, 11),
  POS(480, 11)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info)
  var_modification_time_of, 1, var_475_14_obj_info, 1, LOCAL(1),
  // modification_time_of(obj_info)
  var_std__less, 2, LOCAL(1), var_472_29_c_timestamp, 1, LOCAL(2),
  // c_timestamp > modification_time_of(obj_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(481, 25),
  POS(481, 25),
  POS(481, 11)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  1, // locals
  0, // parameters
  // "@(basename).c" obj_filename
  var_std__string, 2, var_473_8_basename, str_c, 1, LOCAL(1),
  // compile_c_file! "@(basename).c" obj_filename
  func_compile_c_file, 2, LOCAL(1), var_474_8_obj_filename, IO_CALL(0),
  // tuple(fky_filename undefined)
  var_tuple, 2, var_472_15_fky_filename, var_undefined, 1, LOCAL(1),
  // push &compiled_modules tuple(fky_filename undefined)
  var_push, 2, var_469_4_compiled_modules, LOCAL(1), 1, var_469_4_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(483, 27),
  POS(483, 11),
  POS(484, 34),
  POS(484, 11),
  POS(485, 11)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info))
  var_modification_time_of, 1, var_475_14_obj_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(obj_info))
  var_tuple, 2, var_472_15_fky_filename, LOCAL(1), 1, LOCAL(2),
  // push &compiled_modules
  var_push, 2, var_469_4_compiled_modules, LOCAL(2), 1, var_469_4_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(488, 32),
  POS(488, 13),
  POS(487, 11),
  POS(489, 11)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  //  compiled_modules
  LET, 1, var_469_4_compiled_modules, TAIL_CALL,
  POS(490, 7)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_compile_c_file[] = {
  3, // locals
  2, // parameters
  var_517_19_c_filename,
  LOCAL(2), // 517_30_o_filename
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_79, IO_CALL(0),
  // $arguments cc_options
  LET, 1, list_66_1, 1, LOCAL(3),
  // "-I@(include_path)"
  var_std__string, 2, str_I, var_include_path, 1, LOCAL(1),
  // push &arguments "-I@(include_path)"
  var_push, 2, LOCAL(3), LOCAL(1), 1, LOCAL(3),
  // push &arguments "-DNDEBUG"
  var_push, 2, LOCAL(3), str_DNDEBUG, 1, LOCAL(3),
  // push &arguments "-c"
  var_push, 2, LOCAL(3), str_c_2, 1, LOCAL(3),
  // push &arguments c_filename
  var_push, 2, LOCAL(3), var_517_19_c_filename, 1, LOCAL(3),
  // push &arguments "-o"
  var_push, 2, LOCAL(3), str_o_2, 1, LOCAL(3),
  // push &arguments o_filename
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // cc! arguments
  func_cc, 1, LOCAL(3), IO_TAIL_CALL,
  POS(518, 3),
  POS(520, 3),
  POS(521, 19),
  POS(521, 3),
  POS(522, 3),
  POS(523, 3),
  POS(524, 3),
  POS(525, 3),
  POS(526, 3),
  POS(527, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_compile_c_file = {
  t_func_compile_c_file, NULL, 10, 2,
  {"520_4_arguments\000", "517_30_o_filename\000"}
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_517_19_c_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(518, 26),
  POS(518, 18)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_cc[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 529_7_arguments
  // call! CC arguments $status $_out $err
  var_call, 2, var_CC, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_530_37_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_80, IO_TAIL_CALL,
  POS(530, 3),
  POS(531, 6),
  POS(531, 6),
  POS(531, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_cc = {
  t_func_cc, NULL, 4, 2,
  {"530_23_status\000", "529_7_arguments\000"}
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_530_37_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(532, 17),
  POS(532, 5),
  POS(533, 5)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_ar[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 535_7_arguments
  // call! "ar" arguments $status $_out $err
  var_call, 2, str_ar, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_536_39_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_81, IO_TAIL_CALL,
  POS(536, 3),
  POS(537, 6),
  POS(537, 6),
  POS(537, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_ar = {
  t_func_ar, NULL, 4, 2,
  {"535_7_arguments\000", "536_25_status\000"}
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_536_39_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(538, 17),
  POS(538, 5),
  POS(539, 5)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_extract_required[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 541_21_module
  // module $filename $_c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_542_35_c_source,
  // $path before(filename '/' -1)
  var_before, 3, LOCAL(3), chr_47, minus_num_1, 1, var_543_4_path,
  // $required empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_544_4_required,
  // while
  var_while, 3, lambda_82, lambda_83, lambda_86, TAIL_CALL,
  POS(542, 3),
  POS(543, 3),
  POS(544, 3),
  POS(545, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_extract_required = {
  t_func_extract_required, NULL, 4, 2,
  {"541_21_module\000", "542_11_filename\000"}
};

static TAB_NUM t_lambda_82[] = {
  1, // locals
  0, // parameters
  // c_source .has_prefix. "/// require"
  var_has_prefix, 2, var_542_35_c_source, str__require, 1, LOCAL(1),
  //  c_source .has_prefix. "/// require"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(546, 8),
  POS(546, 7)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // range(c_source 12 -1) .before. '@nl;').trim
  var_range, 3, var_542_35_c_source, num_12, minus_num_1, 1, LOCAL(1),
  // range(c_source 12 -1) .before. '@nl;').trim
  var_before, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // $module_name (range(c_source 12 -1) .before. '@nl;').trim
  var_trim, 1, LOCAL(2), 1, var_548_8_module_name,
  // is_not_empty && module_name(1) == '.' &module_name
  var_is_not_empty, 1, var_543_4_path, 1, LOCAL(1),
  // is_not_empty && module_name(1) == '.' &module_name
  var_std__and, 2, LOCAL(1), lambda_84, 1, LOCAL(2),
  // update_if path.is_not_empty && module_name(1) == '.' &module_name
  var_update_if, 3, LOCAL(2), var_548_8_module_name, lambda_85, 1, var_548_8_module_name,
  // required(module_name) true
  var_544_4_required, 2, var_548_8_module_name, var_true, 1, var_544_4_required,
  // truncate_until &c_source '@nl;'
  var_truncate_until, 2, var_542_35_c_source, chr_10, 1, var_542_35_c_source,
  // next
  var_next, 0, TAIL_CALL,
  POS(548, 21),
  POS(548, 21),
  POS(548, 7),
  POS(549, 22),
  POS(549, 22),
  POS(549, 7),
  POS(551, 8),
  POS(552, 7),
  POS(553, 7)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // module_name(1) == '.' &module_name
  var_548_8_module_name, 1, num_1, 1, LOCAL(1),
  // module_name(1) == '.' &module_name
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // module_name(1) == '.' &module_name
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(549, 38),
  POS(549, 38),
  POS(549, 38)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // range(module_name 2 -1))
  var_range, 3, var_548_8_module_name, num_2, minus_num_1, 1, LOCAL(1),
  // append(path range(module_name 2 -1))
  var_append, 2, var_543_4_path, LOCAL(1), 1, LOCAL(2),
  //  append(path range(module_name 2 -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(550, 24),
  POS(550, 12),
  POS(550, 11)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  required
  LET, 1, var_544_4_required, TAIL_CALL,
  POS(554, 7)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_load_lines[] = {
  0, // locals
  1, // parameters
  var_556_15_filename,
  // load! $source filename
  var_load, 1, var_556_15_filename, IO_CALL(1), var_557_10_source,
  // cond
  var_cond, 2, lambda_87, lambda_89, IO_CALL(0),
  // from_utf8 &source
  var_from_utf8, 1, var_557_10_source, 1, var_557_10_source,
  // split_source_into_lines source
  var_split_source_into_lines, 1, var_557_10_source, TAIL_CALL,
  POS(557, 3),
  POS(558, 3),
  POS(565, 3),
  POS(566, 3)
};

static FUNCTION_INFO i_func_load_lines = {
  t_func_load_lines, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_557_10_source, 1, LOCAL(1),
  //  source.is_empty:
  LET, 2, LOCAL(1), lambda_88, IO_TAIL_CALL,
  POS(559, 15),
  POS(559, 7)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Empty_source_fil, var_556_15_filename, string_7, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(560, 14),
  POS(560, 7)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  3, // locals
  0, // parameters
  // source(-1) != '@nl;':
  var_557_10_source, 1, minus_num_1, 1, LOCAL(1),
  // source(-1) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // source(-1) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  source(-1) != '@nl;':
  LET, 2, LOCAL(3), lambda_90, IO_TAIL_CALL,
  POS(562, 8),
  POS(562, 8),
  POS(562, 8),
  POS(562, 7)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Missing_trailing, var_556_15_filename, string_7, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(563, 14),
  POS(563, 7)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky__syntax_error[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 572_5_message
  var_undefined, var_573_5_node,
  // is_defined:
  var_is_defined, 1, var_573_5_node, 1, LOCAL(1),
  // if $column
  var_if, 3, LOCAL(1), lambda_node_is_defined, lambda_95, 1, var_575_7_column,
  // append(base_directory current_filename)
  var_append, 2, var_base_directory, var_current_filename, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_573_5_node, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_96, lambda_97, 1, LOCAL(3),
  // $details
  var_tuple, 3, LOCAL(1), LOCAL(3), var_575_7_column, 1, LOCAL(5),
  // error funky::SYNTAX_ERROR message details
  var_error, 3, var_funky__SYNTAX_ERROR, LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(576, 10),
  POS(575, 3),
  POS(590, 7),
  POS(592, 14),
  POS(591, 7),
  POS(588, 3),
  POS(596, 3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky__syntax_error = {
  t_func_funky__syntax_error, NULL, 7, 2,
  {"588_4_details\000", "572_5_message\000"}
};

static TAB_NUM t_lambda_node_is_defined[] = {
  4, // locals
  0, // parameters
  // source_group_of(node))
  var_source_group_of, 1, var_573_5_node, 1, LOCAL(1),
  // $line line_text_of(source_group_of(node))
  var_line_text_of, 1, LOCAL(1), 1, var_577_8_line,
  // length_of(line)+1-length_of(source_position_of(node))
  var_length_of, 1, var_577_8_line, 1, LOCAL(1),
  // length_of(line)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // source_position_of(node))
  var_source_position_of, 1, var_573_5_node, 1, LOCAL(3),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(3), 1, LOCAL(4),
  // !column length_of(line)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(2), LOCAL(4), 1, var_575_7_column,
  // column == 1
  var_std__equal, 2, var_575_7_column, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_91, lambda_92, TAIL_CALL,
  POS(577, 26),
  POS(577, 7),
  POS(578, 15),
  POS(578, 15),
  POS(578, 43),
  POS(578, 33),
  POS(578, 7),
  POS(580, 9),
  POS(579, 7)
};

static FUNCTION_INFO i_lambda_node_is_defined = {
  t_lambda_node_is_defined, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_575_7_column, TAIL_CALL,
  POS(581, 11)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // column-1)
  var_std__minus, 2, var_575_7_column, num_1, 1, LOCAL(1),
  // line(column-1)
  var_577_8_line, 1, LOCAL(1), 1, LOCAL(2),
  // case
  var_case, 4, LOCAL(2), sequence_585_14, lambda_93, lambda_94, TAIL_CALL,
  POS(584, 18),
  POS(584, 13),
  POS(583, 11)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // column-1
  var_std__minus, 2, var_575_7_column, num_1, 1, LOCAL(1),
  //  column-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(585, 50),
  POS(585, 49)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_575_7_column, TAIL_CALL,
  POS(586, 15)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(587, 7)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // source_group_of(node)
  var_source_group_of, 1, var_573_5_node, 1, LOCAL(1),
  //  source_group_of(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(593, 12),
  POS(593, 11)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(594, 11)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  1, // parameters
  var_598_17_obj,
  // is_an_error:
  var_is_an_error, 1, var_598_17_obj, 1, LOCAL(1),
  // on obj.is_an_error:
  var_on, 2, LOCAL(1), lambda_98, IO_TAIL_CALL,
  POS(599, 10),
  POS(599, 3)
};

static FUNCTION_INFO i_func_handle_error = {
  t_func_handle_error, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // error_category_of(obj) == SYNTAX_ERROR:
  var_error_category_of, 1, var_598_17_obj, 1, LOCAL(1),
  // error_category_of(obj) == SYNTAX_ERROR:
  var_std__equal, 2, LOCAL(1), var_SYNTAX_ERROR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_99, lambda_100, IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(601, 7),
  POS(601, 7),
  POS(600, 5),
  POS(605, 5)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  // display_error! obj
  func_display_error, 1, var_598_17_obj, IO_TAIL_CALL,
  POS(602, 9)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // debug::dump_object 50 obj
  var_debug__dump_object, 2, num_50, var_598_17_obj, TAIL_CALL,
  POS(604, 9)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_display_error[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 607_18_error
  // $message error_message_text_of(error)
  var_error_message_text_of, 1, LOCAL(2), 1, var_608_4_message,
  // error_details_of(error) $filename $line $position
  var_error_details_of, 1, LOCAL(2), 1, LOCAL(1),
  // error_details_of(error) $filename $line $position
  LOCAL(1), 0, 3, var_609_28_filename, var_609_38_line, var_609_44_position,
  // is_defined:
  var_is_defined, 1, var_609_38_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_defined, lambda_102, IO_TAIL_CALL,
  POS(608, 3),
  POS(609, 3),
  POS(609, 3),
  POS(611, 10),
  POS(610, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_display_error = {
  t_func_display_error, NULL, 5, 1,
  {"607_18_error\000"}
};

static TAB_NUM t_lambda_line_is_defined[] = {
  0, // locals
  0, // parameters
  // line $indent $text
  var_609_38_line, 0, 2, var_612_13_indent, var_612_21_text,
  // $line_no line_no_of(line)
  var_line_no_of, 1, var_609_38_line, 1, var_613_8_line_no,
  // if
  var_if, 3, var_do_show_brief_error_messages, lambda_do_show_brief_error_messages, lambda_101, IO_TAIL_CALL,
  POS(612, 7),
  POS(613, 7),
  POS(614, 7)
};

static FUNCTION_INFO i_lambda_line_is_defined = {
  t_lambda_line_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_do_show_brief_error_messages[] = {
  2, // locals
  0, // parameters
  // indent+position): @(message)
  var_std__plus, 2, var_612_13_indent, var_609_44_position, 1, LOCAL(1),
  // "
  var_std__string, 8, var_609_28_filename, string_8, var_613_8_line_no, string_8, LOCAL(1), string_9, var_608_4_message, string_10, 1, LOCAL(2),
  // eprint! "
  var_eprint, 1, LOCAL(2), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(617, 38),
  POS(616, 19),
  POS(616, 11),
  POS(618, 11)
};

static FUNCTION_INFO i_lambda_do_show_brief_error_messages = {
  t_lambda_do_show_brief_error_messages, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  6, // locals
  0, // parameters
  // to_sentence_case) IN LINE @(line_no) @
  var_to_sentence_case, 1, var_608_4_message, 1, LOCAL(1),
  // tabs_and_spaces(indent))@(text)@
  var_tabs_and_spaces, 1, var_612_13_indent, 1, LOCAL(2),
  // indent+position-1))^
  var_std__plus, 2, var_612_13_indent, var_609_44_position, 1, LOCAL(3),
  // indent+position-1))^
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // tabs_and_spaces(indent+position-1))^
  var_tabs_and_spaces, 1, LOCAL(4), 1, LOCAL(5),
  // "
  var_std__string, 11, str_ERROR, LOCAL(1), str__IN_LINE, var_613_8_line_no, str__OF_FILE, var_609_28_filename, string_11, LOCAL(2), var_612_21_text, LOCAL(5), string_12, 1, LOCAL(6),
  // eprint! "
  var_eprint, 1, LOCAL(6), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(621, 30),
  POS(624, 15),
  POS(625, 31),
  POS(625, 31),
  POS(625, 15),
  POS(620, 19),
  POS(620, 11),
  POS(626, 11)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_do_show_brief_error_messages, lambda_2_do_show_brief_error_messages, lambda_103, IO_TAIL_CALL,
  POS(628, 7)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_do_show_brief_error_messages[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 4, var_609_28_filename, string_9, var_608_4_message, string_10, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(630, 19),
  POS(630, 11)
};

static FUNCTION_INFO i_lambda_2_do_show_brief_error_messages = {
  t_lambda_2_do_show_brief_error_messages, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // to_sentence_case) IN FILE @(filename)
  var_to_sentence_case, 1, var_608_4_message, 1, LOCAL(1),
  // "
  var_std__string, 5, str_ERROR, LOCAL(1), str__IN_FILE, var_609_28_filename, string_10, 1, LOCAL(2),
  // eprint! "
  var_eprint, 1, LOCAL(2), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(634, 30),
  POS(633, 19),
  POS(633, 11),
  POS(635, 11)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 4, 0,
  {}
};

static TAB_NUM t_module_entry[] = {
  3, // locals
  0, // parameters
  // OS == "cygwin"
  var_std__equal, 2, var_OS, str_cygwin, 1, LOCAL(1),
  // $DLL_EXTENSION
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_DLL_EXTENSION,
  // OS == "cygwin"
  var_std__equal, 2, var_OS, str_cygwin, 1, LOCAL(1),
  // $EXE_EXTENSION
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_EXE_EXTENSION,
  // $builtin_functions
  var_hash_set, 6, str_assign, str_key_value_pair, str_list, str_tuple, str_sequence, str_value_range, 1, var_builtin_functions,
  // $funky::character_from_name get_character_names()
  var_get_character_names, 0, 1, var_funky__character_from_name,
  // environment("FUNKY_INCLUDE_PATH")
  var_environment, 1, str_FUNKY_INCLUDE_PA, 1, LOCAL(1),
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
  // if
  var_if, 3, var_do_run, lambda_do_run, lambda_11, IO_CALL(8), var_input_filename, var_do_show_brief_error_messages, var_be_verbose, var_do_rebuild, var_do_print_c, var_funky__module_prefix, var_do_build_static, var_do_pretty_print,
  // environment("FUNKY_LIBRARY_PATH")
  var_environment, 1, str_FUNKY_LIBRARY_PA, 1, LOCAL(1),
  // "@(PREFIX)/lib"
  var_std__string, 2, var_PREFIX, str_lib, 1, LOCAL(2),
  // $library_path
  var_default_value, 2, LOCAL(1), LOCAL(2), 1, var_library_path,
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
  var_if, 3, LOCAL(1), lambda_12, func_build_library, IO_TAIL_CALL,
  POS(56, 5),
  POS(54, 1),
  POS(62, 5),
  POS(60, 1),
  POS(80, 1),
  POS(100, 1),
  POS(104, 5),
  POS(105, 5),
  POS(102, 1),
  POS(107, 10),
  POS(107, 10),
  POS(107, 1),
  POS(112, 1),
  POS(170, 5),
  POS(171, 5),
  POS(168, 1),
  POS(173, 11),
  POS(173, 11),
  POS(173, 11),
  POS(173, 1),
  POS(176, 3),
  POS(175, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 22, 0,
  {}
};

static int list_66_1_arguments[] = {
  -str_Wall, -str_Wnounusedfunctio, -str_Wnounusedvariabl, -str_Wnoparentheses, -str_Wnoswitch, -str_Wnotrigraphs, -str_O, -str_fomitframepointe, -str_fnostackprotecto, -str_falignfunctions, -str_falignloops
};

static int list_146_7_arguments[] = {
  -str_brief, -str_show_brief_error
};

static int list_149_7_arguments[] = {
  -str_verbose, -str_output_detailed
};

static int list_152_7_arguments[] = {
  -str_rebuild, -str_rebuild_all_sour
};

static int list_155_7_arguments[] = {
  -str_printc, -str_print_C_source_c
};

static int list_161_7_arguments[] = {
  -str_static, -str_create_a_statica
};

static int list_164_7_arguments[] = {
  -str_prettyprint, -str_do_not_compile_j
};

static int list_254_1_arguments[] = {
  -str_runtimebuiltins, -str_runtimedebugger, -str_runtimeinterpret, -str_runtimelinker, -str_runtimememory, -str_runtimeprofiler
};

static int sequence_585_14_arguments[] = {
  -chr_36, -chr_33, -chr_38, -chr_34, -chr_39
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_STRING_8, 6, {.str_8 = "cygwin"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_STRING_8, 4, {.str_8 = ".dll"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_STRING_8, 4, {.str_8 = ".so."}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_STRING_8, 4, {.str_8 = ".exe"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
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
  {FLT_LIST, 11, {.arguments = list_66_1_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_STRING_8, 5, {.str_8 = "tuple"}},
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__is_a_builtin_function_name}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_STRING_8, 3, {.str_8 = "std"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_STRING_8, 4, {.str_8 = "std-"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_INCLUDE_PATH"}},
  {FLT_STRING_8, 13, {.str_8 = "/share/funky-"}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_STRING_8, 6, {.str_8 = "fkyrun"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_run}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_STRING_8, 31, {.str_8 = "Missing command line arguments!"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_STRING_8, 742, {.str_8 = "Copyright (C) 2024 by\012Dipl.-Ing. Michael Niederle\012\012This program is free software; you can redistribute it and/or modify\012it under the terms of the GNU General Public License, version 2, or\012(at your option) version 3.\012\012This program is distributed in the hope that it will be useful,\012but WITHOUT ANY WARRANTY; without even the implied warranty of\012MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the\012GNU General Public License for more details.\012\012For details of the GNU General Public License see the accompanying\012files GPLv2.txt and GLPv3.txt or\012http://www.gnu.org/licenses/gpl-2.0.html\012http://www.gnu.org/licenses/gpl-3.0.html\012or write to the\012Free Software Foundation, Inc.,\01251 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.\012"}},
  {FLT_STRING_8, 8, {.str_8 = "filename"}},
  {FLT_STRING_8, 45, {.str_8 = "a source code file with the extension \042.fky\042\012"}},
  {FLT_STRING_8, 5, {.str_8 = "brief"}},
  {FLT_STRING_8, 26, {.str_8 = "show brief error messages\012"}},
  {FLT_LIST, 2, {.arguments = list_146_7_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "verbose"}},
  {FLT_STRING_8, 52, {.str_8 = "output detailed information about the build process\012"}},
  {FLT_LIST, 2, {.arguments = list_149_7_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "rebuild"}},
  {FLT_STRING_8, 25, {.str_8 = "rebuild all source files\012"}},
  {FLT_LIST, 2, {.arguments = list_152_7_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "print-c"}},
  {FLT_STRING_8, 40, {.str_8 = "print C source code for a single module\012"}},
  {FLT_LIST, 2, {.arguments = list_155_7_arguments}},
  {FLT_STRING_8, 13, {.str_8 = "module-prefix"}},
  {FLT_STRING_8, 54, {.str_8 = "needed to compile a single file within a subdirectory\012"}},
  {FLT_STRING_8, 6, {.str_8 = "static"}},
  {FLT_STRING_8, 38, {.str_8 = "create a statically linked executable\012"}},
  {FLT_LIST, 2, {.arguments = list_161_7_arguments}},
  {FLT_STRING_8, 12, {.str_8 = "pretty-print"}},
  {FLT_STRING_8, 50, {.str_8 = "do not compile; just pretty print the source file\012"}},
  {FLT_LIST, 2, {.arguments = list_164_7_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_LIBRARY_PATH"}},
  {FLT_STRING_8, 4, {.str_8 = "/lib"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_input_filename}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_STRING_8, 4, {.str_8 = ".fky"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_print_c}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_pretty_print}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_build_executable}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_STRING_8, 21, {.str_8 = "creating executable \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_modules}},
  {FLT_STRING_8, 2, {.str_8 = ".o"}},
  {FLT_STRING_8, 2, {.str_8 = "-L"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "-static"}},
  {FLT_STRING_8, 14, {.str_8 = "-static-libgcc"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_STRING_8, 3, {.str_8 = "-lm"}},
  {FLT_STRING_8, 2, {.str_8 = "-o"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_STRING_8, 9, {.str_8 = "-l:libfky"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_do_run}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_STRING_8, 5, {.str_8 = "done\012"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/builtins"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/debugger"}},
  {FLT_STRING_8, 19, {.str_8 = "runtime/interpreter"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/linker"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/memory"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/profiler"}},
  {FLT_LIST, 6, {.arguments = list_254_1_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_build_library}},
  {FLT_STRING_8, 8, {.str_8 = "/VERSION"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_modules}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "libfky-"}},
  {FLT_STRING_8, 2, {.str_8 = ".a"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_STRING_8, 25, {.str_8 = "creating static library \042"}},
  {FLT_STRING_8, 3, {.str_8 = "rcs"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_STRING_8, 26, {.str_8 = "creating dynamic library \042"}},
  {FLT_STRING_8, 7, {.str_8 = "-shared"}},
  {FLT_STRING_8, 19, {.str_8 = "-Wl,-soname,libfky-"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_find_newest_timestamp}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_entries}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_DIRECTORY}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_REGULAR_FILE}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_compile}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_STRING_8, 10, {.str_8 = "-l:libfky-"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_load_or_create_c_sources}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_STRING_8, 2, {.str_8 = ".c"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_STRING_8, 12, {.str_8 = "Input file \042"}},
  {FLT_STRING_8, 17, {.str_8 = "\042 does not exist!"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_STRING_8, 11, {.str_8 = "compiling \042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_c_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_maybe_compile}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_c_compile}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_compile_c_file}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_STRING_8, 2, {.str_8 = "-I"}},
  {FLT_STRING_8, 8, {.str_8 = "-DNDEBUG"}},
  {FLT_STRING_8, 2, {.str_8 = "-c"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_cc}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_ar}},
  {FLT_STRING_8, 2, {.str_8 = "ar"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_extract_required}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_STRING_8, 11, {.str_8 = "/// require"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_POSITIVE_INT64, 0, {.value = 12}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_load_lines}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_STRING_8, 19, {.str_8 = "Empty source file \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042!"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_STRING_8, 39, {.str_8 = "Missing trailing newline character in \042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__syntax_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_node_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_SEQUENCE, 5, {.arguments = sequence_585_14_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_POSITIVE_INT64, 0, {.value = 50}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_display_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_line_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_show_brief_error_messages}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_STRING_8, 2, {.str_8 = ": "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}},
  {FLT_STRING_8, 9, {.str_8 = " IN LINE "}},
  {FLT_STRING_8, 9, {.str_8 = " OF FILE "}},
  {FLT_STRING_8, 2, {.str_8 = "\012\012"}},
  {FLT_STRING_8, 2, {.str_8 = "^\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_do_show_brief_error_messages}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_STRING_8, 9, {.str_8 = " IN FILE "}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(46, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DLL_VERSION\000", NULL,
    {.const_idx = -num_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OS\000", NULL,
    {.position = POS(56, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(56, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(57, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "DLL_EXTENSION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(55, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "EXE_EXTENSION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(67, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "builtin_functions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(81, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_builtin_function_name\000funky", NULL,
    {.const_idx = -func_funky__is_a_builtin_function_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_38_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_4_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(90, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(92, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(96, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(96, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(97, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(98, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "character_from_name\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_character_names\000", NULL,
    {.position = POS(100, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(104, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PREFIX\000", NULL,
    {.position = POS(105, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "include_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(103, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(107, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(107, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(107, 10)}
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
    {.position = POS(109, 24)}
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
    "do_show_brief_error_messages\000", NULL
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
    "module_prefix\000funky", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_build_static\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_pretty_print\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "command_line_arguments\000", NULL,
    {.position = POS(118, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(118, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(118, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(123, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(144, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VALUED_OPTION\000", NULL,
    {.position = POS(159, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_parameters\000", NULL,
    {.position = POS(121, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "library_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(173, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(174, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(173, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(176, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(181, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(178, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(185, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(185, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "compile_module\000", NULL,
    {.position = POS(187, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(189, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(195, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_module_name\000", NULL,
    {.position = POS(195, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extract_current_filename_and_module_name\000", NULL,
    {.position = POS(194, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_module\000", NULL,
    {.position = POS(196, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_to_source\000", NULL,
    {.position = POS(197, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_13_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_22_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_4_newest_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(207, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_4_exe_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_10_exe_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(209, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(213, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(214, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(215, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(215, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(217, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(223, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(220, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_8_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(226, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(248, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exec\000", NULL,
    {.position = POS(248, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_4_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_4_version_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_7_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(277, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(278, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(279, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "280_4_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_4_object_files\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "289_8_a_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "290_14_a_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_8_so_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_14_so_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(313, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_4_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_26_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(333, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(338, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(338, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(341, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(327, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_20_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_15_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "directory\000", NULL,
    {.position = POS(346, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_error_message_string\000", NULL,
    {.position = POS(348, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(348, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(349, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(349, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_4_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_8_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000std", NULL,
    {.position = POS(353, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_8_fullname\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(355, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIRECTORY\000", NULL,
    {.position = POS(356, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REGULAR_FILE\000", NULL,
    {.position = POS(364, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(355, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_4_fky_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "375_4_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_4_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_4_object_files_handled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(377, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_4_libraries_handled\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_6_files_to_compile\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_10_fky_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL,
    {.position = POS(398, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(398, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(397, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_18_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_22_library_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(379, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_4_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_8_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_8_c_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_14_fky_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_14_c_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(442, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "453_46_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_12_basename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(457, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "save\000", NULL,
    {.position = POS(457, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_11_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_44_fky_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple_or_error\000", NULL,
    {.position = POS(466, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_4_compiled_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_15_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_29_c_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "473_8_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_8_obj_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_14_obj_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "517_19_c_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CC\000", NULL,
    {.position = POS(530, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "530_37_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(530, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(532, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_39_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_35_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "543_4_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "544_4_required\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "548_8_module_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(549, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "while\000", NULL,
    {.position = POS(545, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "556_15_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "557_10_source\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_source_into_lines\000", NULL,
    {.position = POS(566, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "syntax_error\000funky", NULL,
    {.const_idx = -func_funky__syntax_error}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "573_5_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "575_7_column\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(577, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "577_8_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(577, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(578, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(578, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(578, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(578, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(585, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000funky", NULL,
    {.position = POS(596, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(596, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "598_17_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_category_of\000", NULL,
    {.position = POS(601, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000", NULL,
    {.position = POS(601, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(604, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "608_4_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(608, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_details_of\000", NULL,
    {.position = POS(609, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "609_28_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "609_38_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "609_44_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_13_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_21_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "613_8_line_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(613, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(621, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(624, 15)}
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
extern FUNKY_MODULE module__pretty_print;

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
  &module__generate_tabular_code,
  &module__pretty_print
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  16, // number of required modules
  2, // number of defined namespaces
  2, // number of used namespaces
  262, // number of constants
  194, // number of variables
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
