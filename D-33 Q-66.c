#include <stdio.h>

int main() {
    int arr[100], n, i, element, pos;

    printf("Enter number of elements (sorted order): ");
    scanf("%d", &n);

    printf("Enter elements of the sorted array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the position where the element should be inserted
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
