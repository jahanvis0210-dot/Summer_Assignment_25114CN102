#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char temp[200];

    if (len1 != len2) {
        return 0;
    }

    if (len1 == 0) {
        return 1;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2)) {
        printf("The second string is a rotation of the first string.\n");
    } else {
        printf("The second string is not a rotation of the first string.\n");
    }

    return 0;
}
