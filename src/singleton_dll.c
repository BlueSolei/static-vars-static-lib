#include "singleton_dll.h"

#include "singleton_lib.h"

int dll_inc_counter() { return lib_inc_counter(); }

int dll_get_counter() { return lib_get_counter(); }

int *dll_get_counter_address() { return lib_get_counter_address(); }
