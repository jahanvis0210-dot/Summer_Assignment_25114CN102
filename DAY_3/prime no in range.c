#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the range:");
    scanf("%d%d",&m,&n);

    for(int i=m; i<=n; i++){
        int c=0;

        if(i<2)
            continue;

        for(int j=2; j<i; j++){
            if(i%j==0){
                c=++;
               
            }
        }
        if(c==0){
            printf("%d ",i);
        }
    }
      return 0;
}