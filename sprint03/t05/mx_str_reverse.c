#include <stdio.h>

int mx_strlen(const char *s);
void mx_swap_char(char *s1, char*s2);

void mx_str_reverse (char *s ) {
    int last = mx_strlen(s) - 1;
    for( int i = 0 ; i < last; i++ ) {    //    int l = mx_strlen(s);
        mx_swap_char(&s[i], &s[last]);
        last--;
    }
}

// int main(){
//     char str[] = "game over";
//     mx_str_reverse(str);
//     printf("%s", str);
// }
