#include<stdio.h>
int main()
{
    int d,n,temp,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp==n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The given number is an Armstrong number.");
    }
    else
    {
        printf("The given number is not an Armstrong number.");
    }
    return 0;
}