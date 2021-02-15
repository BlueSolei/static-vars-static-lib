#include <fmt/format.h>

#include "static-vars-static-lib.h"

using namespace std;

int main() {
  fmt::print("Main calling static-vars-static-lib.Do() ... \n");
  static_vars_static_lib static_vars_static_lib;
  static_vars_static_lib.Do();
  return 0;
}
