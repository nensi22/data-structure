//pattern 
#include<stdio.h>
int n;
int a[0],i;
void printarray(int n) 
{ 
    a[i]=n;
    for(int j=0;j<=i;j++)
    {
        printf("%d\t",a[j]);
    }
    printf("\n");

}

int delete()
{
    for(int i=4;i>=0;i--)
    {
    printarray(0);
    }

}
int insert()
{
    
    printf("Enter your array size : ");
    scanf("%d",&n);
    
     for(i=0;i<n;i++)
   {
     printf("Enter a[%d] : ",i);
     scanf("%d",&a[i]);
   }

   for(i=0;i<n;i++)
   {
    printarray(a[i]);
   }
   
}

int main()
{
  insert();
  delete();
   
}