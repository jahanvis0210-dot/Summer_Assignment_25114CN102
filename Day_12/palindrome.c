#include <stdio.h>

int isPalindrome(int n) {
    int original = n, rev = 0, d;

    while (n > 0) {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    return (original == rev);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is Not a Palindrome\n", n);

    return 0;
}