#include <stdio.h>

int main() {
    int tickets = 10, book;

    printf("Available tickets: %d\n", tickets);
    printf("How many tickets do you want to book? ");
    scanf("%d", &book);

    if (book <= tickets) {
        tickets -= book;
        printf("Booking successful! Remaining tickets: %d\n", tickets);
    } else {
        printf("Not enough tickets available.\n");
    }

    return 0;
}
