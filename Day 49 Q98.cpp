//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, lastSpace = -1;
    
    fgets(str, 100, stdin);
    
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }
    
    i = 0;
    while (i < lastSpace) {
        if (i == 0 || str[i-1] == ' ') {
            printf("%c.", str[i]);
        }
        i++;
    }
    
    printf(" ");
    for (int j = lastSpace + 1; str[j] != '\0' && str[j] != '\n'; j++) {
        printf("%c", str[j]);
    }
    
    return 0;
}
