#include <stdio.h>
#include <string.h>

int mx_strlen(const char *s);

char *mx_strcat(char*s1, const char*s2) {
    int size1 = mx_strlen(s1);
    int size2 = mx_strlen(s2);
    int i = size1;
    int j = 0;

    while(i < (size1 + size2)){
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i++] = '\0';
    return s1;     
}

// //REF
// int main(){
//     char str1[] = "Hello";
//     char str2[] = ", sweetty";
//     mx_strcat (str1 , str2);
//     printf("%s", str1);
// }
