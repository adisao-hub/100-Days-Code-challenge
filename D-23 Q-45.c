#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 2, denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;       // next even number
        denominator += 4;     // next denominator
    }

    printf("Sum of the series up to
