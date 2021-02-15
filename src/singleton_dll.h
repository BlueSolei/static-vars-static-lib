#pragma once

#ifdef WIN32
#ifdef DLL_EXPORT
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif
#else
#define DLL_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

DLL_API int dll_inc_counter();
DLL_API int dll_get_counter();
DLL_API int *dll_get_counter_address();

#ifdef __cplusplus
}
#endif
