#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;  // Using long long for large products

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2) {  // Iterate only even numbers
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %llu\n", n, product);

    return 0;
}
