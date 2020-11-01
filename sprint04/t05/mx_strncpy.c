#include <stdio.h>
#include <string.h>

char *mx_strncpy(char *dst, const char *src, int len){
    int i = 0;
    while (src[i] != '\0' && (i < len)){
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

// int main(){
//     char str1[7] = "djfkg";
//     char str2[7] =" ";
//     int n = 3;
//     mx_strncpy(str2, str1, n);
//     printf("%s\n", str1);
//     printf("%s\n", str2);
//     return 0;

//     // char str3[10] = "djfkg";
//     // char str4[10];
//     // strncpy(str4, str3, 3);
//     // printf("%s\n", str3);
//     // printf("%s\n", str4);
//     // return 0;
// }
