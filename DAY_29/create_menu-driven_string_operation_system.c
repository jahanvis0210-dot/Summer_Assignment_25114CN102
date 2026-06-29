#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int ch;

    printf("Enter a string: ");
    gets(s);

    while (1) {
        printf("\n1. Display\n2. Length\n3. Reverse\n4. Copy\n5. Exit\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("String: %s\n", s);
                break;
            case 2:
                printf("Length: %d\n", strlen(s));
                break;
            case 3: {
                int i, j, len;
                char r[100];
                len = strlen(s);
                for (i = 0, j = len - 1; i < len; i++, j--) {
                    r[i] = s[j];
                }
                r[len] = '\0';
                printf("Reversed: %s\n", r);
                break;
            }
            case 4: {
                char c[100];
                strcpy(c, s);
                printf("Copied: %s\n", c);
                break;
            }
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
