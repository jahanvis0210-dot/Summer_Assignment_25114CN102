#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)           // base case
        return 0;

    return (n % 10) + sumOfDigits(n / 10);  // recursive call
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits of %d is: %d\n", n, sumOfDigits(n));
    return 0;
}