#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (integers from 0 to n with one missing): ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum of 0 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate actual sum of array elements
    int actualSum = 0;
    for(i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missing = totalSum - actualSum;
    printf("Missing number: %d\n", missing);

    return 0;
}
