//Q100: Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    
    fgets(str, 100, stdin);
    
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (i != length - 1 || j != length - 1) {
                printf(",");
            }
        }
    }
    
    return 0;
}
