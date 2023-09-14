#include<stdio.h>
#include<stdlib.h>
int n;
void print(int A[])
{
    int i;
    printf("\n ");
    for(int i=0;i<n;i++)
    printf(" %d ",A[i]);
    printf("\n ");
}
void qiuck_sort(int A[],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        // printf("\n inside Quick ");
        print(A);

        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(A[i]<=A[pivot] && i<=last)
                i++;
            while(A[j]>A[pivot])
                j--;
            
            if(i<j)
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    
        temp=A[pivot];
        A[pivot]=A[j];
        A[j]=temp;
        qiuck_sort(A,first,j-1);
        qiuck_sort(A,j+1,last);
    }
}

int main()
{
    int i,A[25];
    printf("\n How Many Element =");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        A[i]=(rand()%100+1);
        // printf("\n %d",A[i]);
        // printf("enter A[%d]= ",i);
        // scanf("%d",&A[i]);
        
    print(A);
    qiuck_sort(A,0,n-1);
    print(A);

    return 0;
}