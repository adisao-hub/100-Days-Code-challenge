#include <stdio.h>

int main() {
    char str[200], longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
        i++;
    }

    // Copy the longest word into another string
    for (i = maxStart; i < maxStart + maxLen; i++) {
        longest[j++] = str[i];
    }
    longest[j] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
