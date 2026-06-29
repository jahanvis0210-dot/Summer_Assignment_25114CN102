#include <stdio.h>

int main() {
    int ch;
    float a, b;

    do {
        printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\nChoose: ");
        scanf("%d", &ch);

        if (ch == 5) break;

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (ch) {
            case 1: printf("Result: %.2f\n", a + b); break;
            case 2: printf("Result: %.2f\n", a - b); break;
            case 3: printf("Result: %.2f\n", a * b); break;
            case 4: 
            if (b != 0) 
            printf("Result: %.2f\n", a / b);
            else 
            printf("Cannot divide by zero\n"); 
            break;
            default: printf("Invalid choice\n");
        }
    } while (1);

    return 0;
}
