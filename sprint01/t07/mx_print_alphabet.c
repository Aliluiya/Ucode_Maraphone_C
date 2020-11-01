#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void){
    int i = 65;
    while (i <= 90) { 
        if (i % 2) {
            mx_printchar(i);
        }     
        else {                       
            mx_printchar(i + 32);
        }
        i++;
    }
    mx_printchar('\n');
}
