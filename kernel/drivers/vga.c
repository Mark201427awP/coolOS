char *video = (char*)0xB8000;
int cur_x = 0;
int cur_y = 0;
int wight = 80;
int right = 25;

void clear_screen() {
    for(int i = 0; i < wight*right; i++) {
        video[i*2] = ' ';
        video[i*2+1] = 0x0F;        
    }
    cur_x = 0;
    cur_y = 0;
}
void print_str(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        video[cur_x * 2] = str[i];
        video[cur_x * 2 + 1] = 0x0F;
        cur_x++;
    }
}

