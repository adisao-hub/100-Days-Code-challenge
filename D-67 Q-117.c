#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter elements of first sorted array: ");
    for(i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter elements of second sorted array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    i = 0; j = 0; k = 0;

    // Merge arrays
    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements
    while(i < m) merged[k++] = arr1[i++];
    while(j < n) merged[k++] = arr2[j++];

    // Print merged array
    printf("Merged sorted array: ");
    for(i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

