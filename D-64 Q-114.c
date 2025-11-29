#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, start = 0, maxLen = 0;
    int lastIndex[256]; // to store last index of each character

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // remove newline

    // Initialize all last indices as -1
    for(i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    for(i = 0; s[i] != '\0'; i++) {
        // If character was seen after start, move start
        if(lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1;
        }

        // Update last index of current character
        lastIndex[(int)s[i]] = i;

        // Update max length
        if(i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);

    return 0;
}

