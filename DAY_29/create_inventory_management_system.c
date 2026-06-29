#include <stdio.h>
struct Item {
     int id; 
     char name[20]; 
     int qty;
    };
int main(){
    struct Item items[100];
    int n=0,ch,id,i;
    while(1){
        printf("\n1.Add\n2.Display\n3.Search\n4.Exit\nChoice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("ID: ");
            scanf("%d",&items[n].id);
            printf("Name: ");
            scanf("%s",items[n].name);
            printf("Qty: "); 
            scanf("%d",&items[n].qty); n++;
            break;

            case 2: if(n==0) 
            printf("Empty\n"); 
            else 
            for(i=0;i<n;i++) 
            printf("%d %s %d\n",items[i].id,items[i].name,items[i].qty); 
            break;

            case 3: printf("ID: "); 
            scanf("%d",&id); 
            for(i=0;i<n;i++)
             if(items[i].id==id)
                {printf("Found %s %d\n",items[i].name,items[i].qty); 
                break;} 
            if(i==n) 
                printf("Not found\n"); 
                break;

            case 4: 
            return 0;
            default: printf("Invalid\n");
        }
    }
}
