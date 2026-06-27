#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char dept[50];
    float basic;
};

int main() {
    struct Employee e;

    printf("Enter ID         : ");
    scanf("%d", &e.id);

    printf("Enter Name       : "); 
    scanf(" %49[^\n]", e.name);

    printf("Enter Department : ");
    scanf(" %49[^\n]", e.dept);

    printf("Enter Basic Pay  : ");
    scanf("%f", &e.basic);

    float hra = e.basic * 0.20;
    float da  = e.basic * 0.10;
    float tax = e.basic * 0.05;
    float net = e.basic + hra + da - tax;

    printf("\n--- Salary Slip ---\n");
    printf("ID         : %d\n",    e.id);
    printf("Name       : %s\n",    e.name);
    printf("Department : %s\n",    e.dept);
    printf("Basic Pay  : %.2f\n",  e.basic);
    printf("HRA (20%%) : %.2f\n",  hra);
    printf("DA  (10%%) : %.2f\n",  da);
    printf("Tax  (5%%) : %.2f\n",  tax);
    printf("Net Salary : %.2f\n",  net);

    return 0;
}