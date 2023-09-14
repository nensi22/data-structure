// Queue......!
#define size 5
#include <stdio.h>
int a[size], front = -1, rear = -1, i, val, x;

int queue_insert(int n)
{
    if (!((rear + 1) < size))
    {
        printf("\n Array is full....!");
    }
    else if (rear == -1 && front == -1)
    {
        ++front;
        ++rear;
        a[rear] = n;
        // printf("Your array is empty....! ");
    }
    else
    {
        a[++rear] = n;
    }
}
int queue_delete()
{
    if (front == -1 && rear == -1)
    {
        printf("\nArray is empty....!");
    }
    else if (front>=rear)
    {
        x = a[front];
        printf("Element %d is delete at %d position \n", x, front);
        a[front] = -1;
        front = -1;
        rear = -1;
    }
    else
    {
        x = a[front];
        printf("Element %d is delete at %d position \n", x, front);
        a[front] = -1;
        front++;
    }
}
int array_print()
{
    for (i = front; i <= rear; i++)
    {
        if (front == -1 && rear == -1)
        {
            printf("\nArray is empty....!");
        }
        else if (!(a[i] == -1))
        {
            printf("\na[%d] = %d", i, a[i]);
        }
    }
}

int main()
{
    int ch;
    printf("\n1. Insert Queue Line \n2. Delete Queue Line \n3. Show array \n4. Exit");

    do
    {
        printf("\nEnter a your choise number :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter Queue Insert Value : ");
            scanf("%d", &val);
            queue_insert(val);
            break;
        case 2:
            queue_delete();
            break;
        case 3:
            array_print();
            break;
        case 4:
            printf("\nHave a nice day....!");
            return 0;
            break;

        default:
            printf("\nYour choise Wrong......!");
            break;
        }
    } while (!(ch == 4));
}