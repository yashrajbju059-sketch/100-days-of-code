//Q94: Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, maxLen = 0, currLen = 0, maxStart = 0;
    
    fgets(str, 100, stdin);
    
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            start = i + 1;
            currLen = 0;
        } else {
            currLen++;
        }
        i++;
    }
    
    for (int j = maxStart; j < maxStart + maxLen; j++) {
        printf("%c", str[j]);
    }
    
    return 0;
}
