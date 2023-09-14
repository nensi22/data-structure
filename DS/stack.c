#include<stdio.h>
#include<stdlib.h>
#define n 5
int top = -1;
int stack[n];
void push(int val)
{ 
    if(top>n-1) 
    {
        printf("\n stack is overflow.");
    }
    else
    {
        stack[++top]=val;
    }
 
} 
int pop()
{
    int x;
    if(top<=-1)  
    {  
        printf("\nstack is underflow.");
    }
    else
    {
        x=stack[top--];
        printf("\n poped element is %d ",x);
    }
}
void print()
{    
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\n %d",stack[i]);
    }
}
int binary(int l,int b)
{
    int u,m,a[m],x;
    m =l+b/2;
    if(x==a[m])
        return m + 1;
    else if (x>a[m])
    {
        l=m+1;
    }
    else
    {
        u=m-1;
    }
}
int main()
{
    int l,b,ch,val;
    do
    {
        printf("\n\n press-->1 for push.\n press-->2 for pop.\n press-->3 for show.\n press-->4 for binary.\n press-->5 for exit.");
        printf("\n Enter chioce :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Entre value : ");
            scanf("%d",&val);
            push(val);
            break;    
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            binary(l,b);
            break;
        case 5:
            exit(0);
            break;    
        default:
        printf("\n wrong choice!!!");
            break;
        }
    } while (n!=0);
    
}