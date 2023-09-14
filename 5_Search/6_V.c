#include<stdio.h>
int a[10],i,x,n;
int search(int x)
{
    for(i=0;i<10;i++)
    {
        if(x == a[i])
        {
            return i+1;
            break;
        }
    }return -1;
}
int main()
{
    int ch;
    for(i=0;i<10;i++)
    {
        a[i]=rand()%10;
    }
    for(i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n1. serch : \n2. Exit");
    do
    {
    printf("\nEnter a choise : ");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:
          printf("\nEnter a serch value : ");
           scanf("%d",&x);
           n =search(x);
           if(!(n<=0))  
           {  
           printf("\nYour serch value position : %d ",n);
           }
           else
           {
               printf("Not Found....!");
           }
        break;

        case 2:
          return 0;
         break;

        default:
          printf("\nYour choise wrong....!");
    }
    }while(!(ch==2));
}