#include <stdio.h>

int main() {
    int a[100], n = 0, ch, x, i;

    while (1) {
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Search\n5. Exit\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                for (i = 0; i < n; i++)
                printf("%d ", a[i]);
                printf("\n");
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &x);
                a[n++] = x;
                break;
            case 3:
                if (n > 0) {
                    printf("Enter index: ");
                    scanf("%d", &i);
                    for (; i < n - 1; i++) 
                    a[i] = a[i + 1];
                    n--;
                } else
                     printf("Array is empty\n");
                break;
            case 4:
                printf("Enter value: ");
                scanf("%d", &x);

                for (i = 0; i < n; i++) 
                if (a[i] == x) 
                { printf("Found at %d\n", i); 
                    break; }
                if (i == n) 
                printf("Not found\n");
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
