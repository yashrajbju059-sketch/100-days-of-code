//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

enum menu {ADD, SUBTRACT, MULTIPLY};

int main() {
    enum menu choice = ADD;
    int a = 10, b = 20;
    int result;
    
    switch(choice) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
    }
    
    printf("%d", result);
    return 0;
}
