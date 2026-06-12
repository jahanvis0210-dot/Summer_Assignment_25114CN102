#include <stdio.h>

// Function to print Fibonacci series
int fib(int n) {
    int i, first = 0, second = 1, next;

    printf("Fibonacci Series:\n");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf("%d ", next);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fib(n);  // Calling the function

    return 0;
}