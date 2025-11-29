#include <stdio.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, wordStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] == ' ' || str[i] == '\n') {
            reverseWord(str, wordStart, i - 1);
            wordStart = i + 1;
        }
        i++;
    }

    printf("Result: %s", str);

    return 0;
}
