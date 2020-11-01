#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void){
    int i;
    for (i = 48 ; i <= 57; i++){
        mx_printchar(i);
    }
    for (i = 65 ; i <= 70; i++){
        mx_printchar(i);
    }
    mx_printchar('\n');
}
