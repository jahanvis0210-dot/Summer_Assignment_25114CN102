#include <stdio.h>
#include <string.h>

struct Book {
    int Id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b;

    printf("Enter Book Id : ");
    scanf(" %d", &b.Id);

    printf("Enter Book Title : ");
    scanf("%s", b.title);

    printf("Enter book author : ");
    scanf("%s", b.author);

    

    printf("\n--- Employee Record ---\n");
    printf("Book ID  : %d\n",   b.Id );
    printf("Title    : %s\n",   b.title);
    printf("Author   : %s\n", b.author);

    return 0;
}