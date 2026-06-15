#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int k = 2;   // number of positions to rotate left

    int temp[n];

    // Copy rotated elements into temp
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after left rotation by %d: ", k);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}