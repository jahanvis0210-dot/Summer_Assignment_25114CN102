#include<stdio.h>
int main()
{
  int a[50],i,n,ele,loc=-1;
printf("Enter no of elements in array :");
scanf("%d", &n);

printf("Enter %d elements \n ",n);
for (i=0;i<n;i++){

scanf("%d", &a[i]);
}

printf("Enter elements to find");
scanf("%d", &ele);
for (i=0;i<n;i++)
{
    if (a[i]==ele)
    {
       loc=i+1;
       break;
    }
}
    if (loc ==-1){
        printf("unsuccessful search\n");
    }
    else{
        printf("Element found at %d loaction",loc);
    }
return 0;     
}
