#include<stdio.h>
#define n 8
int a[n];
int temp=0;
int i,j;
void selection_sort(int a[])
{
    for(i=0;i<=n;i++)
    {
        printf("enter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\n");
    printf("\n\n Sorted Array...");

    for(i=0;i<=n-1;i++)
    {
        printf("\na[%d]== %d",i,a[i]);
    }
}
int main()
{
    selection_sort(a);
}