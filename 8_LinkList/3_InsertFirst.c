#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void head_count(struct node *head)
{
    int cnt=0;
    if(head == NULL)
        printf("\n LIST IS EMPTY");

    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\n  LIST COUNT = %d",cnt);
}

void insert_first(struct node **head,int new_node)
{
    struct node *ptr =*head;
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp ->next =*head;
    temp ->data =new_node;
    *head = temp;
}
int main()
{
    struct node *head=NULL;

    insert_first(&head,11);
    insert_first(&head,12);
    insert_first(&head,13);
    insert_first(&head,14);
    head_count(head); 
    return 0;
}