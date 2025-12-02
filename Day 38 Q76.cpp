//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[100][100];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if (rows != cols) {
        printf("False");
        return 0;
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                printf("False");
                return 0;
            }
        }
    }
    
    printf("True");
    return 0;
}
