#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually
    while(str[length] != '\0') {
        length++;
    }
    length--; // To ignore '\n' from fgets

    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
