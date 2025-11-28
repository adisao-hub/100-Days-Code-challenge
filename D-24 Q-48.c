#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {       // number of rows
        for(j = 1; j <= i; j++) {   // numbers in each row
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
