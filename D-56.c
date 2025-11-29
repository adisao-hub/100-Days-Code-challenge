#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], nge[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find Next Greater Element for each element
    for(i = 0; i < n; i++) {
        nge[i] = -1; // default if no greater element exists
        for(j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; // first greater element on right
            }
        }
    }

    // Print output in comma-separated format
    printf("Next Greater Elements: ");
    for(i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if(i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
