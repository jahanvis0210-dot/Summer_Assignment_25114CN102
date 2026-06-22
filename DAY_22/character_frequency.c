#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[200] = {0}, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);
    
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    
    printf("Character Frequencies:\n");
    for (i = 0; i < 200; i++) {
        if (freq[i] != 0 && i != '\n') {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}