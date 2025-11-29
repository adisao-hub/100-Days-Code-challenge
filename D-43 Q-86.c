#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if exists
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = strlen(str) - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if(flag == 0)
        printf("\"%s\" is a Palindrome.\n", str);
    else
        printf("\"%s\" is NOT a Palindrome.\n", str);

    return 0;
}
