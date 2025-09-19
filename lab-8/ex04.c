#include <stdio.h>
#include <math.h>

int countVowels(char str[]) {
    int count = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    char str[100];
    
    printf("Input: ");
    scanf("%[^\n]", str);
    
    printf("Output: Number of vowels: %d\n", countVowels(str));
    
    return 0;
}