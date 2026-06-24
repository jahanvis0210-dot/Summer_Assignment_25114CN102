#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0;
    int seen[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            result[k++] = str[i];
        }
    }

    result[k] = '\0';
    printf("String after removing duplicates: %s\n", result);

    return 0;
}
