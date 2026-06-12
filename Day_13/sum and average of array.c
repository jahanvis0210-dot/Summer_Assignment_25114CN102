#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    average = sum / 5.0f;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
