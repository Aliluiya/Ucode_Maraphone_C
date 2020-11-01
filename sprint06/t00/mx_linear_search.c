#include <stdio.h>
#include <string.h>
#include <stddef.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s){
        for (int i = 0; arr[i] != NULL; i++){
            if (mx_strcmp(arr[i], s) == 0) {
            return i;
            }
        }
        return -1;
}

// int main(){
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
//     int result = mx_linear_search(arr, "aBc");
//     printf("%d", result);
// }

/*
int main() {
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
    printf("%i\n", mx_linear_search(arr, "z"));
    printf("%i\n", mx_linear_search(arr, "aBc"));
}*/
