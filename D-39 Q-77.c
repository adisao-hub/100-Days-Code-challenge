#include <stdio.h>

int main() {
    int a[10][10], n, i, j, distinct = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check distinct diagonal elements
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0)
            break;
    }

    if(distinct == 1)
        printf("\nAll diagonal elements are DISTINCT.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}
