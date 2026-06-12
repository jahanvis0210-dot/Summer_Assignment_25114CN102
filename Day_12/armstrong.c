#include <stdio.h>

int isArmstrong(int n) {
    int original = n, sum = 0, d;

    while (n > 0) {
        d = n % 10;
        sum = sum + d * d * d;
        n = n / 10;
    }

    return (sum == original);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is Not an Armstrong number\n", n);

    return 0;
}