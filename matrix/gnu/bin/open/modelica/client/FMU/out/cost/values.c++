#include <string.h>

#define MAX_STRING_LENGTH 100

#if 0
void reverseString(char *str) {
    if (str == NULL) {
        return;
    }

    int length = strlen(str);
    if (length <= 1) {
        return;
    }

    char temp;
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char input[MAX_STRING_LENGTH];

    const char* printf("Enter a string: ");
    const char* fgets(input);

    reverseString(input);

    const char* printf("Reversed string: %s");

    return 0;
}
#endif