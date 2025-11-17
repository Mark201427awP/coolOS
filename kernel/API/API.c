//
// Created by merkus on 11/16/25.
//

#include "API.h"
#include "syscalls.h"


void printf(char *str) {
    call_syscalls(1, str);
}

