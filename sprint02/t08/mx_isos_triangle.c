#include <stdio.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c){
    for(int i = 0; i < length; i++) {
        for(int d = 0; d <= i; d++){
            mx_printchar(c);
        }
        mx_printchar('\n');
    }
}

int main () {
    mx_isos_triangle(3, '*');
}
