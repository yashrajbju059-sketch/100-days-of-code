//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int element;
    scanf("%d", &element);
    
    int pos = 0;
    while(pos < n && arr[pos] < element) {
        pos++;
    }
    
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[pos] = element;
    
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
