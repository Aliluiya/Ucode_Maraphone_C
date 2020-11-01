#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        (*count)++;
        int mid = left + ((right - left) / 2);//left + ((right - left) / 2);
        if (mx_strcmp(arr[mid], s) == 0) 
            return mid;
        else if (mx_strcmp(arr[mid], s) > 0) 
            right = mid - 1;
        else 
            left = mid +1;
    }
    *count = 0;
    return -1;
}

// int main()
// {
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     int result = mx_binary_search(arr, 6, "aBc", &count);
//     printf("%d\n", result);
//     printf("%d\n", count);
// }
