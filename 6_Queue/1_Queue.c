#include<stdio.h>
#define size 5
int q[size];
int front=-1,rear=-1;
int i;
void queue_insert(int val)
{
    if(rear+1==size)
    {
        printf("\n queue is full...");
    }
    else if(front==-1 && rear==-1)
    {
        q[++front]=val;
        ++rear;
    }
    else
    {
        q[++rear]=val;
    }
}
void queue_delete()
{
    if(front==-1 && rear==-1)
    {
        printf("\n queue is empty..");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        ++front;
    }
}
void print()
{
    if(front==-1)
    {
        printf("\n Queue is empty.");
    }
    else
    {
        for(i=front ; i<=rear ; i++)
        {
            printf("\t q[%d] == %d",i,q[i]);
        }
    }
}
int main()
{
    int ch,x;
    printf("\n1. Insert Queue Line \n2. Delete Queue Line \n3. Show array \n0. Exit");

    do
    {
        printf("\nEnter choise number :");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\n Enter Queue Insert Value : ");
                scanf("%d", &x);
                queue_insert(x);
                break;

            case 2:
                queue_delete();
                break;

            case 3:
                print();
                break;

            case 0:
                printf("\nYour choise Wrong......!");
                break;
                
        }
    } while (ch != 0);
}