#include<stdio.h>
int a[5]={11,22,33,44,55},x,i;
int linear_search()
{
    
    printf("\n\n");
    printf("Enter a serch value : ");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        if(x == a[i])
        {
            printf("\n%d ",i+1);
        }
    //    else
    //    {
    //        printf("\n Not found....!");
    //    }
    }
    return 0;
}
int main()
{
    for(i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }
    linear_search();
}