#include <stdio.h>

int main() {
    int n, k, i, j;

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

    printf("Maximum elements in each subarray of size %d: ", k);

    // Brute-force approach
    for(i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(j = i + 1; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
6060
