//
// Created by merkus on 10/25/25.
//

#ifndef COOLOS_VGA_H
#define COOLOS_VGA_H


extern char *video;    // extern говорит "переменная есть в другом файле"
extern int cur_x;
extern int cur_y;
extern int wight;
extern int right;

void print_str(char str[]);
void clean_screen();
#endif //COOLOS_VGA_H
