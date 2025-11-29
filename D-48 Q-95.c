#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths differ → not rotation
    if(strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Create a new string by doubling str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 exists inside the doubled string
    if(strstr(temp, str2) != NULL)
        printf("Strings are rotations of each other.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}
