#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c);

int mx_atoi(const char *str); 
// void mx_printchar(char c)
void mx_printint(int n);

int main(int argc, char **argv){
    int sum = 0;
    for (int i = 0; i < argc; i++) {
		if(mx_atoi(argv[i]))
            printf("%s\n", argv[i]);
            if(*argv[i ++] != '+' || *argv[i ++] != '-' ) 
                sum = sum + mx_atoi(argv[i]);
            // if(mx_isspace (*argv[i ++]) > 0 || mx_isspace(*argv[i --]))  
            //     i++;
            //    return 0;
            // if(mx_isspace(*argv[i ++]) == 0 || mx_isspace(*argv[i --]) = 0)  
	}
    mx_printint(sum);
    return 0;
}

// int main(int argc, char **argv){
//     int i;
//     char c[20] = " \t\n 1- -7 \t";
//     i = mx_atoi(c);
//     printf("%d", i);
// }
