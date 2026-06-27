#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
    char grade;
};

char getGrade(float marks) {
    if (marks >= 80) return 'A';
    if (marks >= 60) return 'B';
    if (marks >= 40) return 'C';
    return 'F';
}

int main() {
    struct Student s;

    printf("Enter Roll Number : ");
    scanf("%d", &s.roll);

    printf("Enter Name        : ");
    scanf(" %49[^\n]", s.name);

    printf("Enter Marks       : ");
    scanf("%f", &s.marks);

    s.grade = getGrade(s.marks);

    printf("\n--- Student Record ---\n");
    printf("Roll Number : %d\n",   s.roll);
    printf("Name        : %s\n",   s.name);
    printf("Marks       : %.2f\n", s.marks);
    printf("Grade       : %c\n",   s.grade);

    if (s.grade == 'F')
        printf("Result      : FAIL\n");
    else
        printf("Result      : PASS\n");

    return 0;
}