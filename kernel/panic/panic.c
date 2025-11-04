#include "../drivers/vga.c"

void kernel_panic(const char *message) {
    printf("PANIC:" message);
    printf("Now system reboot");
}