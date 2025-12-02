//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double result = 0.0;

    scanf("%d", &num);
    original = num;

    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
