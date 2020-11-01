#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n){
    if( n == -2147483648){
        write(1, "-2147483648", 11);
        return;    
    }
    if (n < 0) {
        mx_printchar('-');
        n *= -1;
    }
    if (n > 9){
        mx_printint(n / 10);
    }
    mx_printchar(n % 10 + 48);
}

// int main() {
//     mx_printint(-2147483648);
//     mx_printchar('\n');
//     mx_printint(2147483647);
//     mx_printchar('\n');
//     mx_printint(-348);
//     mx_printchar('\n');
//     mx_printint(512);
//     mx_printchar('\n');
//     mx_printint(0);
//     mx_printchar('\n');
//     mx_printint(3);
//     mx_printchar('\n');
// }
