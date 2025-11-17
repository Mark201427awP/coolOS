#include"../drivers/vga.h"

void print_cursor(char *cur) {
  video[cur_x * 2] = *cur;
  video[cur_x * 2 + 1] = 2;
}
