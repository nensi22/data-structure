#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[]={5,4,3,2,1};
void printarray(int a[])
{
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void bubble_sort(int arr[])
{
    int i,j,key;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                key = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = key;
            }
        }
    }
        printarray(arr);
}
void selection_sort(int arr[])
{
    int i,j,key;
 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[j+1])
            {
                key = arr[i];
                arr[i] = arr[j];
                arr[j] = key;
            }
        }
    }
        printarray(arr);
}
int main()
{
  //  int a[10],min=10,max=101,val;
    //for(int i=0;i<n;i++)
      //  a[i]=(rand()%(max-min+1))+min;
    printarray(a);

    printf("\n selection sort");
    selection_sort(a);
    printf("\n nensi and janki ");
    bubble_sort(a);
}