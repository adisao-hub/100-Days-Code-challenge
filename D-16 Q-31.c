#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while(
