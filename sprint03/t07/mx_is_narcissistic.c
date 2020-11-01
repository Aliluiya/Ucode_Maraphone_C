#include <stdio.h>
#include <stdbool.h>

double mx_pow (double n, unsigned int pow);

bool mx_narcissistic(int num){
  int sum = 0;
  int digits = 0;
  if (num < 0)
    return false;
  for(int temp = num; temp != 0; temp /= 10)
    digits++;
  for(int temp = num; temp; temp /= 10)
  sum = sum + mx_pow(temp % 10, digits);
  if (sum == num)
    return true;
    return false;
  }

// int main() {
//   printf("%d", mx_narcissistic(3));
// }