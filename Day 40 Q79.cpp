//Q79: Perform diagonal traversal of a matrix.

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
    
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            int i = (d < rows) ? d : rows - 1;
            int j = (d < rows) ? 0 : d - rows + 1;
            while (i >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        } else {
            int i = (d < cols) ? 0 : d - cols + 1;
            int j = (d < cols) ? d : cols - 1;
            while (i < rows && j >= 0) {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }
    
    return 0;
}
