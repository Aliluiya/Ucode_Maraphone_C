#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int result = 0;
    int flag = 1;
    for (int i = 0; str[i] != '\0' ; i++) {
        if (str[0] == '-') {
            flag = -1;
            i++;
        }
        if(mx_isdigit(str[i])) {
            result = result * 10 + (str[i] - 48);
            if(mx_isspace(str[i + 1])) break;
        }
    }
    return result * flag;
}

// int mx_atoi(const char *str){
//     int i = 0;
//     int flag = 1;
//     int res = 0;
//     if (str[0] == '-') {
//         flag = -1;
//         i++;
//     }
//     for (;mx_isspace(str[i]); i++)
//         for (;str[i] && mx_isdigit(str[i]); i++) {
//             res = res * 10 + str[i] - 48;
//         }
//     return res * flag;
// }

// int main(){
//     int i;
//     char c[20] = " \t\n 554 \t";
//     i = atoi(c);
//     printf("%d", i);
// }
