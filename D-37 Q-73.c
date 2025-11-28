#include <stdio.h>

int main() {
    int a[10][10], rowSum[10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row-wise sum
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++) {
            rowSum[i] += a[i][j];
        }
    }

    // Display result
    printf("\nSum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d Sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
