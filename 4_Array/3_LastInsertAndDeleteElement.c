#include<stdio.h>
#define size 5
int pos;
int a[size];
int position=-1; 
int i,val;
void last_insert(int n)
{
    if(position>=size)
    {
        printf("\n Array is full");
    }
    else
    {
        a[++position]=n;
    }
}

void last_delete()
{
    int x;
    if(position<0)
    {
         printf("\n array is empty....\n");
    }
    else 
    {
        x=a[position];
        printf("Element %d is delete at %d position \n",x,position);
        position--;
    }   
}

void print_array()
{
    for(i=0;i<=position;i++)
    {
        printf("\n element at a[%d] = %d\n",i,a[i]);
    }
}

int main()
{
    int ch ,val;
    printf("\n 1 == Insert Last Element");
    printf("\n 2 == Delete Last Element");
    printf("\n 3 == Show array");
    printf("\n\n");
    do
    {       
        printf("Enter your choice==");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                printf("\n Enter Insert Last Value=");
                scanf("%d",&val);
                insert(val);       
                break;
        
            case 2:
                delete();
                break;

            case 3:
                print_array();
                break;

            case 0:
                printf("\n your choice envalid plz try again letter");
                break;
       
        }
    } while (ch!=0);
    
}