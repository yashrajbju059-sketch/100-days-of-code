//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    
    int count[10] = {0};
    
    if(num == 0) {
        printf("0");
        return 0;
    }
    
    if(num < 0) {
        num = -num;
    }
    
    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    
    int maxCount = 0;
    int result = 0;
    
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            result = i;
        }
    }
    
    printf("%d", result);
    return 0;
}
