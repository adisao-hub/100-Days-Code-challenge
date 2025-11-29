#include <stdio.h>

int main() {
    int n, i, j;
    int majorityElement = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Count frequency of each element
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(nums[j] == nums[i])
                count++;
        }
        if(count > n / 2) {
            majorityElement = nums[i];
            break; // leftmost majority element
        }
    }

    printf("Majority element: %d\n", majorityElement);

    return 0;
}
