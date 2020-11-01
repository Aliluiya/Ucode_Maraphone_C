#include<stdio.h>

int mx_mid(int a, int b, int c){
    if( a > b || a > c)
    return a;
    else if(b > a || b > c)
    return b;
    else
    return c;
}

// int main(){
//     printf("%d", mx_mid(5, 8, 9));
// }
