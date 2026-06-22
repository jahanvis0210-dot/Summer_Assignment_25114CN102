#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) 
    {
        for (int i = 0; str[i] != '\0'; i++) 
        {
            if (str[i] >= 'a' && str[i] <= 'z')
             {
                str[i] = str[i] - 32; // Convert to uppercase
            }
        }
        printf("Uppercase string: %s", str);
    }
    return 0;
}
