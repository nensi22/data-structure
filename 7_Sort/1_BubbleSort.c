#include<stdio.h>
#define n 8
int a[n],i,j;
int temp=0;
void bubble_sort(int a[])
{
    for ( i=0;i<n;i++)
    {
        printf("enter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    // for(i=0;i<n;i++)
    // {
    //     printf("\n a[%d]== %d",i,a[i]);
    // }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            // if(a[j]>a[j+1])
            // {
            //     temp=a[j];
            //     a[j]=a[j+1];
            //     a[j+1]=temp;
            // }
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n\n");
    printf("\n\n Sorted Array...");

    for(j=0;j<=n-1;j++)
    {
        printf("\na[%d]== %d",j,a[j]);
    }
}

int main()
{
    bubble_sort(a);
    // for ( i=0;i<n;i++)
    // {
    //     printf("enter a[%d]= ",i);
    //     scanf("%d",&a[i]);
    // }
    // for(i=0;i<n;i++)
    // {
    //     printf("\n a[%d]== %d",i,a[i]);
    // }
    // bubble_sort(a);
    // printf("\n\n Sorted Array...");
    // for(j=0;j<=n-1;j++)
    // {
    //     printf("\na[%d]== %d",j,a[j]);
    // }
}
