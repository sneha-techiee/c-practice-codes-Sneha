#include <stdio.h>

int main() {
    char string[100];
    int i, vowelcount = 0;

    printf("Enter any word: ");
    scanf("%s", string);

    printf("The word is: %s\n", string);

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
            string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
            string[i] == 'O' || string[i] == 'U') {
            vowelcount++;
        }
    }

    printf("Vowel count is: %d\n", vowelcount);

    return 0;
}


    



