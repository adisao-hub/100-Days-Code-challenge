#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];
    int currSum = arr[0];

    for(i = 1; i < n; i++) {
        if(currSum < 0)
            currSum = arr[i];
        else
            currSum += arr[i];

        if(currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum sum of contiguous subarray: %d\n", maxSum);

    return 0;
}
