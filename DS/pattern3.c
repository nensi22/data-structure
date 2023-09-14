//pattern
#define n 10
#include<stdio.h>

int a[n],i,l,p,v;
int printarray() 
{
    for(int j=0;j<=i;j++)
    {
                                                                                      
       printf("%d ",a[j]);
    
    }
    printf("\n");

}
 int delete()
{ 
    for(i=(l-1);i>=0;)
    {
      --i;
      printarray();
    }

}
int insert()
{

   for(i=0;i<l;i++)
   {
    printarray();
   }
   
}

int main()
{   int ch;
    printf("Your array limit : ");
    scanf("%d",&l);

    for(i=0;i<l;i++)
    {
    printf("Enter a[%d] : ",i);
    scanf("%d",&a[i]);
    }
    
    printf("1. Show your array \n2. Change a value \n3. Insert pattern \n4. Delet pattern \n5. 3&4 both \n6. Exit");
   
    do
    {
    printf("\nEnter select Number : ");
    scanf("%d",&ch);

    switch(ch)
    {
      case 1:
      //printf("Your array : ");
          for(i=0;i<l;i++)
        {
            printf("\ta[%d] : %d",i,a[i]);
        }
        break;

      case 2:
         printf("\nEnter a change a position number : ");
         scanf("%d",&p);
         printf("\nEnter value of change position : ");
         scanf("%d",&v);
         for(i=l;i>p;i--)
         {
            if(i>=p)
            {
             int temp=i-1;
              a[i]=a[temp];
              //a[i]=temp;
            }
         }
         a[p]=v;
         break;

      case 3:   
        insert();
        break;

      case 4:
        delete();
        break;

      case 5:
        insert();
        delete();
        break;
      
      case 6:
        return 0;
      
      default:
        printf("Your choise Wrong......!");
    }
  }while(!(ch==6));
}