// built-in include guard removal
// just in case the user has a local dependency with the same file name
#if defined _inc_library
	#undef _inc_library
#endif
// custom include-guard to ensure we don't duplicate
#if defined _library_included
	#endinput
#endif
#define _library_included
