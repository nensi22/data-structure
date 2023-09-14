#include<stdio.h>
#define size 5
int q[size];
int front=0,rear=0;
void enqueue(int element)
{
    if((rear+1)%size==front)
    {
        printf("\n Queue is full...");
    }
    else
    {
        rear=(rear+1)%size;
        q[rear]=element;
    }
    printf("\n FRONT=%d  REAR=%d",front,rear);
}
void dequeue()
{
    if((front+1)%size==rear)
    {
        printf("\n array is empty...");
    }
    else
    {
        front=(front+1)%size;
    }
    printf("\n FRONT=%d  REAR=%d",front,rear);
}
void display()
{
    int i=front+1;
    do
    {
        printf("\t %d",q[i]);
        i=(i+1)%size;

    } while (i != (rear+1)%size);
    printf("\n FRONT=%d  REAR=%d",front,rear);
}
int main()
{
    int ch,value;
    printf("\n1.Insert... \n2.Delete... \n3.Display... \n0.Exit...");
    do
    {
        printf("\n Enter chioce :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Entre front value : ");
                scanf("%d",&value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 0:
                printf("\n envalid your choice...");
                break;
        }
    } while (ch!=0);
}