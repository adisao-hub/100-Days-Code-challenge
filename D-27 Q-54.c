#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the top half
    int i, j, spaces;

    // Upper half
    for(i = 1; i <= n; i++) {
        spaces = n - i;
        for(j = 1; j <= spaces; j++)
            printf(" ");
        for(j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for(i = n-1; i >= 1; i--) {
        spaces = n - i;
        for(j = 1; j <= spaces; j++)
            printf(" ");
        for(j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
