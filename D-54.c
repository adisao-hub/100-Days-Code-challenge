#include <stdio.h>

int main() {
    int n, i;
    long totalSum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    totalSum = (long)n * (n + 1) / 2;

    long leftSum = 0;
    int pivot = -1;

    for(i = 1; i <= n; i++) {
        leftSum += i;
        long rightSum = totalSum - (leftSum - i); // sum from i to n
        if(leftSum == rightSum) {
            pivot = i;
            break;
        }
    }

    printf("Pivot integer: %d\n", pivot);

    return 0;
}
