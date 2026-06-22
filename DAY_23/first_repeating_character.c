#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i]; i++)
        freq[(int)str[i]]++;

    for (i = 0; str[i]; i++) {
        if (freq[(int)str[i]] > 1) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found\n");
    return 0;
}