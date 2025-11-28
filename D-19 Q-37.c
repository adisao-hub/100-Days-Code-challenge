#include <stdio.h>

int main() {
    int a, b, temp1, temp2, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp1 = a;
    temp2 = b;

    // Calculate HCF using Euclidean algorithm
    while(temp2 != 0) {
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }

    hcf = temp1;

    // Calculate LCM
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
