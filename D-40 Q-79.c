#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j;

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

    printf("\nDiagonal Traversal of the matrix:\n");

    // Traverse diagonals starting from first row
    for(int startCol = 0; startCo
