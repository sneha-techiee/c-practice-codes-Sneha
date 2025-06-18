// Count vowels, consonants, and digits in a string
#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int i, vowelcount = 0, consonantcount = 0, digits = 0;

    printf("Enter the word: ");
    scanf("%s", string);

    printf("So the word is: %s\n", string);

    for (i = 0; string[i] != '\0'; i++) {
        char ch = tolower(string[i]);  // handles uppercase too

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelcount++;
        } 
        else if (ch >= 'a' && ch <= 'z') {
            consonantcount++;
        } 
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
    }

    printf("Consonant count is: %d\n", consonantcount);
    printf("Vowel count is: %d\n", vowelcount);
    printf("Digits are: %d\n", digits);

    return 0;
}
