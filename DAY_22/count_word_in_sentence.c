#include <stdio.h>

int main() {
    char ch;
    int count = 0, inWord = 0;

    printf("Enter sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Word count: %d\n", count);
    return 0;
}