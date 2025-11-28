#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers of digits
    temp = num;
    while(temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /
