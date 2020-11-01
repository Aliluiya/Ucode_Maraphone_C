#include <stdio.h>
#include <stdbool.h>

bool mx_isalpha(int c){
    if((c > 64 && c < 91) || (c > 96 && c < 123))
        return true;
    else{
        return false;
    }    
}

// int main()
// {
//    printf("%d", mx_isalpha(5));
//    return 0;
// }
