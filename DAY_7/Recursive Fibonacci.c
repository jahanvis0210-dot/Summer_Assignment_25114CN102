#include<stdio.h>
int fibbonacci(int);
int main()
{
    int i,n,result,fact;
    printf("Enter a number of terms:");
    scanf("%d",&n);

   for(int i=0;i<n;i++)
   {
    printf("%d is: %d",i,fibbonacci(i));
   }
    
    return 0;
}
int fibbonacci(int i)
{
    if(i == 0)
        return 0;
    if(i == 1)
        return 1;
    return fibbonacci(i - 1) + fibbonacci(i - 2);
}