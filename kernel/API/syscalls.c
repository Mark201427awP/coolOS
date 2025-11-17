//
// Created by merkus on 11/16/25.
//

#include "syscalls.h"
#include "../drivers/vga.h"

#define SYS_WRITE 1
#define SYS_READ 2

void call_syscalls(int num, char *str) {
    switch (num) {
        case SYS_WRITE: printf(str); break;
    default: printf("unknown syscall"); break;
    }
}