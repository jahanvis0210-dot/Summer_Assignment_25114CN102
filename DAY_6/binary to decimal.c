#include<stdio.h>
int main()
{
    int n;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    printf("Binary equivalent of %d is: ",n);
    for(int i=31;i>=0;i--)
    {
        int k=n>>i;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}