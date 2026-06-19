#include<stdio.h>
int main() 
{
   int a[10][10], b[10][10], c[10][10],i,j,m,n;
   printf("Enter the dimension of matrix");
   scanf("%d %d", &m , &n);

   printf("Enter 1st matrix :");
   for(i=0; i<m ; i++)
   {
     for(j=0 ; j<n; j++)
    {
        scanf("%d" , &a[i][j]);
    }
   }

   printf("Enter 2nd matrix :");
   for(i=0; i<m ; i++)
   {
     for(j=0 ; j<n; j++)
    {
        scanf("%d" , &b[i][j]);
    }
   }

   for(i=0; i<m ; i++)
   {
     for(j=0 ; j<n; j++)
    {
        c[i][j] = a[i][j] - b[i][j];
    }
   }

   printf("The subtraction matrix :\n");
   for(i=0; i<m ; i++)
   {
     for(j=0 ; j<n; j++)
    {
        printf("%d",c[i][j]);
    }
    printf("\n");
   }
     return 0;
} 