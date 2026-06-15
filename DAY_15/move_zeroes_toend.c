#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 5};
    int n = 7;

    int j = 0;  // position to place next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with 0
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}

