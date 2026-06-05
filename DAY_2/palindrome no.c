#include<stdio.h>
int main()
{
    int n,temp,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp==n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("The given number is a palindrome.");
    }
    else
    {
        printf("The given number is not a palindrome.");
    }
    return 0;
}
