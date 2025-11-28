#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {              // rows
        for(j = 6 - i; j <= 5; j++) {      // numbers in each row
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
