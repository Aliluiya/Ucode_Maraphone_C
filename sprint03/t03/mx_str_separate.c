#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim){
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == delim) {
            while(str[i] == delim)
                i++;            
            mx_printchar('\n');
        }
        mx_printchar(str[i]);
    }
    mx_printchar('\n');
}

// int main(){
//     mx_str_separate("MMMatrix", 'M');
//     mx_str_separate("game over", 'm');
//     mx_str_separate("game over", ' ');
// }
