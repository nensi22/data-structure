//Find length of array
#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,5},i;
   // for(i=0;i<5;i++)
   // {
   //     printf("Enter a[%d]",i);
   //     scanf("%d",&a[i]);
   // }   
    for(i=0;i<10;i++)
    {
      if(!(a[i]==0))
      {
        printf("%d ",a[i]);
      }
      else
      {
        printf(" : %d",i);
        return 0;
      }

    }   
}