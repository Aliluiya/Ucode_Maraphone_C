#include<stdio.h>

int mx_sum_digits(int num){
    int c = 0; 

    if (num < 0)
         num *= -1;
 //   else if()     
    while (num % 10 != 0) {
        c = c + num % 10;
        num = num / 10;
    }
    return c;
}

//  int main(){
//         // printf("%d", mx_sum_digits(435));
//         // printf("%d", mx_sum_digits(-555));
//         // printf("%d", mx_sum_digits(-2147483648));
//         // printf("%d", mx_sum_digits(-348));
//         // printf("%d", mx_sum_digits(512));
//         // printf("%d", mx_sum_digits(0));
// }
