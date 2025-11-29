#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("All substrings are:\n");

    // Generate all substrings
    for(i = 0; i < len; i++) {          // starting index
        for(j = i; j < len; j++) {      // ending index
            for(k = i; k <= j; k++) {   // print characters from i to j
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
