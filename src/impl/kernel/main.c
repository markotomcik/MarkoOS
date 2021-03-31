#include "print.h"

void kernel_main() {
  print_clear();
  print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
  print_str("Welcome to 64-bit kernel!\n\n");
  print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
  print_str("MarkoOS 64-bit beta0.2.3");
}
