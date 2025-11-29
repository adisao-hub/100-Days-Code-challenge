#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator '\0'
    while (str[count] != '\0') {
        count++;
    }

    // fgets stores '\n' also, so remove it from count if present
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Total characters: %d\n", count);

    return 0;
}
