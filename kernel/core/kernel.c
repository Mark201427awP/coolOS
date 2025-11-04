#include <stdint.h>
#include "../drivers/vga.c"

// Multiboot header (должен быть в первых 8KB ядра)
#define MULTIBOOT_HEADER_MAGIC 0x1BADB002
#define MULTIBOOT_HEADER_FLAGS 0x00000003

struct multiboot_header {
    uint32_t magic;
    uint32_t flags;
    uint32_t checksum;
};

// Выравниваем и помещаем в отдельную секцию
__attribute__((section(".multiboot")))
struct multiboot_header header = {
    MULTIBOOT_HEADER_MAGIC,
    MULTIBOOT_HEADER_FLAGS,
    -(MULTIBOOT_HEADER_MAGIC + MULTIBOOT_HEADER_FLAGS)
};

// VGA буфер
char art1[] =
"                                                                                "
"                                                                                "
"                  _____             _ _    ____   _____                         "
"                 / ____|           | | |  / __ \\ / ____|                        "
"                | |      ___   ___ | | | | |  | | (___                          "
"                | |     / _ \\ / _ \\| | | | |  | |\\___ \\                         "
"                | |____| (_) | (_) | | | | |__| |____) |                        "
"                 \\_____|\\___/ \\___/|_|_|  \\____/|_____/                         "
"                                                                                "
"                                                                                "
"                              ________                                          "
"                             | coolOS |                                         "
"                              --------                                          "
"                                                                                "
"                                                                                ";


void kernel_main() {
    clear_screen();
    printf(art1);

    while(1) {}
}