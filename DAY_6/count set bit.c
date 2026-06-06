#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    printf("Number of set bits in the given number is:%d",count);
    return 0;
}