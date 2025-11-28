#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;  // To handle if k > n

    // Store last k elements in temp array
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Put back temp elements to the beginning
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation:\n");
    for(i = 0
