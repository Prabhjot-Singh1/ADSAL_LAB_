#include <stdio.h>
#include <string.h>

int isPalindromeString(int num) {
    char str[20];  // Enough for 64-bit int
    sprintf(str, "%d", num);

    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
            return 0;  // Not palindrome
        start++;
        end--;
    }
    return 1;  // Palindrome
}

int main() {
    int num;
    printf("Enter an ID number: ");
    scanf("%d", &num);

    if (isPalindromeString(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is NOT a palindrome.\n", num);

    return 0;
}
