#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second_largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n < 2) {
        printf("Second largest element doesn't exist!");
        return 0;
    }

    // Initialize largest and second largest
    largest = second_largest = -999999;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if(second_largest == -999999) {
        printf("All elements are the same, no second largest!");
    } else {
        printf("Second largest element = %d", second_largest);
    }

    return 0;
}
