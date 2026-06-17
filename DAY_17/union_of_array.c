#include <stdio.h>

int main() {
    int n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    printf("Union: ");

    // Print all elements of arr1
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    // Print elements of arr2 not in arr1
    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            printf("%d ", arr2[i]);
    }

    printf("\n");
    return 0;
}