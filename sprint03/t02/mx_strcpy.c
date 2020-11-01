#include <stdio.h>
#include <string.h>

char *mx_strcpy(char *dst, const char *src){
    int i = 0;
    while(src[i]){
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

// int main(){
//     char res = *mx_strcpy("fatal", );
//     printf("%c", res);
// }

// int main(){
//     char str1[10] = "djfkg";
//     char str2[10];
//     mx_strcpy(str2, str1);
//     printf("%s\n", str1);
//     printf("%s\n", str2);
//     return 0;
// }