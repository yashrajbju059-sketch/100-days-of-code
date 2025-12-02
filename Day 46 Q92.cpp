//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i = 0;
    
    fgets(str, 100, stdin);
    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
            if (count[str[i] - 'a'] == 2) {
                printf("%c", str[i]);
                return 0;
            }
        }
        i++;
    }
    
    return 0;
}
