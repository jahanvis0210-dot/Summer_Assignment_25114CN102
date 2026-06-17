#include <stdio.h>

int main() {
    int i, a[50], j, n, temp;
    
    printf("Enter element: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
     }
    
    // Bubble Sort Logic
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) 
            {
                a[j] = temp ;
                a[j] = a[j + 1];
                a[j + 1] = temp;
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