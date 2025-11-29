#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Count frequency of characters
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;
        else if(str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
        else if(str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
    }

    // Compare frequencies
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("The strings are NOT Anagrams.\n");
            return 0;
        }
    }

    printf("The strings are Anagrams.\n");
    return 0;
}
