#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, n, flag = 1;

    printf("Enter string: ");
    scanf("%s", str);
    n = strlen(str);

    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            flag = 0;
            break;
        }
    }

    printf("%s is %s palindrome\n", str, flag ? "a" : "not a");
    return 0;
}