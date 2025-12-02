//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i = 0;
    
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        } else if (str1[i] >= 'A' && str1[i] <= 'Z') {
            count1[str1[i] - 'A']++;
        }
        i++;
    }
    
    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        } else if (str2[i] >= 'A' && str2[i] <= 'Z') {
            count2[str2[i] - 'A']++;
        }
        i++;
    }
    
    for (int j = 0; j < 26; j++) {
        if (count1[j] != count2[j]) {
            printf("Not anagrams");
            return 0;
        }
    }
    
    printf("Anagrams");
    return 0;
}
