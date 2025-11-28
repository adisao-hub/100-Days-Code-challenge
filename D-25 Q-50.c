#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 0; i < n; i++) {             // rows
        for(j = 0; j < i; j++)           // spaces
            printf(" ");
        for(j = 0; j < n - i; j++)       // stars
            printf("*");
        printf("\n"
