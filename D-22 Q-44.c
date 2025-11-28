#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1, j = 1; i <= n; i++, j += 2) {
        double numerator = j;
        double denominator
