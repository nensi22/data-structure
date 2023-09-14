#include<stdio.h>
int main()
{
    int a[10],i,l,p,v,temp;
    printf("Your array limit : ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("\ta[%d] : %d",i,a[i]);
    }

    printf("\nEnter a change a position number : ");
    scanf("%d",&p);
    printf("\nEnter value of change position : ");
    scanf("%d",&v);
    for(i=l;i>p;i--)
    {
       if(i>=p)
       {
        temp=i-1;
         a[i]=a[temp];
         //a[i]=temp;
       }
    }
    a[p]=v;
    printf("Your new array : \n ");
    for(i=0;i<=l;i++)
    {
        printf("\t a[%d] : %d ",i,a[i]);
    }

}