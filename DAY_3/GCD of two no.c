#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("The GCD of the given numbers is: %d",gcd(a,b));
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}