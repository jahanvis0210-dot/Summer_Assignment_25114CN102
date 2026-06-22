#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[]) {
    int freq[256] = {0};
    int i;

    // If lengths aren't equal, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char s1[] = "silent";
    char s2[] = "listen";

    if (isAnagram(s1, s2)) {
        printf("%s and %s are anagrams!\n", s1, s2);
    } else {
        printf("%s and %s are NOT anagrams.\n", s1, s2);
    }

    return 0;
}