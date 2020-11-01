#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int mx_tolower(int c);
int mx_toupper(int c);
bool mx_islower(int c);
bool mx_isupper(int c);

void mx_reverse_case(char *s) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(mx_islower(s[i]) == 1)
            s[i] = mx_toupper(s[i]);
        else 
            s[i] = mx_tolower(s[i]);
    }
}

// int main() {
//     char str[] = "Hello Neo";
//     mx_reverse_case(str);
//     printf("%s", str);
// }
