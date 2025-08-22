#include <stdio.h>

int main() {
    char ch;
    int i, vowel = 0, nonVowel = 0;

    printf("Enter 10 lowercase characters:\n");

    for (i = 0; i < 10; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &ch); 

        if (ch == 'a' || ch == 'e' || ch == 'i'  || ch == 'o'  || ch == 'u')
        {
            vowel++;
        } else {
            nonVowel++;
        }
    }

    printf("\nNumber of vowels: %d\n", vowel);
    printf("Number of non-vowels: %d\n", nonVowel);

    return 0;
}