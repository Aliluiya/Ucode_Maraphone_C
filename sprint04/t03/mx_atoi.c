#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int result = 0;

    for (int i = 0; str[i] != '\0' ; i++) {
        if(mx_isdigit(str[i])) {
            result = result * 10 + (str[i] - 48);
            if(mx_isspace(str[i + 1])) break;
        }
    }
    return result;
}

int main(){
    int i;
    char c[20] = " \t\n -554 \t";
    i = atoi(c);
    printf("%d", i);
}
