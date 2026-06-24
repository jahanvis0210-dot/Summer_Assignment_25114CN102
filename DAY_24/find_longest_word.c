#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    if (j > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
