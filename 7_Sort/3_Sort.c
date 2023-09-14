#include<stdio.h>
#define n 8
int a[n],i,j;
int temp=0;
void bubble_sort(int a[])
{
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
}

void selection_sort(int a[])
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void printarray(int a[])
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    } 
}

int main()
{
    int ch;
    for(i=0;i<=n;i++)
    {
        a[i]=rand()%99+1;
        // printf("\t %d",rand()%10);

    }
    for(i=0;i<=n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n1. Bubble Sort");
    printf("\n2. Selection Sort");
    printf("\n3. Display");
    printf("\n0. Exit");
    do
    {
        printf("\n Enter your choice =");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            bubble_sort(a);
            break;
        
        case 2:
            selection_sort(a);
            break;

        case 3:
            printarray(a);
            break;

        case 0:
            printf("\n your choice envalid try again....\n\n");
            break;
        }
    } while (ch!=0);
}
