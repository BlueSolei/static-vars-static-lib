#include <stdio.h>

#include "singleton_dll.h"
#include "singleton_lib.h"

using namespace std;

int main() {
  printf("DLL singleton initial counter value: %d\n", dll_get_counter());
  printf("DLL singleton counter ADDRESS: %p\n", dll_get_counter_address());

  printf("Lib singleton initial counter value: %d\n", lib_get_counter());
  printf("Lib singleton counter ADDRESS: %p\n\n", lib_get_counter_address());

  printf("Lib singleton increment counter value: %d\n", lib_inc_counter());
  printf("Lib singleton increment counter value: %d\n", lib_inc_counter());
  printf("Lib singleton increment counter value: %d\n", lib_inc_counter());
  printf("Lib singleton increment counter value: %d\n", lib_inc_counter());
  printf("Lib singleton increment counter value: %d\n\n", lib_inc_counter());

  printf("Lib singleton GET counter value: %d\n", lib_get_counter());
  printf("Dll singleton GET counter value: %d\n", dll_get_counter());

  return 0;
}
