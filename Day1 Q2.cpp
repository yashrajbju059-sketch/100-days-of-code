//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.



#include <stdio.h>



int main() {
    int num1, num2;
    int sum, diff, product, quotient;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Perform operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;  // Integer division

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}

