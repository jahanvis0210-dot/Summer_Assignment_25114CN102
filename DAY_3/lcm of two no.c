#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("enter two numbers:");
     scanf("%d%d",&n1,&n2);

     if(n1>n2)
        {
            max=n1;
        }
        else{
            max=n2;
        }
        while(1)
        {
            if(max%1==0 && max%2==0){
                printf("The LCM of the given numbers is: %d",max);
                break;
            }
            else{
                max++;
            }
        }
    }