#include <stdio.h>

#define MAX_STUDENTS 3
#define NAME_LEN 50

int main() {
    int i;
    int roll[MAX_STUDENTS];
    char name[MAX_STUDENTS][NAME_LEN];
    float marks[MAX_STUDENTS];

    printf("Enter details for %d students:\n", MAX_STUDENTS);

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%49s", name[i]);
        printf("Roll No: ");
        scanf("%d", &roll[i]);
        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Record System\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("%d. Name: %s | Roll No: %d | Marks: %.2f\n",
               i + 1, name[i], roll[i], marks[i]);
    }

    return 0;
}
