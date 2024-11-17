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
  list_65_0 = -23,
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
  str_verbose = -54,
  str_output_detailed = -55,
  list_141_0 = -56,
  str_rebuild = -57,
  str_rebuild_all_sour = -58,
  list_144_0 = -59,
  str_printc = -60,
  str_print_C_source_c = -61,
  list_147_0 = -62,
  str_static = -63,
  str_create_a_statica = -64,
  list_150_0 = -65,
  str_FUNKY_LIBRARY_PA = -66,
  str_lib = -67,
  lambda_input_filename = -68,
  string_4 = -69,
  str_fky = -70,
  lambda_12 = -71,
  func_print_c = -72,
  func_build_executable = -73,
  lambda_13 = -74,
  lambda_14 = -75,
  lambda_15 = -76,
  lambda_16 = -77,
  lambda_17 = -78,
  str_creating_executa = -79,
  string_5 = -80,
  lambda_modules = -81,
  str_o = -82,
  str_L = -83,
  lambda_do_build_static = -84,
  str_static_2 = -85,
  str_staticlibgcc = -86,
  lambda_18 = -87,
  str_lm = -88,
  str_o_2 = -89,
  lambda_19 = -90,
  str_llibfky = -91,
  lambda_2_do_run = -92,
  num_2 = -93,
  lambda_20 = -94,
  lambda_21 = -95,
  str_done = -96,
  str_runtimebuiltins = -97,
  str_runtimedebugger = -98,
  str_runtimeinterpret = -99,
  str_runtimelinker = -100,
  str_runtimememory = -101,
  str_runtimeprofiler = -102,
  list_232_0 = -103,
  func_build_library = -104,
  str_VERSION = -105,
  lambda_22 = -106,
  lambda_23 = -107,
  lambda_2_modules = -108,
  lambda_2_do_build_static = -109,
  str_libfky = -110,
  str_a = -111,
  lambda_24 = -112,
  lambda_25 = -113,
  lambda_26 = -114,
  lambda_27 = -115,
  lambda_28 = -116,
  str_creating_static = -117,
  str_rcs = -118,
  lambda_29 = -119,
  lambda_30 = -120,
  lambda_31 = -121,
  lambda_32 = -122,
  lambda_33 = -123,
  lambda_34 = -124,
  str_creating_dynamic = -125,
  str_shared = -126,
  str_Wlsonamelibfky = -127,
  lambda_35 = -128,
  func_find_newest_timestamp = -129,
  lambda_36 = -130,
  lambda_timestamp_is_undefined = -131,
  lambda_37 = -132,
  lambda_38 = -133,
  lambda_39 = -134,
  lambda_40 = -135,
  lambda_41 = -136,
  func_collect_entries = -137,
  lambda_42 = -138,
  lambda_43 = -139,
  string_6 = -140,
  lambda_DIRECTORY = -141,
  chr_46 = -142,
  lambda_44 = -143,
  lambda_REGULAR_FILE = -144,
  lambda_45 = -145,
  lambda_46 = -146,
  func_compile = -147,
  lambda_loop = -148,
  lambda_47 = -149,
  lambda_48 = -150,
  lambda_49 = -151,
  lambda_50 = -152,
  lambda_51 = -153,
  lambda_52 = -154,
  lambda_53 = -155,
  lambda_54 = -156,
  lambda_55 = -157,
  str_llibfky_2 = -158,
  lambda_56 = -159,
  lambda_57 = -160,
  func_load_or_create_c_sources = -161,
  lambda_58 = -162,
  str_c = -163,
  lambda_59 = -164,
  str_Input_file = -165,
  str__does_not_exist = -166,
  lambda_60 = -167,
  lambda_61 = -168,
  lambda_62 = -169,
  lambda_63 = -170,
  str_compiling = -171,
  lambda_64 = -172,
  lambda_65 = -173,
  lambda_66 = -174,
  lambda_c_timestamp_is_undefined = -175,
  lambda_67 = -176,
  func_maybe_compile = -177,
  lambda_68 = -178,
  func_c_compile = -179,
  lambda_69 = -180,
  lambda_70 = -181,
  lambda_71 = -182,
  lambda_72 = -183,
  lambda_73 = -184,
  lambda_74 = -185,
  lambda_75 = -186,
  func_compile_c_file = -187,
  lambda_76 = -188,
  str_I = -189,
  str_DNDEBUG = -190,
  str_c_2 = -191,
  func_cc = -192,
  lambda_77 = -193,
  func_ar = -194,
  str_ar = -195,
  lambda_78 = -196,
  func_extract_required = -197,
  lambda_79 = -198,
  str__require = -199,
  lambda_80 = -200,
  num_12 = -201,
  chr_10 = -202,
  lambda_81 = -203,
  lambda_82 = -204,
  lambda_83 = -205,
  func_load_lines = -206,
  lambda_84 = -207,
  lambda_85 = -208,
  str_Empty_source_fil = -209,
  string_7 = -210,
  lambda_86 = -211,
  lambda_87 = -212,
  str_Missing_trailing = -213,
  func_funky__syntax_error = -214,
  lambda_node_is_defined = -215,
  lambda_88 = -216,
  lambda_89 = -217,
  chr_36 = -218,
  chr_33 = -219,
  chr_38 = -220,
  chr_34 = -221,
  chr_39 = -222,
  sequence_563_1 = -223,
  lambda_90 = -224,
  lambda_91 = -225,
  lambda_92 = -226,
  lambda_93 = -227,
  lambda_94 = -228,
  func_handle_error = -229,
  lambda_95 = -230,
  lambda_96 = -231,
  lambda_97 = -232,
  num_50 = -233,
  func_display_error = -234,
  lambda_line_is_defined = -235,
  str_ERROR = -236,
  str__IN_LINE = -237,
  str__OF_FILE = -238,
  string_8 = -239,
  string_9 = -240,
  lambda_98 = -241,
  str__IN_FILE = -242,
  string_10 = -243
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
  var_88_37_identifier, // dynamic
  var_89_1_namespace, // dynamic
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
  var_library_path, // dynamic
  var_std__not, // extern
  var_append, // extern
  var_update_if, // extern
  var_has_suffix, // extern
  var_base_directory, // extern
  var_until, // extern
  var_compile_module, // extern
  var_print, // extern
  var_180_10_modules, // dynamic
  var_180_19_libraries, // dynamic
  var_182_1_newest_timestamp, // dynamic
  var_without_suffix, // extern
  var_183_1_exe_filename, // dynamic
  var_187_7_exe_info, // dynamic
  var_stat, // extern
  var_is_undefined, // extern
  var_is_an_error, // extern
  var_modification_time_of, // extern
  var_std__less, // extern
  var_eprint, // extern
  var_first, // extern
  var_map, // extern
  var_203_1_arguments, // dynamic
  var_push, // extern
  var_range, // extern
  var_exec, // extern
  var_248_1_newest_timestamp, // dynamic
  var_249_1_version_filename, // dynamic
  var_251_4_version, // dynamic
  var_load, // extern
  var_trim, // extern
  var_put, // extern
  var_258_1_basename, // dynamic
  var_259_1_object_files, // dynamic
  var_267_1_a_filename, // dynamic
  var_268_7_a_info, // dynamic
  var_280_1_so_filename, // dynamic
  var_281_7_so_info, // dynamic
  var_empty_list, // extern
  var_304_1_newest_timestamp, // dynamic
  var_307_19_timestamp, // dynamic
  var_break, // extern
  var_is_defined, // extern
  var_std__and, // extern
  var_next, // extern
  var_for_each, // extern
  var_323_19_path, // dynamic
  var_324_12_entries, // dynamic
  var_directory, // extern
  var_to_error_message_string, // extern
  var_eprintln, // extern
  var_EXIT_FAILURE, // extern
  var_exit, // extern
  var_328_1_filenames, // dynamic
  var_331_1_name, // dynamic
  var_std__name_of, // extern
  var_332_1_fullname, // dynamic
  var_type_of, // extern
  var_DIRECTORY, // extern
  var_REGULAR_FILE, // extern
  var_case, // extern
  var_352_1_fky_filenames, // dynamic
  var_353_1_modules, // dynamic
  var_354_1_libraries, // dynamic
  var_355_1_object_files_handled, // dynamic
  var_empty_hash_set, // extern
  var_356_1_libraries_handled, // dynamic
  var_358_1_files_to_compile, // dynamic
  var_360_3_fky_filename, // dynamic
  var_true, // extern
  var_merge, // extern
  var_empty_insert_order_set, // extern
  var_map_reduce, // extern
  var_380_3_filename, // dynamic
  var_386_1_library_name, // dynamic
  var_loop, // extern
  var_402_1_modules, // dynamic
  var_404_3_fky_filename, // dynamic
  var_406_1_c_filename, // dynamic
  var_407_7_fky_info, // dynamic
  var_410_7_c_info, // dynamic
  var_tuple, // extern
  var_431_35_c_source, // dynamic
  var_432_1_basename, // dynamic
  var_to_utf8, // extern
  var_save, // extern
  var_441_8_filename, // dynamic
  var_441_41_fky_lines, // dynamic
  var_tuple_or_error, // extern
  var_447_1_compiled_modules, // dynamic
  var_450_8_fky_filename, // dynamic
  var_450_22_c_timestamp, // dynamic
  var_451_1_basename, // dynamic
  var_452_1_obj_filename, // dynamic
  var_453_7_obj_info, // dynamic
  var_495_18_c_filename, // dynamic
  var_CC, // extern
  var_508_34_err, // dynamic
  var_call, // extern
  var_from_utf8, // extern
  var_514_36_err, // dynamic
  var_520_32_c_source, // dynamic
  var_521_1_path, // dynamic
  var_522_1_required, // dynamic
  var_526_1_module_name, // dynamic
  var_is_not_empty, // extern
  var_while, // extern
  var_534_14_filename, // dynamic
  var_535_7_source, // dynamic
  var_cond, // extern
  var_split_source_into_lines, // extern
  var_funky__syntax_error, // initialized
  var_551_0_node, // dynamic
  var_553_4_column, // dynamic
  var_source_group_of, // extern
  var_555_1_line, // dynamic
  var_line_text_of, // extern
  var_length_of, // extern
  var_std__plus, // extern
  var_source_position_of, // extern
  var_std__minus, // extern
  var_std__sequence, // extern
  var_current_filename, // extern
  var_funky__SYNTAX_ERROR, // extern
  var_error, // extern
  var_576_16_obj, // dynamic
  var_error_category_of, // extern
  var_SYNTAX_ERROR, // extern
  var_debug__dump_object, // extern
  var_586_1_message, // dynamic
  var_error_message_text_of, // extern
  var_error_details_of, // extern
  var_587_25_filename, // dynamic
  var_587_35_line, // dynamic
  var_587_41_position, // dynamic
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
  POS(56, 8),
  POS(56, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // ".so.@(DLL_VERSION)"
  var_std__string, 2, str_so, var_DLL_VERSION, 1, LOCAL(1),
  //  ".so.@(DLL_VERSION)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(57, 8),
  POS(57, 7)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ".exe"
  LET, 1, str_exe, TAIL_CALL,
  POS(62, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(63, 7)
};

static TAB_NUM t_func_funky__is_a_builtin_function_name[] = {
  1, // locals
  1, // parameters
  var_88_37_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_88_37_identifier, chr_58, 1, var_89_1_namespace,
  // is_empty
  var_is_empty, 1, var_89_1_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(89, 3),
  POS(91, 15),
  POS(90, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // builtin_functions(identifier)
  var_builtin_functions, 1, var_88_37_identifier, 1, LOCAL(1),
  //  builtin_functions(identifier)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(92, 8),
  POS(92, 7)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__equal, 2, var_89_1_namespace, str_std, 1, LOCAL(1),
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__or, 2, LOCAL(1), lambda_7, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_9, TAIL_CALL,
  POS(95, 9),
  POS(95, 9),
  POS(94, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // namespace .has_prefix. "std-"
  var_has_prefix, 2, var_89_1_namespace, str_std_2, 1, LOCAL(1),
  // namespace .has_prefix. "std-"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(95, 31),
  POS(95, 31)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // identifier .behind. "::")
  var_behind, 2, var_88_37_identifier, string_3, 1, LOCAL(1),
  // builtin_functions(identifier .behind. "::")
  var_builtin_functions, 1, LOCAL(1), 1, LOCAL(2),
  //  builtin_functions(identifier .behind. "::")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(96, 30),
  POS(96, 12),
  POS(96, 11)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(97, 11)
};

static TAB_NUM t_lambda_do_run[] = {
  1, // locals
  0, // parameters
  // is_empty: Error "Missing command line arguments!"
  var_is_empty, 1, var_command_line_arguments, 1, LOCAL(1),
  // on command_line_arguments.is_empty: Error "Missing command line arguments!"
  var_on, 2, LOCAL(1), lambda_10, 0,
  // command_line_arguments(1) false false false false
  var_command_line_arguments, 1, num_1, 1, LOCAL(1),
  // -> command_line_arguments(1) false false false false
  LET, 5, LOCAL(1), var_false, var_false, var_false, var_false, TAIL_CALL,
  POS(113, 31),
  POS(113, 5),
  POS(114, 8),
  POS(114, 5)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // Error "Missing command line arguments!"
  var_Error, 1, str_Missing_command, TAIL_CALL,
  POS(113, 41)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 2, var_COPYRIGHT, str_Copyright_C, 1, LOCAL(1),
  // list
  var_list, 3, var_MANDATORY_PARAMETER, str_filename, str_a_source_code_fi, 1, LOCAL(2),
  // program_parameters!
  var_program_parameters, 6, LOCAL(1), LOCAL(2), list_141_0, list_144_0, list_147_0, list_150_0, IO_TAIL_CALL,
  POS(117, 7),
  POS(138, 7),
  POS(116, 5)
};

static TAB_NUM t_lambda_input_filename[] = {
  1, // locals
  0, // parameters
  // append("./" input_filename)
  var_append, 2, string_4, var_input_filename, 1, LOCAL(1),
  //  append("./" input_filename)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(160, 22),
  POS(160, 21)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // if!
  var_if, 3, var_do_print_c, func_print_c, func_build_executable, IO_TAIL_CALL,
  POS(164, 5)
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
  POS(171, 3),
  POS(172, 3),
  POS(173, 3),
  POS(174, 3),
  POS(175, 3)
};

static TAB_NUM t_func_build_executable[] = {
  1, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // compile! $modules $libraries input_filename
  func_compile, 1, var_input_filename, IO_CALL(2), var_180_10_modules, var_180_19_libraries,
  // c_compile! &modules
  func_c_compile, 1, var_180_10_modules, IO_CALL(1), var_180_10_modules,
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, var_180_10_modules, 1, var_182_1_newest_timestamp,
  // input_filename .without_suffix. ".fky"
  var_without_suffix, 2, var_input_filename, str_fky, 1, LOCAL(1),
  // $exe_filename
  var_append, 2, LOCAL(1), var_EXE_EXTENSION, 1, var_183_1_exe_filename,
  // stat! $exe_info exe_filename
  var_stat, 1, var_183_1_exe_filename, IO_CALL(1), var_187_7_exe_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_13, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_16, IO_CALL(0),
  // if
  var_if, 3, var_do_run, lambda_2_do_run, lambda_20, IO_TAIL_CALL,
  POS(179, 3),
  POS(180, 3),
  POS(181, 3),
  POS(182, 3),
  POS(185, 7),
  POS(183, 3),
  POS(187, 3),
  POS(189, 7),
  POS(188, 3),
  POS(224, 3)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_182_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_14, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(191, 24),
  POS(189, 7),
  POS(191, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_187_7_exe_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // exe_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(192, 16),
  POS(189, 7),
  POS(192, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // modification_time_of(exe_info)
  var_modification_time_of, 1, var_187_7_exe_info, 1, LOCAL(1),
  // modification_time_of(exe_info)
  var_std__less, 2, LOCAL(1), var_182_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(exe_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(193, 26),
  POS(193, 26),
  POS(193, 7)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_17, IO_CALL(0),
  // $object_files
  var_map, 2, var_180_10_modules, lambda_modules, 1, LOCAL(1),
  // $arguments cc_options
  LET, 1, list_65_0, 1, var_203_1_arguments,
  // push &arguments "-L"
  var_push, 2, var_203_1_arguments, str_L, 1, var_203_1_arguments,
  // push &arguments library_path
  var_push, 2, var_203_1_arguments, var_library_path, 1, var_203_1_arguments,
  // append &arguments object_files
  var_append, 2, var_203_1_arguments, LOCAL(1), 1, var_203_1_arguments,
  // if
  var_if, 3, var_do_build_static, lambda_do_build_static, lambda_19, IO_TAIL_CALL,
  POS(195, 7),
  POS(197, 7),
  POS(203, 7),
  POS(204, 7),
  POS(205, 7),
  POS(206, 7),
  POS(207, 7)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_executa, var_183_1_exe_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(195, 30),
  POS(195, 22)
};

static TAB_NUM t_lambda_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 199_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(201, 15),
  POS(201, 15),
  POS(200, 13)
};

static TAB_NUM t_lambda_do_build_static[] = {
  1, // locals
  0, // parameters
  // push &arguments "-static"
  var_push, 2, var_203_1_arguments, str_static_2, 1, var_203_1_arguments,
  // push &arguments "-static-libgcc"
  var_push, 2, var_203_1_arguments, str_staticlibgcc, 1, var_203_1_arguments,
  // append &arguments libraries
  var_append, 2, var_203_1_arguments, var_180_19_libraries, 1, var_203_1_arguments,
  // map(runtime_objects: (name) append name ".o")
  var_map, 2, list_232_0, lambda_18, 1, LOCAL(1),
  // append &arguments map(runtime_objects: (name) append name ".o")
  var_append, 2, var_203_1_arguments, LOCAL(1), 1, var_203_1_arguments,
  // push &arguments "-lm"
  var_push, 2, var_203_1_arguments, str_lm, 1, var_203_1_arguments,
  // push &arguments "-o"
  var_push, 2, var_203_1_arguments, str_o_2, 1, var_203_1_arguments,
  // push &arguments exe_filename
  var_push, 2, var_203_1_arguments, var_183_1_exe_filename, 1, var_203_1_arguments,
  // cc! arguments
  func_cc, 1, var_203_1_arguments, IO_TAIL_CALL,
  POS(209, 11),
  POS(210, 11),
  POS(211, 11),
  POS(212, 29),
  POS(212, 11),
  POS(213, 11),
  POS(214, 11),
  POS(215, 11),
  POS(216, 11)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 212_40_name
  // append name ".o")
  var_append, 2, LOCAL(1), str_o, TAIL_CALL,
  POS(212, 57)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // append &arguments libraries
  var_append, 2, var_203_1_arguments, var_180_19_libraries, 1, var_203_1_arguments,
  // "-l:libfky@(DLL_EXTENSION)"
  var_std__string, 2, str_llibfky, var_DLL_EXTENSION, 1, LOCAL(1),
  // push &arguments "-l:libfky@(DLL_EXTENSION)"
  var_push, 2, var_203_1_arguments, LOCAL(1), 1, var_203_1_arguments,
  // push &arguments "-lm"
  var_push, 2, var_203_1_arguments, str_lm, 1, var_203_1_arguments,
  // push &arguments "-o"
  var_push, 2, var_203_1_arguments, str_o_2, 1, var_203_1_arguments,
  // push &arguments exe_filename
  var_push, 2, var_203_1_arguments, var_183_1_exe_filename, 1, var_203_1_arguments,
  // cc! arguments
  func_cc, 1, var_203_1_arguments, IO_TAIL_CALL,
  POS(218, 11),
  POS(219, 27),
  POS(219, 11),
  POS(220, 11),
  POS(221, 11),
  POS(222, 11),
  POS(223, 11)
};

static TAB_NUM t_lambda_2_do_run[] = {
  1, // locals
  0, // parameters
  // range(command_line_arguments 2 -1)
  var_range, 3, var_command_line_arguments, num_2, minus_num_1, 1, LOCAL(1),
  // exec! exe_filename range(command_line_arguments 2 -1)
  var_exec, 2, var_183_1_exe_filename, LOCAL(1), IO_TAIL_CALL,
  POS(226, 26),
  POS(226, 7)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_21, IO_TAIL_CALL,
  POS(228, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(229, 9)
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
  func_find_newest_timestamp, 1, LOCAL(3), 1, var_248_1_newest_timestamp,
  // $version_filename append(input_filename "/VERSION")
  var_append, 2, var_input_filename, str_VERSION, 1, var_249_1_version_filename,
  // stat! $version_info version_filename
  var_stat, 1, var_249_1_version_filename, IO_CALL(1), LOCAL(4),
  // is_an_error
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // if $version
  var_if, 3, LOCAL(1), lambda_22, lambda_23, IO_CALL(1), var_251_4_version,
  // $basename truncate_until(input_filename '/' -1)
  var_truncate_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_258_1_basename,
  // $object_files
  var_map, 2, LOCAL(3), lambda_2_modules, 1, var_259_1_object_files,
  // if
  var_if, 3, var_do_build_static, lambda_2_do_build_static, lambda_29, IO_TAIL_CALL,
  POS(242, 3),
  POS(243, 3),
  POS(244, 3),
  POS(245, 3),
  POS(246, 3),
  POS(247, 3),
  POS(248, 3),
  POS(249, 3),
  POS(250, 3),
  POS(252, 18),
  POS(251, 3),
  POS(258, 3),
  POS(259, 3),
  POS(265, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(253, 7)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // load! !version version_filename
  var_load, 1, var_249_1_version_filename, IO_CALL(1), var_251_4_version,
  // trim &version
  var_trim, 1, var_251_4_version, 1, var_251_4_version,
  // put(version '-')
  var_put, 2, var_251_4_version, chr_45, 1, LOCAL(1),
  // -> put(version '-')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(255, 7),
  POS(256, 7),
  POS(257, 10),
  POS(257, 7)
};

static TAB_NUM t_lambda_2_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 261_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(263, 11),
  POS(263, 11),
  POS(262, 9)
};

static TAB_NUM t_lambda_2_do_build_static[] = {
  1, // locals
  0, // parameters
  // $a_filename "libfky-@(basename).a"
  var_std__string, 3, str_libfky, var_258_1_basename, str_a, 1, var_267_1_a_filename,
  // stat! $a_info a_filename
  var_stat, 1, var_267_1_a_filename, IO_CALL(1), var_268_7_a_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_24, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_27, IO_TAIL_CALL,
  POS(267, 7),
  POS(268, 7),
  POS(270, 11),
  POS(269, 7)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_248_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(272, 28),
  POS(270, 11),
  POS(272, 11)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_268_7_a_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  // a_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(273, 18),
  POS(270, 11),
  POS(273, 11)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // modification_time_of(a_info)
  var_modification_time_of, 1, var_268_7_a_info, 1, LOCAL(1),
  // modification_time_of(a_info)
  var_std__less, 2, LOCAL(1), var_248_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(a_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(274, 30),
  POS(274, 30),
  POS(274, 11)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_28, IO_CALL(0),
  // list("rcs" a_filename) object_files)
  var_list, 2, str_rcs, var_267_1_a_filename, 1, LOCAL(1),
  // append(list("rcs" a_filename) object_files)
  var_append, 2, LOCAL(1), var_259_1_object_files, 1, LOCAL(2),
  // ar! append(list("rcs" a_filename) object_files)
  func_ar, 1, LOCAL(2), IO_TAIL_CALL,
  POS(276, 11),
  POS(278, 22),
  POS(278, 15),
  POS(278, 11)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_static, var_267_1_a_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(276, 34),
  POS(276, 26)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // $so_filename "libfky-@(basename)@(version)@(DLL_EXTENSION)"
  var_std__string, 4, str_libfky, var_258_1_basename, var_251_4_version, var_DLL_EXTENSION, 1, var_280_1_so_filename,
  // stat! $so_info so_filename
  var_stat, 1, var_280_1_so_filename, IO_CALL(1), var_281_7_so_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_30, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_33, IO_CALL(0),
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_35, IO_TAIL_CALL,
  POS(280, 7),
  POS(281, 7),
  POS(283, 11),
  POS(282, 7),
  POS(299, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_248_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(285, 28),
  POS(283, 11),
  POS(285, 11)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_281_7_so_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // so_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(286, 19),
  POS(283, 11),
  POS(286, 11)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // modification_time_of(so_info)
  var_modification_time_of, 1, var_281_7_so_info, 1, LOCAL(1),
  // modification_time_of(so_info)
  var_std__less, 2, LOCAL(1), var_248_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(so_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(287, 30),
  POS(287, 30),
  POS(287, 11)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_34, IO_CALL(0),
  // $arguments empty_list
  LET, 1, var_empty_list, 1, LOCAL(2),
  // push &arguments "-shared"
  var_push, 2, LOCAL(2), str_shared, 1, LOCAL(2),
  // "-Wl,-soname,libfky-@(basename)@(DLL_EXTENSION)"
  var_std__string, 3, str_Wlsonamelibfky, var_258_1_basename, var_DLL_EXTENSION, 1, LOCAL(1),
  // push &arguments
  var_push, 2, LOCAL(2), LOCAL(1), 1, LOCAL(2),
  // append &arguments object_files
  var_append, 2, LOCAL(2), var_259_1_object_files, 1, LOCAL(2),
  // push &arguments "-o"
  var_push, 2, LOCAL(2), str_o_2, 1, LOCAL(2),
  // push &arguments so_filename
  var_push, 2, LOCAL(2), var_280_1_so_filename, 1, LOCAL(2),
  // cc! arguments
  func_cc, 1, LOCAL(2), IO_TAIL_CALL,
  POS(289, 11),
  POS(291, 11),
  POS(292, 11),
  POS(294, 13),
  POS(293, 11),
  POS(295, 11),
  POS(296, 11),
  POS(297, 11),
  POS(298, 11)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_dynamic, var_280_1_so_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(289, 34),
  POS(289, 26)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(300, 9)
};

static TAB_NUM t_func_find_newest_timestamp[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 303_25_modules
  // $newest_timestamp undefined
  LET, 1, var_undefined, 1, var_304_1_newest_timestamp,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_36, lambda_41, IO_TAIL_CALL,
  POS(304, 3),
  POS(305, 3)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 306_3_module
  // module $_filename $timestamp
  LOCAL(2), 0, 2, LOCAL(1), var_307_19_timestamp,
  // is_undefined:
  var_is_undefined, 1, var_307_19_timestamp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timestamp_is_undefined, lambda_37, IO_TAIL_CALL,
  POS(307, 7),
  POS(309, 19),
  POS(308, 7)
};

static TAB_NUM t_lambda_timestamp_is_undefined[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp undefined
  LET, 1, var_undefined, 1, var_304_1_newest_timestamp,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(310, 11),
  POS(311, 11)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_304_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_38, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, var_next, IO_TAIL_CALL,
  POS(315, 32),
  POS(314, 15),
  POS(313, 11)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // is_defined && timestamp > newest_timestamp
  var_is_defined, 1, var_307_19_timestamp, 1, LOCAL(1),
  // is_defined && timestamp > newest_timestamp
  var_std__and, 2, LOCAL(1), lambda_39, 1, LOCAL(2),
  // timestamp.is_defined && timestamp > newest_timestamp
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(316, 25),
  POS(316, 25),
  POS(316, 15)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // newest_timestamp
  var_std__less, 2, var_304_1_newest_timestamp, var_307_19_timestamp, 1, LOCAL(1),
  // timestamp > newest_timestamp
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(316, 51),
  POS(316, 39)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp timestamp
  LET, 1, var_307_19_timestamp, 1, var_304_1_newest_timestamp,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(318, 15),
  POS(319, 15)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  newest_timestamp
  LET, 1, var_304_1_newest_timestamp, TAIL_CALL,
  POS(321, 7)
};

static TAB_NUM t_func_collect_entries[] = {
  1, // locals
  1, // parameters
  var_323_19_path,
  // directory! $entries path
  var_directory, 1, var_323_19_path, IO_CALL(1), var_324_12_entries,
  // is_an_error:
  var_is_an_error, 1, var_324_12_entries, 1, LOCAL(1),
  // on entries.is_an_error:
  var_on, 2, LOCAL(1), lambda_42, IO_CALL(0),
  // $filenames empty_list
  LET, 1, var_empty_list, 1, var_328_1_filenames,
  // for_each entries
  var_for_each, 3, var_324_12_entries, lambda_43, lambda_46, IO_TAIL_CALL,
  POS(324, 3),
  POS(325, 14),
  POS(325, 3),
  POS(328, 3),
  POS(329, 3)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // to_error_message_string
  var_to_error_message_string, 1, var_324_12_entries, 1, LOCAL(1),
  // eprintln! entries.to_error_message_string
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(326, 23),
  POS(326, 5),
  POS(327, 5)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 330_3_entry
  // $name std::name_of(entry)
  var_std__name_of, 1, LOCAL(2), 1, var_331_1_name,
  // $fullname append(path "/" name)
  var_append, 3, var_323_19_path, string_6, var_331_1_name, 1, var_332_1_fullname,
  // type_of(entry)
  var_type_of, 1, LOCAL(2), 1, LOCAL(1),
  // case type_of(entry)
  var_case, 6, LOCAL(1), var_DIRECTORY, lambda_DIRECTORY, var_REGULAR_FILE, lambda_REGULAR_FILE, var_next, IO_TAIL_CALL,
  POS(331, 7),
  POS(332, 7),
  POS(333, 12),
  POS(333, 7)
};

static TAB_NUM t_lambda_DIRECTORY[] = {
  1, // locals
  0, // parameters
  // name .has_prefix. '.'
  var_has_prefix, 2, var_331_1_name, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_44, IO_TAIL_CALL,
  POS(336, 13),
  POS(335, 11)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // collect_entries! $more_filenames fullname
  func_collect_entries, 1, var_332_1_fullname, IO_CALL(1), LOCAL(1),
  // append &filenames more_filenames
  var_append, 2, var_328_1_filenames, LOCAL(1), 1, var_328_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(339, 15),
  POS(340, 15),
  POS(341, 15)
};

static TAB_NUM t_lambda_REGULAR_FILE[] = {
  1, // locals
  0, // parameters
  // name .has_suffix. ".fky":
  var_has_suffix, 2, var_331_1_name, str_fky, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, var_next, IO_TAIL_CALL,
  POS(344, 13),
  POS(343, 11)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // push &filenames fullname
  var_push, 2, var_328_1_filenames, var_332_1_fullname, 1, var_328_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(345, 15),
  POS(346, 15)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  filenames
  LET, 1, var_328_1_filenames, TAIL_CALL,
  POS(349, 7)
};

static TAB_NUM t_func_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 351_11_base_filename
  // $fky_filenames list(base_filename)
  var_list, 1, LOCAL(1), 1, var_352_1_fky_filenames,
  // $modules empty_list
  LET, 1, var_empty_list, 1, var_353_1_modules,
  // $libraries empty_list
  LET, 1, var_empty_list, 1, var_354_1_libraries,
  // $object_files_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_355_1_object_files_handled,
  // $libraries_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_356_1_libraries_handled,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(352, 3),
  POS(353, 3),
  POS(354, 3),
  POS(355, 3),
  POS(356, 3),
  POS(357, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // $files_to_compile empty_list
  LET, 1, var_empty_list, 1, var_358_1_files_to_compile,
  // for_each fky_filenames
  var_for_each, 3, var_352_1_fky_filenames, lambda_47, lambda_49, IO_TAIL_CALL,
  POS(358, 5),
  POS(359, 5)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  1, // parameters
  var_360_3_fky_filename,
  // object_files_handled(fky_filename)
  var_355_1_object_files_handled, 1, var_360_3_fky_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_48, IO_TAIL_CALL,
  POS(362, 11),
  POS(361, 9)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // object_files_handled(fky_filename) true
  var_355_1_object_files_handled, 2, var_360_3_fky_filename, var_true, 1, var_355_1_object_files_handled,
  // push &files_to_compile fky_filename
  var_push, 2, var_358_1_files_to_compile, var_360_3_fky_filename, 1, var_358_1_files_to_compile,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(365, 14),
  POS(366, 13),
  POS(367, 13)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_358_1_files_to_compile, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, IO_TAIL_CALL,
  POS(370, 28),
  POS(369, 9)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  modules libraries
  LET, 2, var_353_1_modules, var_354_1_libraries, TAIL_CALL,
  POS(371, 13)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // load_or_create_c_sources! $more_modules files_to_compile
  func_load_or_create_c_sources, 1, var_358_1_files_to_compile, IO_CALL(1), LOCAL(1),
  // handle_error! more_modules
  func_handle_error, 1, LOCAL(1), IO_CALL(0),
  // map_reduce $required
  var_map_reduce, 4, LOCAL(1), func_extract_required, var_merge, var_empty_insert_order_set, 1, LOCAL(2),
  // append &modules more_modules
  var_append, 2, var_353_1_modules, LOCAL(1), 1, var_353_1_modules,
  // !fky_filenames empty_list
  LET, 1, var_empty_list, 1, var_352_1_fky_filenames,
  // for_each required
  var_for_each, 3, LOCAL(2), lambda_52, var_next, IO_TAIL_CALL,
  POS(373, 13),
  POS(374, 13),
  POS(375, 13),
  POS(377, 13),
  POS(378, 13),
  POS(379, 13)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  1, // parameters
  var_380_3_filename,
  // filename(1) == '.':
  var_380_3_filename, 1, num_1, 1, LOCAL(1),
  // filename(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_53, lambda_54, IO_TAIL_CALL,
  POS(382, 19),
  POS(382, 19),
  POS(381, 17)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // "@(filename).fky"
  var_std__string, 2, var_380_3_filename, str_fky, 1, LOCAL(1),
  // push &fky_filenames "@(filename).fky"
  var_push, 2, var_352_1_fky_filenames, LOCAL(1), 1, var_352_1_fky_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(383, 41),
  POS(383, 21),
  POS(384, 21)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // $library_name filename .truncate_from. '/'
  var_truncate_from, 2, var_380_3_filename, chr_47, 1, var_386_1_library_name,
  // !library_name
  var_if, 3, var_do_build_static, lambda_55, lambda_56, 1, var_386_1_library_name,
  // libraries_handled(library_name)
  var_356_1_libraries_handled, 1, var_386_1_library_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_57, IO_TAIL_CALL,
  POS(386, 21),
  POS(387, 21),
  POS(393, 23),
  POS(392, 21)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name).a"
  var_std__string, 3, str_llibfky_2, var_386_1_library_name, str_a, 1, LOCAL(1),
  //  "-l:libfky-@(library_name).a"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(390, 28),
  POS(390, 27)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name)@(DLL_EXTENSION)"
  var_std__string, 3, str_llibfky_2, var_386_1_library_name, var_DLL_EXTENSION, 1, LOCAL(1),
  //  "-l:libfky-@(library_name)@(DLL_EXTENSION)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(391, 28),
  POS(391, 27)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // libraries_handled(library_name) true
  var_356_1_libraries_handled, 2, var_386_1_library_name, var_true, 1, var_356_1_libraries_handled,
  // push &libraries library_name
  var_push, 2, var_354_1_libraries, var_386_1_library_name, 1, var_354_1_libraries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(396, 26),
  POS(397, 25),
  POS(398, 25)
};

static TAB_NUM t_func_load_or_create_c_sources[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 401_28_filenames
  // $modules empty_list # a list of tuple(filename c_timestamp c_source fky_lines)
  LET, 1, var_empty_list, 1, var_402_1_modules,
  // for_each filenames # sequential load
  var_for_each, 3, LOCAL(1), lambda_58, lambda_65, IO_TAIL_CALL,
  POS(402, 3),
  POS(403, 3)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  1, // parameters
  var_404_3_fky_filename,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_404_3_fky_filename, chr_46, minus_num_1, 1, LOCAL(2),
  // $c_filename append(basename ".c")
  var_append, 2, LOCAL(2), str_c, 1, var_406_1_c_filename,
  // stat! $fky_info fky_filename
  var_stat, 1, var_404_3_fky_filename, IO_CALL(1), var_407_7_fky_info,
  // is_an_error: Error! "
  var_is_an_error, 1, var_407_7_fky_info, 1, LOCAL(1),
  // on fky_info.is_an_error: Error! "
  var_on, 2, LOCAL(1), lambda_59, IO_CALL(0),
  // stat! $c_info c_filename
  var_stat, 1, var_406_1_c_filename, IO_CALL(1), var_410_7_c_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_64, IO_TAIL_CALL,
  POS(405, 7),
  POS(406, 7),
  POS(407, 7),
  POS(408, 19),
  POS(408, 7),
  POS(410, 7),
  POS(412, 11),
  POS(411, 7)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Input_file, var_404_3_fky_filename, str__does_not_exist, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(408, 39),
  POS(408, 32)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_410_7_c_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // c_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(414, 18),
  POS(412, 11),
  POS(414, 11)
};

static TAB_NUM t_lambda_61[] = {
  3, // locals
  0, // parameters
  // modification_time_of(fky_info) > modification_time_of(c_info)
  var_modification_time_of, 1, var_407_7_fky_info, 1, LOCAL(1),
  // modification_time_of(c_info)
  var_modification_time_of, 1, var_410_7_c_info, 1, LOCAL(2),
  // modification_time_of(c_info)
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // modification_time_of(fky_info) > modification_time_of(c_info)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(415, 11),
  POS(415, 44),
  POS(415, 44),
  POS(415, 11)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_63, IO_CALL(0),
  // load_lines! $fky_lines fky_filename
  func_load_lines, 1, var_404_3_fky_filename, IO_CALL(1), LOCAL(2),
  // tuple(fky_filename undefined undefined fky_lines)
  var_tuple, 4, var_404_3_fky_filename, var_undefined, var_undefined, LOCAL(2), 1, LOCAL(1),
  // push &modules tuple(fky_filename undefined undefined fky_lines)
  var_push, 2, var_402_1_modules, LOCAL(1), 1, var_402_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(417, 11),
  POS(419, 11),
  POS(420, 25),
  POS(420, 11),
  POS(421, 11)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_404_3_fky_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(417, 34),
  POS(417, 26)
};

static TAB_NUM t_lambda_64[] = {
  3, // locals
  0, // parameters
  // load! $c_source c_filename
  var_load, 1, var_406_1_c_filename, IO_CALL(1), LOCAL(3),
  // modification_time_of(c_info) c_source undefined)
  var_modification_time_of, 1, var_410_7_c_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(c_info) c_source undefined)
  var_tuple, 4, var_404_3_fky_filename, LOCAL(1), LOCAL(3), var_undefined, 1, LOCAL(2),
  // push &modules
  var_push, 2, var_402_1_modules, LOCAL(2), 1, var_402_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(423, 11),
  POS(425, 32),
  POS(425, 13),
  POS(424, 11),
  POS(426, 11)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // map &modules maybe_compile # parallel compile
  var_map, 2, var_402_1_modules, func_maybe_compile, 1, var_402_1_modules,
  // for_each modules # sequential save
  var_for_each, 3, var_402_1_modules, lambda_66, lambda_67, IO_TAIL_CALL,
  POS(428, 7),
  POS(429, 7)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 430_3_module
  // module $fky_filename $c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), var_431_35_c_source,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, LOCAL(3), chr_46, minus_num_1, 1, var_432_1_basename,
  // is_undefined:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_c_timestamp_is_undefined, var_next, IO_TAIL_CALL,
  POS(431, 11),
  POS(432, 11),
  POS(434, 25),
  POS(433, 11)
};

static TAB_NUM t_lambda_c_timestamp_is_undefined[] = {
  2, // locals
  0, // parameters
  // "@(basename).c" c_source.to_utf8
  var_std__string, 2, var_432_1_basename, str_c, 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, var_431_35_c_source, 1, LOCAL(2),
  // save! "@(basename).c" c_source.to_utf8
  var_save, 2, LOCAL(1), LOCAL(2), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(435, 21),
  POS(435, 46),
  POS(435, 15),
  POS(436, 15)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  //  modules
  LET, 1, var_402_1_modules, TAIL_CALL,
  POS(438, 11)
};

static TAB_NUM t_func_maybe_compile[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 440_17_module
  // module $filename $c_timestamp $c_source $fky_lines
  LOCAL(2), 0, 4, var_441_8_filename, LOCAL(3), LOCAL(4), var_441_41_fky_lines,
  // is_undefined &c_source:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // update_if c_source.is_undefined &c_source:
  var_update_if, 3, LOCAL(1), LOCAL(4), lambda_68, 1, LOCAL(4),
  // tuple_or_error(filename c_timestamp c_source)
  var_tuple_or_error, 3, var_441_8_filename, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> tuple_or_error(filename c_timestamp c_source)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(441, 3),
  POS(442, 22),
  POS(442, 3),
  POS(444, 6),
  POS(444, 3)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // compile_module filename fky_lines
  var_compile_module, 2, var_441_8_filename, var_441_41_fky_lines, TAIL_CALL,
  POS(443, 5)
};

static TAB_NUM t_func_c_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 446_13_modules
  // $compiled_modules empty_list
  LET, 1, var_empty_list, 1, var_447_1_compiled_modules,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_69, lambda_75, IO_TAIL_CALL,
  POS(447, 3),
  POS(448, 3)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 449_3_module
  // module $fky_filename $c_timestamp
  LOCAL(2), 0, 2, var_450_8_fky_filename, var_450_22_c_timestamp,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_450_8_fky_filename, chr_46, minus_num_1, 1, var_451_1_basename,
  // $obj_filename "@(basename).o"
  var_std__string, 2, var_451_1_basename, str_o, 1, var_452_1_obj_filename,
  // stat! $obj_info obj_filename
  var_stat, 1, var_452_1_obj_filename, IO_CALL(1), var_453_7_obj_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_70, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, lambda_74, IO_TAIL_CALL,
  POS(450, 7),
  POS(451, 7),
  POS(452, 7),
  POS(453, 7),
  POS(455, 11),
  POS(454, 7)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_450_22_c_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // c_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(457, 23),
  POS(455, 11),
  POS(457, 11)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_453_7_obj_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // obj_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(458, 20),
  POS(455, 11),
  POS(458, 11)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info)
  var_modification_time_of, 1, var_453_7_obj_info, 1, LOCAL(1),
  // modification_time_of(obj_info)
  var_std__less, 2, LOCAL(1), var_450_22_c_timestamp, 1, LOCAL(2),
  // c_timestamp > modification_time_of(obj_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(459, 25),
  POS(459, 25),
  POS(459, 11)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // "@(basename).c" obj_filename
  var_std__string, 2, var_451_1_basename, str_c, 1, LOCAL(1),
  // compile_c_file! "@(basename).c" obj_filename
  func_compile_c_file, 2, LOCAL(1), var_452_1_obj_filename, IO_CALL(0),
  // tuple(fky_filename undefined)
  var_tuple, 2, var_450_8_fky_filename, var_undefined, 1, LOCAL(1),
  // push &compiled_modules tuple(fky_filename undefined)
  var_push, 2, var_447_1_compiled_modules, LOCAL(1), 1, var_447_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(461, 27),
  POS(461, 11),
  POS(462, 34),
  POS(462, 11),
  POS(463, 11)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info))
  var_modification_time_of, 1, var_453_7_obj_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(obj_info))
  var_tuple, 2, var_450_8_fky_filename, LOCAL(1), 1, LOCAL(2),
  // push &compiled_modules
  var_push, 2, var_447_1_compiled_modules, LOCAL(2), 1, var_447_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(466, 32),
  POS(466, 13),
  POS(465, 11),
  POS(467, 11)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  compiled_modules
  LET, 1, var_447_1_compiled_modules, TAIL_CALL,
  POS(468, 7)
};

static TAB_NUM t_func_compile_c_file[] = {
  3, // locals
  2, // parameters
  var_495_18_c_filename,
  LOCAL(2), // 495_29_o_filename
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_76, IO_CALL(0),
  // $arguments cc_options
  LET, 1, list_65_0, 1, LOCAL(3),
  // "-I@(include_path)"
  var_std__string, 2, str_I, var_include_path, 1, LOCAL(1),
  // push &arguments "-I@(include_path)"
  var_push, 2, LOCAL(3), LOCAL(1), 1, LOCAL(3),
  // push &arguments "-DNDEBUG"
  var_push, 2, LOCAL(3), str_DNDEBUG, 1, LOCAL(3),
  // push &arguments "-c"
  var_push, 2, LOCAL(3), str_c_2, 1, LOCAL(3),
  // push &arguments c_filename
  var_push, 2, LOCAL(3), var_495_18_c_filename, 1, LOCAL(3),
  // push &arguments "-o"
  var_push, 2, LOCAL(3), str_o_2, 1, LOCAL(3),
  // push &arguments o_filename
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // cc! arguments
  func_cc, 1, LOCAL(3), IO_TAIL_CALL,
  POS(496, 3),
  POS(498, 3),
  POS(499, 19),
  POS(499, 3),
  POS(500, 3),
  POS(501, 3),
  POS(502, 3),
  POS(503, 3),
  POS(504, 3),
  POS(505, 3)
};

static TAB_NUM t_lambda_76[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_495_18_c_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(496, 26),
  POS(496, 18)
};

static TAB_NUM t_func_cc[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 507_6_arguments
  // call! CC arguments $status $_out $err
  var_call, 2, var_CC, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_508_34_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_77, IO_TAIL_CALL,
  POS(508, 3),
  POS(509, 6),
  POS(509, 6),
  POS(509, 3)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_508_34_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(510, 17),
  POS(510, 5),
  POS(511, 5)
};

static TAB_NUM t_func_ar[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 513_6_arguments
  // call! "ar" arguments $status $_out $err
  var_call, 2, str_ar, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_514_36_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_78, IO_TAIL_CALL,
  POS(514, 3),
  POS(515, 6),
  POS(515, 6),
  POS(515, 3)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_514_36_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(516, 17),
  POS(516, 5),
  POS(517, 5)
};

static TAB_NUM t_func_extract_required[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 519_20_module
  // module $filename $_c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_520_32_c_source,
  // $path before(filename '/' -1)
  var_before, 3, LOCAL(3), chr_47, minus_num_1, 1, var_521_1_path,
  // $required empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_522_1_required,
  // while
  var_while, 3, lambda_79, lambda_80, lambda_83, TAIL_CALL,
  POS(520, 3),
  POS(521, 3),
  POS(522, 3),
  POS(523, 3)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // c_source .has_prefix. "/// require"
  var_has_prefix, 2, var_520_32_c_source, str__require, 1, LOCAL(1),
  //  c_source .has_prefix. "/// require"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(524, 8),
  POS(524, 7)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // range(c_source 12 -1) .before. '@nl;').trim
  var_range, 3, var_520_32_c_source, num_12, minus_num_1, 1, LOCAL(1),
  // range(c_source 12 -1) .before. '@nl;').trim
  var_before, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // $module_name (range(c_source 12 -1) .before. '@nl;').trim
  var_trim, 1, LOCAL(2), 1, var_526_1_module_name,
  // is_not_empty && module_name(1) == '.' &module_name
  var_is_not_empty, 1, var_521_1_path, 1, LOCAL(1),
  // is_not_empty && module_name(1) == '.' &module_name
  var_std__and, 2, LOCAL(1), lambda_81, 1, LOCAL(2),
  // update_if path.is_not_empty && module_name(1) == '.' &module_name
  var_update_if, 3, LOCAL(2), var_526_1_module_name, lambda_82, 1, var_526_1_module_name,
  // required(module_name) true
  var_522_1_required, 2, var_526_1_module_name, var_true, 1, var_522_1_required,
  // truncate_until &c_source '@nl;'
  var_truncate_until, 2, var_520_32_c_source, chr_10, 1, var_520_32_c_source,
  // next
  var_next, 0, TAIL_CALL,
  POS(526, 21),
  POS(526, 21),
  POS(526, 7),
  POS(527, 22),
  POS(527, 22),
  POS(527, 7),
  POS(529, 8),
  POS(530, 7),
  POS(531, 7)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // module_name(1) == '.' &module_name
  var_526_1_module_name, 1, num_1, 1, LOCAL(1),
  // module_name(1) == '.' &module_name
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // module_name(1) == '.' &module_name
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(527, 38),
  POS(527, 38),
  POS(527, 38)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // range(module_name 2 -1))
  var_range, 3, var_526_1_module_name, num_2, minus_num_1, 1, LOCAL(1),
  // append(path range(module_name 2 -1))
  var_append, 2, var_521_1_path, LOCAL(1), 1, LOCAL(2),
  //  append(path range(module_name 2 -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(528, 24),
  POS(528, 12),
  POS(528, 11)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  required
  LET, 1, var_522_1_required, TAIL_CALL,
  POS(532, 7)
};

static TAB_NUM t_func_load_lines[] = {
  0, // locals
  1, // parameters
  var_534_14_filename,
  // load! $source filename
  var_load, 1, var_534_14_filename, IO_CALL(1), var_535_7_source,
  // cond
  var_cond, 2, lambda_84, lambda_86, IO_CALL(0),
  // from_utf8 &source
  var_from_utf8, 1, var_535_7_source, 1, var_535_7_source,
  // split_source_into_lines source
  var_split_source_into_lines, 1, var_535_7_source, TAIL_CALL,
  POS(535, 3),
  POS(536, 3),
  POS(543, 3),
  POS(544, 3)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_535_7_source, 1, LOCAL(1),
  //  source.is_empty:
  LET, 2, LOCAL(1), lambda_85, IO_TAIL_CALL,
  POS(537, 15),
  POS(537, 7)
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Empty_source_fil, var_534_14_filename, string_7, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(538, 14),
  POS(538, 7)
};

static TAB_NUM t_lambda_86[] = {
  3, // locals
  0, // parameters
  // source(-1) != '@nl;':
  var_535_7_source, 1, minus_num_1, 1, LOCAL(1),
  // source(-1) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // source(-1) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  source(-1) != '@nl;':
  LET, 2, LOCAL(3), lambda_87, IO_TAIL_CALL,
  POS(540, 8),
  POS(540, 8),
  POS(540, 8),
  POS(540, 7)
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Missing_trailing, var_534_14_filename, string_7, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(541, 14),
  POS(541, 7)
};

static TAB_NUM t_func_funky__syntax_error[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 550_0_message
  var_undefined, var_551_0_node,
  // is_defined:
  var_is_defined, 1, var_551_0_node, 1, LOCAL(1),
  // if $column
  var_if, 3, LOCAL(1), lambda_node_is_defined, lambda_92, 1, var_553_4_column,
  // is_defined
  var_is_defined, 1, var_551_0_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_93, lambda_94, 1, LOCAL(2),
  // $details
  var_tuple, 3, var_current_filename, LOCAL(2), var_553_4_column, 1, LOCAL(4),
  // error funky::SYNTAX_ERROR message details
  var_error, 3, var_funky__SYNTAX_ERROR, LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(554, 10),
  POS(553, 3),
  POS(570, 14),
  POS(569, 7),
  POS(566, 3),
  POS(574, 3)
};

static TAB_NUM t_lambda_node_is_defined[] = {
  4, // locals
  0, // parameters
  // source_group_of(node))
  var_source_group_of, 1, var_551_0_node, 1, LOCAL(1),
  // $line line_text_of(source_group_of(node))
  var_line_text_of, 1, LOCAL(1), 1, var_555_1_line,
  // length_of(line)+1-length_of(source_position_of(node))
  var_length_of, 1, var_555_1_line, 1, LOCAL(1),
  // length_of(line)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // source_position_of(node))
  var_source_position_of, 1, var_551_0_node, 1, LOCAL(3),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(3), 1, LOCAL(4),
  // !column length_of(line)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(2), LOCAL(4), 1, var_553_4_column,
  // column == 1
  var_std__equal, 2, var_553_4_column, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_88, lambda_89, TAIL_CALL,
  POS(555, 26),
  POS(555, 7),
  POS(556, 15),
  POS(556, 15),
  POS(556, 43),
  POS(556, 33),
  POS(556, 7),
  POS(558, 9),
  POS(557, 7)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_553_4_column, TAIL_CALL,
  POS(559, 11)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // column-1)
  var_std__minus, 2, var_553_4_column, num_1, 1, LOCAL(1),
  // line(column-1)
  var_555_1_line, 1, LOCAL(1), 1, LOCAL(2),
  // case
  var_case, 4, LOCAL(2), sequence_563_1, lambda_90, lambda_91, TAIL_CALL,
  POS(562, 18),
  POS(562, 13),
  POS(561, 11)
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // column-1
  var_std__minus, 2, var_553_4_column, num_1, 1, LOCAL(1),
  //  column-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(563, 50),
  POS(563, 49)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_553_4_column, TAIL_CALL,
  POS(564, 15)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(565, 7)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // source_group_of(node)
  var_source_group_of, 1, var_551_0_node, 1, LOCAL(1),
  //  source_group_of(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(571, 12),
  POS(571, 11)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(572, 11)
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  1, // parameters
  var_576_16_obj,
  // is_an_error:
  var_is_an_error, 1, var_576_16_obj, 1, LOCAL(1),
  // on obj.is_an_error:
  var_on, 2, LOCAL(1), lambda_95, IO_TAIL_CALL,
  POS(577, 10),
  POS(577, 3)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // error_category_of(obj) == SYNTAX_ERROR:
  var_error_category_of, 1, var_576_16_obj, 1, LOCAL(1),
  // error_category_of(obj) == SYNTAX_ERROR:
  var_std__equal, 2, LOCAL(1), var_SYNTAX_ERROR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_96, lambda_97, IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(579, 7),
  POS(579, 7),
  POS(578, 5),
  POS(583, 5)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  // display_error! obj
  func_display_error, 1, var_576_16_obj, IO_TAIL_CALL,
  POS(580, 9)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // debug::dump_object 50 obj
  var_debug__dump_object, 2, num_50, var_576_16_obj, TAIL_CALL,
  POS(582, 9)
};

static TAB_NUM t_func_display_error[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 585_17_error
  // $message error_message_text_of(error)
  var_error_message_text_of, 1, LOCAL(2), 1, var_586_1_message,
  // error_details_of(error) $filename $line $position
  var_error_details_of, 1, LOCAL(2), 1, LOCAL(1),
  // error_details_of(error) $filename $line $position
  LOCAL(1), 0, 3, var_587_25_filename, var_587_35_line, var_587_41_position,
  // is_defined:
  var_is_defined, 1, var_587_35_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_defined, lambda_98, IO_TAIL_CALL,
  POS(586, 3),
  POS(587, 3),
  POS(587, 3),
  POS(589, 10),
  POS(588, 3)
};

static TAB_NUM t_lambda_line_is_defined[] = {
  9, // locals
  0, // parameters
  // line $indent $text
  var_587_35_line, 0, 2, LOCAL(7), LOCAL(8),
  // $line_no line_no_of(line)
  var_line_no_of, 1, var_587_35_line, 1, LOCAL(9),
  // to_sentence_case) IN LINE @(line_no) OF FILE @(filename)
  var_to_sentence_case, 1, var_586_1_message, 1, LOCAL(1),
  // tabs_and_spaces(indent))@(text)@
  var_tabs_and_spaces, 1, LOCAL(7), 1, LOCAL(2),
  // indent+position-1))^
  var_std__plus, 2, LOCAL(7), var_587_41_position, 1, LOCAL(3),
  // indent+position-1))^
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // tabs_and_spaces(indent+position-1))^
  var_tabs_and_spaces, 1, LOCAL(4), 1, LOCAL(5),
  // "
  var_std__string, 11, str_ERROR, LOCAL(1), str__IN_LINE, LOCAL(9), str__OF_FILE, var_587_25_filename, string_8, LOCAL(2), LOCAL(8), LOCAL(5), string_9, 1, LOCAL(6),
  // eprint! "
  var_eprint, 1, LOCAL(6), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(590, 7),
  POS(591, 7),
  POS(593, 26),
  POS(595, 11),
  POS(596, 27),
  POS(596, 27),
  POS(596, 11),
  POS(592, 15),
  POS(592, 7),
  POS(597, 7)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // to_sentence_case) IN FILE @(filename)
  var_to_sentence_case, 1, var_586_1_message, 1, LOCAL(1),
  // "
  var_std__string, 5, str_ERROR, LOCAL(1), str__IN_FILE, var_587_25_filename, string_10, 1, LOCAL(2),
  // eprint! "
  var_eprint, 1, LOCAL(2), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(600, 26),
  POS(599, 15),
  POS(599, 7),
  POS(601, 7)
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
  // if $input_filename $be_verbose $do_rebuild $do_print_c $do_build_static
  var_if, 3, var_do_run, lambda_do_run, lambda_11, IO_CALL(5), var_input_filename, var_be_verbose, var_do_rebuild, var_do_print_c, var_do_build_static,
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
  POS(55, 5),
  POS(53, 1),
  POS(61, 5),
  POS(59, 1),
  POS(79, 1),
  POS(99, 1),
  POS(103, 5),
  POS(104, 5),
  POS(101, 1),
  POS(106, 10),
  POS(106, 10),
  POS(106, 1),
  POS(111, 1),
  POS(156, 5),
  POS(157, 5),
  POS(154, 1),
  POS(159, 11),
  POS(159, 11),
  POS(159, 11),
  POS(159, 1),
  POS(162, 3),
  POS(161, 1)
};

static int list_65_0_arguments[] = {
  -str_Wall, -str_Wnounusedfunctio, -str_Wnounusedvariabl, -str_Wnoparentheses, -str_Wnoswitch, -str_Wnotrigraphs, -str_O, -str_fomitframepointe, -str_fnostackprotecto, -str_falignfunctions, -str_falignloops
};

static int list_141_0_arguments[] = {
  -str_verbose, -str_output_detailed
};

static int list_144_0_arguments[] = {
  -str_rebuild, -str_rebuild_all_sour
};

static int list_147_0_arguments[] = {
  -str_printc, -str_print_C_source_c
};

static int list_150_0_arguments[] = {
  -str_static, -str_create_a_statica
};

static int list_232_0_arguments[] = {
  -str_runtimebuiltins, -str_runtimedebugger, -str_runtimeinterpret, -str_runtimelinker, -str_runtimememory, -str_runtimeprofiler
};

static int sequence_563_1_arguments[] = {
  -chr_36, -chr_33, -chr_38, -chr_34, -chr_39
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_STRING_8, 6, {.str_8 = "cygwin"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_STRING_8, 4, {.str_8 = ".dll"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 4, {.str_8 = ".so."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_STRING_8, 4, {.str_8 = ".exe"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
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
  {FLT_LIST, 11, {.arguments = list_65_0_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_STRING_8, 5, {.str_8 = "tuple"}},
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__is_a_builtin_function_name}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_STRING_8, 3, {.str_8 = "std"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 4, {.str_8 = "std-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_INCLUDE_PATH"}},
  {FLT_STRING_8, 13, {.str_8 = "/share/funky-"}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_STRING_8, 6, {.str_8 = "fkyrun"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_run}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_STRING_8, 31, {.str_8 = "Missing command line arguments!"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 742, {.str_8 = "Copyright (C) 2024 by\012Dipl.-Ing. Michael Niederle\012\012This program is free software; you can redistribute it and/or modify\012it under the terms of the GNU General Public License, version 2, or\012(at your option) version 3.\012\012This program is distributed in the hope that it will be useful,\012but WITHOUT ANY WARRANTY; without even the implied warranty of\012MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the\012GNU General Public License for more details.\012\012For details of the GNU General Public License see the accompanying\012files GPLv2.txt and GLPv3.txt or\012http://www.gnu.org/licenses/gpl-2.0.html\012http://www.gnu.org/licenses/gpl-3.0.html\012or write to the\012Free Software Foundation, Inc.,\01251 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.\012"}},
  {FLT_STRING_8, 8, {.str_8 = "filename"}},
  {FLT_STRING_8, 45, {.str_8 = "a source code file with the extension \042.fky\042\012"}},
  {FLT_STRING_8, 7, {.str_8 = "verbose"}},
  {FLT_STRING_8, 52, {.str_8 = "output detailed information about the build process\012"}},
  {FLT_LIST, 2, {.arguments = list_141_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "rebuild"}},
  {FLT_STRING_8, 25, {.str_8 = "rebuild all source files\012"}},
  {FLT_LIST, 2, {.arguments = list_144_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "print-c"}},
  {FLT_STRING_8, 40, {.str_8 = "print C source code for a single module\012"}},
  {FLT_LIST, 2, {.arguments = list_147_0_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "static"}},
  {FLT_STRING_8, 38, {.str_8 = "create a statically linked executable\012"}},
  {FLT_LIST, 2, {.arguments = list_150_0_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_LIBRARY_PATH"}},
  {FLT_STRING_8, 4, {.str_8 = "/lib"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_input_filename}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_STRING_8, 4, {.str_8 = ".fky"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_c}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_executable}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 21, {.str_8 = "creating executable \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_modules}},
  {FLT_STRING_8, 2, {.str_8 = ".o"}},
  {FLT_STRING_8, 2, {.str_8 = "-L"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "-static"}},
  {FLT_STRING_8, 14, {.str_8 = "-static-libgcc"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 3, {.str_8 = "-lm"}},
  {FLT_STRING_8, 2, {.str_8 = "-o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 9, {.str_8 = "-l:libfky"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_run}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_STRING_8, 5, {.str_8 = "done\012"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/builtins"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/debugger"}},
  {FLT_STRING_8, 19, {.str_8 = "runtime/interpreter"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/linker"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/memory"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/profiler"}},
  {FLT_LIST, 6, {.arguments = list_232_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_library}},
  {FLT_STRING_8, 8, {.str_8 = "/VERSION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_modules}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "libfky-"}},
  {FLT_STRING_8, 2, {.str_8 = ".a"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_STRING_8, 25, {.str_8 = "creating static library \042"}},
  {FLT_STRING_8, 3, {.str_8 = "rcs"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_STRING_8, 26, {.str_8 = "creating dynamic library \042"}},
  {FLT_STRING_8, 7, {.str_8 = "-shared"}},
  {FLT_STRING_8, 19, {.str_8 = "-Wl,-soname,libfky-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_find_newest_timestamp}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_entries}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DIRECTORY}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_REGULAR_FILE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_STRING_8, 10, {.str_8 = "-l:libfky-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_or_create_c_sources}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_STRING_8, 2, {.str_8 = ".c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 12, {.str_8 = "Input file \042"}},
  {FLT_STRING_8, 17, {.str_8 = "\042 does not exist!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_STRING_8, 11, {.str_8 = "compiling \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_c_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile_c_file}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_STRING_8, 2, {.str_8 = "-I"}},
  {FLT_STRING_8, 8, {.str_8 = "-DNDEBUG"}},
  {FLT_STRING_8, 2, {.str_8 = "-c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_cc}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ar}},
  {FLT_STRING_8, 2, {.str_8 = "ar"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_required}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_STRING_8, 11, {.str_8 = "/// require"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_POSITIVE_INT64, 0, {.value = 12}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_STRING_8, 19, {.str_8 = "Empty source file \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_STRING_8, 39, {.str_8 = "Missing trailing newline character in \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__syntax_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_node_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_SEQUENCE, 5, {.arguments = sequence_563_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_POSITIVE_INT64, 0, {.value = 50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_display_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_line_is_defined}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}},
  {FLT_STRING_8, 9, {.str_8 = " IN LINE "}},
  {FLT_STRING_8, 9, {.str_8 = " OF FILE "}},
  {FLT_STRING_8, 2, {.str_8 = "\012\012"}},
  {FLT_STRING_8, 2, {.str_8 = "^\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
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
    FOT_INITIALIZED, 0, 0,
    "DLL_VERSION\000", NULL,
    {.const_idx = -num_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OS\000", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(56, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "DLL_EXTENSION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(54, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "EXE_EXTENSION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(66, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "builtin_functions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_builtin_function_name\000funky", NULL,
    {.const_idx = -func_funky__is_a_builtin_function_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "88_37_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_1_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(89, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(91, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(95, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(95, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(96, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(97, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "character_from_name\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_character_names\000", NULL,
    {.position = POS(99, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(103, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PREFIX\000", NULL,
    {.position = POS(104, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "include_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(102, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(106, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(106, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(106, 10)}
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
    {.position = POS(108, 24)}
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
    {.position = POS(113, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(113, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(113, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(118, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(139, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_parameters\000", NULL,
    {.position = POS(116, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "library_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(159, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(160, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(159, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(162, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(171, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(171, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "compile_module\000", NULL,
    {.position = POS(173, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(175, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_10_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_19_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(185, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_1_exe_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_7_exe_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(187, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(191, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(192, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(193, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(193, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(195, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(201, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(198, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(204, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(226, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exec\000", NULL,
    {.position = POS(226, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_1_version_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_4_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(255, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(256, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(257, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_1_object_files\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_1_a_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_7_a_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "280_1_so_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_7_so_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(291, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_19_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(311, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(316, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(316, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(319, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(305, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "323_19_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_12_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "directory\000", NULL,
    {.position = POS(324, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_error_message_string\000", NULL,
    {.position = POS(326, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(326, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(327, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(327, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_1_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_1_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000std", NULL,
    {.position = POS(331, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_fullname\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(333, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIRECTORY\000", NULL,
    {.position = POS(334, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REGULAR_FILE\000", NULL,
    {.position = POS(342, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(333, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_1_fky_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_1_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "355_1_object_files_handled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(355, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_1_libraries_handled\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_1_files_to_compile\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_3_fky_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(365, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL,
    {.position = POS(376, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(376, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(375, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_3_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_1_library_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(357, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "404_3_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "406_1_c_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_7_fky_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_7_c_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(420, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_35_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_1_basename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(435, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "save\000", NULL,
    {.position = POS(435, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "441_8_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "441_41_fky_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple_or_error\000", NULL,
    {.position = POS(444, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "447_1_compiled_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_8_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_22_c_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "451_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_1_obj_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "453_7_obj_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "495_18_c_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CC\000", NULL,
    {.position = POS(508, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_34_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(508, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(510, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_36_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_32_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_1_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "522_1_required\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_1_module_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(527, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "while\000", NULL,
    {.position = POS(523, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_14_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_7_source\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(536, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_source_into_lines\000", NULL,
    {.position = POS(544, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "syntax_error\000funky", NULL,
    {.const_idx = -func_funky__syntax_error}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "551_0_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_4_column\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(555, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "555_1_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(555, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(556, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(556, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(556, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(556, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(563, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(568, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000funky", NULL,
    {.position = POS(574, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(574, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "576_16_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_category_of\000", NULL,
    {.position = POS(579, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000", NULL,
    {.position = POS(579, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(582, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "586_1_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(586, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_details_of\000", NULL,
    {.position = POS(587, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_25_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_35_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_41_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(591, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(593, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(595, 11)}
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
  244, // number of constants
  183, // number of variables
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
