//Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int len1, len2;
    
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    if (len1 > 0 && str1[len1-1] == '\n') {
        str1[len1-1] = '\0';
        len1--;
    }
    if (len2 > 0 && str2[len2-1] == '\n') {
        str2[len2-1] = '\0';
        len2--;
    }
    
    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }
    
    strcpy(temp, str1);
    strcat(temp, str1);
    
    if (strstr(temp, str2) != NULL) {
        printf("Rotation");
    } else {
        printf("Not rotation");
    }
    
    return 0;
}
