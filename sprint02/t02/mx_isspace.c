#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c){
    if ((c >= 9 && c <= 13 ) || (c == 32)) 
        return 1;
    else
        return 0;
}

// int main(){
//     printf("%d", mx_isspace('\n'));
//     return 0;
// }
