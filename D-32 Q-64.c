#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int digit, maxFreq = 0, mostDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    long long temp = num;
    if (temp < 0) temp = -temp; // Handle negative numbers

    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", mostDigit);
    printf("Frequency: %d times\n", maxFreq);

    return 0;
}
