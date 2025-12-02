//Q85: Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    
    fgets(str, 100, stdin);
    
    while (str[length] != '\0') {
        length++;
    }
    
    if (length > 0 && str[length-1] == '\n') {
        length--;
    }
    
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    
    printf("%s", str);
    return 0;
}
