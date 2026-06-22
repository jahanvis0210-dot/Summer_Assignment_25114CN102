#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int v = 0, c = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
        else if (isalpha(ch)) c++;
    }

    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}