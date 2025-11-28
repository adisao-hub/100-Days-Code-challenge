#include <stdio.h>

int main() {
    int a[10][10], b[10][10], product[10][10];
    int r1, c1, r2, c2, i, j, k;

    // Input first matrix
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2) {
        printf("Matrix multiplication not possible! Columns of first must equal rows of second.\n");
        return 0;
    }

    printf("Enter elements
