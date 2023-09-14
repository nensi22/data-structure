//stake programme
#define size 5
#include<stdio.h>

int a[size],val,pos=-1,x,p,i;

int first_insert(int n)
{
    if((pos+1)>=size)
    {
        printf("\n Array is full....!");
    }
    else
    {
        for(i=(size-1);i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=n;
        ++pos;
    }
}
int first_delete()
{
    if(pos==-1)
    {
    printf("\nArray is empty....!");
    }
        // x=a[0];

    for(i=1;i<size;i++)
    {
      a[i-1]=a[i];
    }
    // x=a[pos];
  //  printf("Element %d is delete at %d position \n",x,pos-1);
    // a[pos]=-1;
    --pos; 
}

int last_insert(int n)
{
    if((pos+1)>=size)
    {
        printf("\n Array is full....!");
    }
    else
    {
        a[++pos]=n;
    }
}
int last_delete()
{
    if(pos==-1)
    {
         printf("\n Array is empty....!");
    }
    else 
    {   x=a[pos];
        a[pos]=-1;
        printf("Element %d is delete at %d position \n",x,pos);
        --pos;
    } 
}
int middle_insert(int index,int n)
{
     if(index>(size-1))
     {
     printf("Please vadil kak joy ne index nakho....!");
     }
     else
     {
        for(i=(pos+1);i>=index;i--)
        {
            a[i]=a[i-1];
        }
        a[index]=n;
     }
}
int middle_delete(int index)
{
     if(index>(size-1))
     {
     printf("Please vadil kak joy ne index nakho....!");
     }
     else
     {
        for(i=index;i<pos;i++)
        {
            a[i]=a[i+1];
        }
        a[pos]=-1;
        --pos; 
     }
}
int array_print()
{
    for(i=0;i<=pos;i++)
    {
        if(!(a[i]==-1))
        printf("\na[%d] = %d",i,a[i]);
    }
}

int main()
{  
    int ch;

    printf("1. Front Insert Element \n2. Last Insert Elemente \n3. Front Delete Elemente \n4. Last Delete Elemente \n5. Middle Insert Element\n6. Middle Delete Element \n7. Show Array \n8. Exit \n\n");
   
    do
    {
    printf("\nEnter select Number : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
         printf("\n Enter Front Insert  Value : ");
         scanf("%d",&val);
         first_insert(val);
        break;
      
        case 2:
         printf("\n Enter Last Insert Value : ");
         scanf("%d",&val);
         last_insert(val);
        break;

        case 3:
         //printf("\n Enter Front delete Value : ");
         //scanf("%d",&val);
         first_delete();
        break;

        case 4:
        // printf("\n Enter Last delete Value : ");
        //scanf("%d",&val);
         last_delete();
        break;

        case 5:
         printf("\n Enter Insert position number :" );
         scanf("%d",&p);
         printf("\n Enter Middle Insert Value : ");
         scanf("%d",&val);
         middle_insert(p,val);
        break;

        case 6:
         printf("\n Enter delete position number :" );
         scanf("%d",&p);
         middle_delete(p);
        break;

        case 7:
         printf("***** Your Array *****");
         array_print();
        break;

        case 8:
         return 0;
        break;

      default:
        printf("Your choise Wrong......!");
    }
  }while(!(ch==8));
}