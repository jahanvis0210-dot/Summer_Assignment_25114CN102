#include<stdio.h>
int main()
{
    int x,n,result=1;
    printf("Enter the base number:");
    scanf("%d",&x);
    printf("Enter the exponent:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%d raised to the power %d is:%d",x,n,result);
    return 0;
}
