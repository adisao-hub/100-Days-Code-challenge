#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch); // convert to lowercase for easy check

    if ((ch >= 'a' && ch <= 'z')) {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            printf("%c is a Vowel\n", ch);
        else
            printf("%c is a Consonant\n", ch);
    } else {
        printf("Not an alphabet character!\n");
    }

    return 0;
}
