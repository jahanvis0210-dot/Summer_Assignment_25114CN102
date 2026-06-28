#include <stdio.h>

int main() {
    float balance = 1000.0, amount;
    int choice;

    printf("1. Deposit\n2. Withdraw\nChoose: ");
    scanf("%d", &choice);
    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1)
        balance += amount;
    else
        balance -= amount;

    printf("Updated balance: %.2f\n", balance);
    return 0;
}
