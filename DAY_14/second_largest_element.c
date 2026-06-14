#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 41, 31, 10};
    int n = 6;

    int largest = arr[0], second = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", second);

    return 0;
}