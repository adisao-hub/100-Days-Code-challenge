#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // last digit
    digits = (int)log10(num); // number of digits - 1
    first = num / pow(10, digits); // first digit

    // Swap first and last
    swapped = last * pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
