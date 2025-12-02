//Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1;
    
    fgets(str, 100, stdin);
    
    while (str[length] != '\0') {
        length++;
    }
    
    if (length > 0 && str[length-1] == '\n') {
        length--;
    }
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }
    
    return 0;
}
