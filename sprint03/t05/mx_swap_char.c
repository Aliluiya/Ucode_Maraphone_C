#include <stdio.h>
//#include <unistd.h>

void mx_swap_char(char *s1, char*s2){
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

// int main(){
//     char str[]="Hello";
//     printf("%s\n", str);
//     mx_swap_char(&str[3], &str[4]);
//     printf("%s\n", str);
//     mx_swap_char(&str[1], &str[2]);
//     printf("%s\n", str);
// }
