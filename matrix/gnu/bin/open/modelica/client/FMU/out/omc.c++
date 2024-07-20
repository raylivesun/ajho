#include <string.h>
#include <ctype.h>
#include <assert.h>


// Function to check if a given string is a palindrome
bool isPalindrome(const char* str) {
    int len = strlen(str);

    // Iterate through the string from both ends
    for (int i = 0; i < len / 2; ++i) {
        // Ignore non-alphanumeric characters and convert to lowercase
        char c1 = tolower(str[i]);
        char c2 = tolower(str[len - 1 - i]);

        // If characters at the current positions are not equal, return false
        if (c1 != c2) {
            return false;
        }
    }

    // If all characters are equal, return true
    return true;
}


int main() {
    // Test cases
    const char* testCases[] = {
        "A man, a plan, a canal: Panama",
        "Was it a car or a cat I saw?",
        "Hello, world!",
        "racecar",
        "12321",
        "Able, was I ere I saw Elba",
        "not a palindrome",
        "",
        "   ",
        "A man, a plan, a canal: Panama   "
    };

    for (const char* str : testCases) {
        bool isPalindromeResult = isPalindrome(str);
        const char* printf("Is \"%s\" a palindrome? %s\n");
    }

    return 0;
}
