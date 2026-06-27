#include <stdio.h>
#include <string.h>

struct Employee {
    int Id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter Employee Id : ");
    scanf(" %d[^\n]", e.Id);

    printf("Enter Name : ");
    scanf("%f", &e.name);

    printf("Enter Salary : ");
    scanf("%f", &e.salary);

    

    printf("\n--- Employee Record ---\n");
    printf("Employee ID : %d\n",   e.Id );
    printf("Name        : %s\n",   e.name);
    printf("Salary       : %.2f\n", e.salary);

    return 0;
}