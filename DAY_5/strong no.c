#include<stdio.h>
int main()
{
    int n,sum=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>n)
    {
        printf("%d is a strong number",n);
    }
    else
    {
        printf("%d is not a strong number",n);
    }
    return 0;
}