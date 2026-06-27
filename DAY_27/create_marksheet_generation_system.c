#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, total;
    float percentage;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n--- Marksheet ---\n");
    printf("Name: %s\n", name);
    printf("Marks: %d, %d, %d\n", m1, m2, m3);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 75) {
        printf("Grade: B\n");
    } else if (percentage >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
