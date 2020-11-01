#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size){
    int count = 0;
    char *min_idx;
    char *temp;
    int loc;
    for(int i = 0; i < size - 1; i++){
        min_idx = arr[i];
        //loc = i;
        for(int j = i + 1; j < size; j++){
            if (mx_strlen(arr[j]) < mx_strlen(min_idx)) {
                min_idx = arr[j];
                loc = j;
            }
            else if(mx_strlen(min_idx) == mx_strlen(arr[j])) { 
                if (mx_strcmp(min_idx, arr[j]) > 0) {
                    min_idx = arr[j];
                    loc = j;
                }
            }  
        }

        if (loc != i){
            count++;
        }
            temp = arr[i];
            arr[i] = arr[loc];
            arr[loc] = temp;
    }
    return count;
}

// int main()
// {
//     char *arr[] = {"Z", "Abcd", "a", "aBc", "z", "abc", "AbCd"};
//     int result = mx_selection_sort(arr, 7);
//         for(int i = 0; i < 7; i++){
//             printf("%s\t", arr[i]);
//         }
//     printf("%d\n", result);
// }
