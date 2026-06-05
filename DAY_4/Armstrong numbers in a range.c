#include<stdio.h>
int main()
{
    int low, high;
    printf("Enter range(low high):");
    scanf("%d%d",&low,&high);
    
    printf("Armstrong numbers between %d and %d:\n", low, high);

    for(int i=low;i<=high;i++)
    {
        int a= i/100;
        int b= (i/10)%10;
        int c= i%10;
        
        if(a*a*a + b*b*b + c*c*c == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
