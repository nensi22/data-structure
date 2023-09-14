#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n],i,x,j;
int lb,ub,mid;
int temp=0;
void print(int a[])
{
    // printf("\n posit : ");
    // for(int  j=0;j<=10-1;j++)
    // {
     
    //     printf("\t %d",j+1);
    // }
    printf("\n Array : ");
    for(int  j=0;j<=n-1;j++)
    {

        printf("\t%d",a[j]);
    }

}
int linear_search(int element)
{
    for(i=0;i<n;i++)
    {
        if(element == a[i])
        {
            printf("\n linear search %d is found at array %d ",element,i+1 );
            return i+1;
        }
        
    }
    return -1;
}
void bubble_sort(int a[])
{
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            // print(a);
        }
    }
     print(a);
}
int binary_search(int a[])
{
    // bubble_sort(a);
    printf("\n Enter search element=");
    scanf("%d",&x);
    lb=0;
    ub=9;
    mid=(lb+ub)/2;
    while(lb<=ub)
    {
        if(x==a[mid])
        {
            printf("\n number %d at found position %d",x,mid+1) ;
            return mid+1;
            break;
        }
        else if (x>a[mid])
        {
            lb=mid+1;        
        }
        else
        {
            ub=mid-1;
        } 
        mid=(lb+ub)/2;           
    }
}

int main()
{
    for(i=0;i<n;i++)
    {
        a[i]=rand()%99+1;
    }
    print(a);
    // bubble_sort(a);
    // print(a);
    // binary_search(a);
    // print(a);
 
    int ch;
    printf("\n 1 . Linear Search ");
    printf("\n 2 . Bubble Sort ");
    printf("\n 3 . Binary Search ");
    printf("\n 4 . Print Array");
    printf("\n 0 . Exit \n");
    do
    {
        printf("\n Enter your choice =");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter a serch value : ");
            scanf("%d",&x);
            linear_search(x);
            break;
        
        case 2:
            bubble_sort(a);
            break;

        case 3:
            binary_search(a);
            break;
        case 4:
            print(a);
            break;

        case 0:
            printf("\n your choice envalid try again....\n\n");
            break;
        }
    } while (ch!=0);
   
}