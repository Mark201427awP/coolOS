//
// Created by merkus on 11/16/25.
//

#ifndef COOLOS_SYSCALLS_H
#define COOLOS_SYSCALLS_H

#define SYS_WRITE 1
#define SYS_READ 2

void call_syscalls(int num, char *str);

#endif //COOLOS_SYSCALLS_H