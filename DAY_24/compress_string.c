#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, count = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    while (str[i] != '\0') {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
        i++;
    }

    printf("\n");
    return 0;
}
