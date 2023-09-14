#include<stdio.h>
#define size 5
int a[size];
int position=-1; 
int i;
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

void middle_insert(int inx,int val)
{
   
    if (inx>=size)
    {
        printf("\n array full\n");
    }
    
    else
    {
        for(i=position+1;i>inx;i--)
        {   
            a[i]=a[i-1];
            a[i-1]=a[i-2];
            printf("\t %d ",a[position]);
            // int temp=a[inx];
            // a[position+1]=a[position];
            // a[position]=temp;
            // a[inx]=val;
        }
        position+=1;
        a[inx]=val;
    }
    
}

void middle_delete(int pt)
{
    
    if(pt>=size)
    {
        printf("\n element deletion is not possible");
    }
    else
    {
        for(i=pt-1;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        position-=1;
    }
}

void front_insert(int v)
{
    
    if(position>=size)
    {
        printf("\n Array is full....!");
    }
    else
    {
        for(i=(size-1);i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=v;
        ++position;
    }
}   

void front_delete()
{
    
    if(position==-1)
    {
        printf("\nArray is empty....!");
    }
    else
    {
        for(i=1;i<size;i++)
        {
            a[i-1]=a[i];
        }
    }
    // x=a[pos];
  //  printf("Element %d is delete at %d position \n",x,pos-1);
    // a[pos]=-1;
    --position; 
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
    int n,in;
    int p;
    int vl;
    printf("\n 1 == Insert Last Element");
    printf("\n 2 == Delete Last Element");
    printf("\n 3 == Insert Middle Element");
    printf("\n 4 == Delete Middle Element");
    printf("\n 5 == Insert Front Element");
    printf("\n 6 == Delete Front Element");
    printf("\n 7 == Show array");
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
                last_insert(val);       
                break;
        
            case 2:
                printf("\n Last Delete\n");
                last_delete();
                break;

            case 3:
                printf("\n Middle Insert\n");
                printf("\n Enter the middle position to insert the element=");
                scanf("%d",&in);
                printf("\n enter the value in %d position =",in);
                scanf("%d",&n);
                middle_insert(in,n);
                break;

            case 4:
                printf("\n Middle Delete\n");
                printf("\n Enter the middle position to delete the element=");
                scanf("%d",&p);
                middle_delete(p);
                break;

            case 5:
                printf("\n Front insert\n");
                printf("\n Enter the front position to insert element=");
                scanf("%d",&vl);
                front_insert(vl);
                break;

            case 6: 
                printf("\n Front Delete\n");
                front_delete();
                break;

            case 7:
                printf("\n Print Array\n");
                print_array();
                break;

            case 0:
                printf("\n your choice envalid plz try again letter");
                break;
       
        }
    } while (ch!=0);
    
}