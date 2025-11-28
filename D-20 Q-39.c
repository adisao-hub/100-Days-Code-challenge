#include <stdio.h>

int main() {
    int num, remainder, product = 1, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    while(num != 0) {
        remainder = num % 10;
        if(remainder % 2 != 0) { // check if digit is odd
            product *= remainder;
            flag = 1; // indicates at least one odd digit
        }
        num /= 10;
    }

    if(flag)
        printf("Product of odd digits of %d = %d\n", original, product);
    else
        printf("No odd digits in %d\n", original);

    return 0;
}
