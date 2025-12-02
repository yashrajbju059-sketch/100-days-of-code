//Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    
    fgets(str, 100, stdin);
    
    printf("%c.", str[0]);
    
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            printf("%c.", str[i+1]);
        }
        i++;
    }
    
    return 0;
}
