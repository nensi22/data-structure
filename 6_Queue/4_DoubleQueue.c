#include<stdio.h>
#define size 5
int q[size];
int front=-1,rear=-1;
int i;
void rear_insert(int val)
{
    if(rear+1==size)
        printf("\n queue is full...");
    else if(front==-1 && rear==-1)
    {
        q[++front]=val;
        ++rear;
    }
    else
        q[++rear]=val;
}

void rear_delete()
{
    if(front==-1 && rear==-1)
        printf("\n queue is empty..");
    else if(front==rear)
        front=rear=-1;
    else
        --rear;
}

void front_insert(int element)
{
    if(rear+1==size)
        printf("\n queue is empty...");
    else if(front==-1 && rear==-1)
    {
        front=rear=size;
        q[--front]=element;
        --rear;
    }
    else
        q[--front]=element;
}

void front_delete()
{
    if(front==-1 && rear==-1)
        printf("\n queue is empty..");
    else if(front==rear)
        front=rear=-1;
    else
        ++front;
}

void print()
{
    if(front==-1)
        printf("\n Queue is empty.");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t q[%d] == %d",i,q[i]);
        }
    }
}

int main()
{
    int ch,x,n;
    printf("\n 1. Rear insert...");
    printf("\n 2. Rear Delete...");
    printf("\n 3. Front insert...");
    printf("\n 4. Front Delete...");
    printf("\n 5. display...");
    printf("\n 0. Exit...");
    printf("\n\n");
    do
    {
        printf("\nEnter choise number :");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\n REAR  INSERT ");
                printf("\n Enter Queue Rear Insert Value : ");
                scanf("%d", &x);
                rear_insert(x);
                break;

            case 2:
                printf("\n REAR  DELETE ");
                rear_delete();
                break;

            case 3:
                printf("\n FRONT  INSERT ");
                printf("\n Enter Queue Front Insert Value : ");
                scanf("%d", &n);
                front_insert(n);
                break;

            case 4:
                printf("\n FRONT  DELETE ");
                front_delete();
                break;

            case 5:
                printf("\n DISPLAY  QUEUE ");
                print();
                break;

            case 0:
                printf("\nEnvalid Your choise......!");
                break;
                
        }
    } while (ch != 0);
}