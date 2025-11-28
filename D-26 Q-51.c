#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {               // rows
        for(j = 1; j <= n - i; j++)         // spaces
            printf(" ");
        for(j = n - i + 1; j <= n; j++)     // numbers
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
