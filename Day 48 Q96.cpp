//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, end = 0;
    
    fgets(str, 100, stdin);
    
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            end = i - 1;
            for (int j = end; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] == ' ') {
                printf(" ");
            }
            start = i + 1;
        }
        i++;
    }
    
    return 0;
}
