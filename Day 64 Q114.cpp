//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    int max_len = 0;
    
    for (int i = 0; i < n; i++) {
        int seen[256] = {0};
        int len = 0;
        
        for (int j = i; j < n; j++) {
            if (seen[s[j]] == 1) {
                break;
            }
            seen[s[j]] = 1;
            len++;
        }
        
        if (len > max_len) {
            max_len = len;
        }
    }
    
    printf("%d", max_len);
    
    return 0;
}
