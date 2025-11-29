#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpaceIndex = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    // Find the last space (before surname)
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            lastSpaceIndex = i;
        }
    }

    // Print initials for first and middle names
    printf("Result: ");
    for(i = 0; i <= lastSpaceIndex; i++) {
        if(i == 0 || (name[i-1] == ' ' && name[i] != ' ')) {
            printf("%c.", name[i]);
        }
    }

    // Print the surname in full
    printf(" %s\n", &name[lastSpaceIndex + 1]);

    return 0;
}
