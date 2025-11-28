#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal elements
    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
