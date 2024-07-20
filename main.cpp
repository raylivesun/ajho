#include <string.h>
#include <stdio.h>

int main() {
    char input_string[100];
    int vowels = 0;

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    // Remove newline character from input string
    input_string[strcspn(input_string, "\n")] = '\0';

    // Convert input string to lowercase
    for (int i = 0; input_string[i]; i++) {
        input_string[i] = (input_string[i]);
    }

    // Count vowels
    for (int i = 0; input_string[i]; i++) {
        if (input_string[i]) {
            vowels++;
        }
        else if (input_string[i] == 'y') {
            // If 'y' is followed by a vowel, it is not a vowel
            if (i + 1 < strlen(input_string) &&
                (input_string[i + 1])) {
                continue;

                // If 'y' is not followed by a vowel, it is a vowel
                } else {
                    vowels++;
                }
            }
            else {
                vowels++;
            }

            // Check for consecutive vowels
            if (i > 0 && input_string[i] == input_string[i - 1]) {
                vowels--;
            }
        }
        printf("Number of vowels: %d\n", vowels);
        return 0;
}

