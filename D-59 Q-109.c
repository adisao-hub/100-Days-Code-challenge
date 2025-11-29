#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > n) {
        printf("Invalid input: k cannot be greater than array size.\n");
        return 0;
    }

    // Calculate sum of first k elements
    int sum = 0, maxSum = 0;
    for(i = 0; i < k; i++) {
        sum += arr[i];
    }
    maxSum = sum;
