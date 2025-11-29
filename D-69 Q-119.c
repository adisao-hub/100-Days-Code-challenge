#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (integers from 1 to n-1, one repeated): ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = 0;

    // XOR all elements of the array
    for(i = 0; i < n; i++) {
        repeated ^= arr[i];
    }

    // XOR with numbers from 1 to n-1
    for(i = 1; i <= n-1; i++) {
        repeated ^= i;
    }

    printf("Repeated element: %d\n", repeated);

    return 0;
}
