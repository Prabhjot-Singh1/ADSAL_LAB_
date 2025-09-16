#include <stdio.h>

int isPalindromeNumber(int num) {
    if (num < 0) return 0; // Negative numbers not palindrome

    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindromeNumber(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is NOT a palindrome.\n", num);

    return 0;
}
