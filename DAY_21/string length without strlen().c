#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Calculate length
        while (str[length] != '\0') {
            length++;
        }
        
        // Remove trailing newline character if read by fgets
        if (length > 0 && str[length - 1] == '\n') {
            str[length - 1] = '\0';
            length--;
        }

        printf("The length of the string is: %d\n", length);
    }

    return 0;
}
