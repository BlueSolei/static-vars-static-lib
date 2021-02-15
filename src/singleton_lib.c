#include "singleton_lib.h"

#ifdef _MSC_VER
#pragma message("Windows library API")
#define PUBLIC_API 
#define PRIVATE_API
#else
#define PUBLIC_API __attribute__((visibility("default")))
#define PRIVATE_API __attribute__((visibility("hidden")))
#endif

int PRIVATE_API gs_counter = 0;

int lib_inc_counter() { return ++gs_counter; }

int lib_get_counter() { return gs_counter; }

int *lib_get_counter_address() { return &gs_counter; }
