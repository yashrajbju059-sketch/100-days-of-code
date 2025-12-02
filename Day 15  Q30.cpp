//Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int reverse = 0;
    while(n > 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    
    printf("%d", reverse);
    return 0;
}
