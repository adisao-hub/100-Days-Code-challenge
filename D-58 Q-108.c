#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Brute force approach: nested loops
    for(i = 0; i < n; i++) {
        int prod = 1;
        for(j = 0; j < n; j++) {
            if(i != j) {
                prod *= nums[j];
            }
        }
        answer[i] = prod;
    }

    // Print the answer array
    printf("Answer array: ");
    for(i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
