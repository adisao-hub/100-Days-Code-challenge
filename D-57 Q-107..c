#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], pge[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find Previous Greater Element for each element
    for(i = 0; i < n; i++) {
        pge[i] = -1; // default if no greater element exists
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                pge[i] = arr[j];
                break; // first greater element on left
            }
        }
    }

    // Print output in comma-separated format
    printf("Previous Greater Elements: ");
    for(i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if(i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
