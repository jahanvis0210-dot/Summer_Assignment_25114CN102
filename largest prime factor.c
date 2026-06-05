#include<stdio.h>
int main()
{
    int long n, largest_factor = 0;
    printf("Enter a number:");
    scanf("%ld", &n);
    for (int long i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            largest_factor = i;
        }
    }
    printf("The largest prime factor of %ld is %ld", n, largest_factor);
    return 0;
}

