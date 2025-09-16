#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[200];
    int vowelCount = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Optional: remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = tolower(input[i]); // make it case-insensitive
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
