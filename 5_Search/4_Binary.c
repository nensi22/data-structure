#include<stdio.h>
// # define size 10
int a[]={11,22,33,44,55,66,77,88,99,100};
int mid;
int i,x;
int lb,ub;

int binary_search()
{
    printf("\n Enter search element=");
    scanf("%d",&x);
    lb=0;
    ub=9;
    mid=(lb+ub)/2;
    while(lb<=ub)
    // for(i=lb;i<=ub;i++)
    {
        // mid=(lb+ub)/2;
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
    //  return -1;
    }
}
int main()
{
    
    for(i=0;i<10;i++)
    {
        printf("\n %d ",a[i]);
    }
    binary_search();
    
    
}

