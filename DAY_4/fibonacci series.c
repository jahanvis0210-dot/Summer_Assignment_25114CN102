#include<stdio.h>
int main()
{
    int n,x;
    int x=0;
    int y=1;
     printf("enter no of terms");
     scanf("%d",&n);
     
     for(int i=0; i<=n; i++);
     {
         printf("%d ",x);
         int z=x+y;
         x=y;
         y=z;
     }
    return 0;
}
