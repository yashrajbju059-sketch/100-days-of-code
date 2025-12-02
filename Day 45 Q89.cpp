//Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;
    int i = 0;
    
    fgets(str, 100, stdin);
    scanf("%c", &ch);
    
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    
    printf("%d", count);
    return 0;
}
