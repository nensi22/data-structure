#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i,j;
   for(int i=4;i>=0;i--)
    {
      for(int j=0;j<=i;j++)
    {
        printf("%d\t",a[j]);
    }
    printf("\n");
    }
    return 0;
}