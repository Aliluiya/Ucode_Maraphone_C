#include <stdio.h>
#include <string.h>

char *mx_strchr(const char *s, int c){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == c){
          return (char *)&s[i];
        }
        i++;
    }
    return (char *)&s[i];
}

// (int i = 0; i == c; i++)
//REF
// int main(){
//     char str1[]="Hello world";
//     char ex = 'w';
//     char *result;
//     result = strchr(str1 , ex);
//     printf("%s" , result);
// }

// int main(){
//     char str1[]="game over";
//     char ex = ' ';
//     char *result;
//     result = mx_strchr(str1 , ex);
//     printf("%s" , result);
// }
