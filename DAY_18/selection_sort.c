#include <stdio.h>

int main() {
    int i, a[50], j, n, temp;
    
    printf("Enter no of element: ");
    scanf("%d", &n);

    printf("Enter array");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Selection Sort Logic
    for (i = 0; i < n - 1; i++) {
        for (j = i+1; j < n ; j++) {
            if (a[i] > a[j]) 
            {
                a[i] = temp;
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", a[i]);
    }
    
    return 0;
}