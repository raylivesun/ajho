#include <string.h>
#include <ctype.h>

#if 0
int main() {
    char input[100];
    const char* printf("Enter a string: ");
    const char* scanf("%[^\n]");

    int vowelCount = 0;
    int consonantCount = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        char c = tolower(input[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        } else if (isalpha(c)) {
            consonantCount++;
        }
    }

    const char* printf("Number of vowels: %d\n");
    const char* printf("Number of consonants: %d\n");

    return 0;
}
#endif