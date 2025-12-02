//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, original, digit, sum = 0, fact;
    scanf("%d", &num);
    
    original = num;
    
    while (num > 0) {
        digit = num % 10;
        fact = 1;
        
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        
        sum += fact;
        num /= 10;
    }
    
    if (sum == original) {
        printf("Strong number");
    } else {
        printf("Not strong number");
    }
    
    return 0;
}
