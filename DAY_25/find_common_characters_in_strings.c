#include <stdio.h>
#include <limits.h>

int main() {
    char *s[] = {"bella", "label", "roller"};
    int n = 3, freq[26], t[26];

    for (int c = 0; c < 26; c++) freq[c] = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int c = 0; c < 26; c++) t[c] = 0;
        for (int j = 0; s[i][j]; j++) t[s[i][j] - 'a']++;
        for (int c = 0; c < 26; c++) if (t[c] < freq[c]) freq[c] = t[c];
    }

    printf("Common: ");
    for (int c = 0; c < 26; c++)
        while (freq[c]--) printf("%c ", 'a' + c);

  return 0;      
}