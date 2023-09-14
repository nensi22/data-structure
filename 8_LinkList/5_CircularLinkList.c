#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void head_count(struct node *head)
{
    printf("\n List is :  ");
    int cnt=0;
    if(head == NULL)
        printf("\n LIST IS EMPTY");

    struct node *ptr=head;
    do
    {
        printf("\t %d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }while (cnt<=25);
}

void first_insert(struct node **head,int new_data)
{
    struct node *ptr=*head;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=new_data;
    if(*head==NULL)
    {
        *head=newnode;
        newnode->next=*head;
    }
    else
    {
        newnode->next=*head;
        while(ptr->next!=*head)
        {
            ptr=ptr->next;
        }
        *head=newnode;
        ptr->next=*head;
    }
}

void last_insert(struct node **head,int new_data)
{
    struct node *ptr=*head;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=new_data;
    if(*head==NULL)
    {
        *head=newnode;
        newnode->next=*head;
    }
    else
    {
        newnode->next=*head;
        while(ptr->next!=*head)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}

void middle_insert(struct node **head,int new_data,int search_data)
{
    struct node *ptr=*head;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=new_data;
    struct node *temp;
    while(ptr->data!=search_data)
    {
        ptr=ptr->next;
        temp=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=temp;
}

void first_delete(struct node **head)
{
    struct node *ptr=*head;
    struct node *temp=*head;
    if(*head==NULL)
        printf("\n LIST IS EMPTY");

    while(ptr->next != *head)
        ptr=ptr->next;

    *head=temp->next;
    ptr->next=*head;
    printf("\n %d ELEMENT IS DELETED",temp->data);
    free(temp);
}

void last_delete(struct node **head)
{
    struct node *ptr=*head;
    struct node *temp;
    if(*head==NULL)
        printf("\n LIST IS EMPTY");

    while(ptr->next != *head)
    {
        temp=ptr; 
        ptr=ptr->next;
    }
    temp->next=*head;
    printf("\n %d ELEMENT IS DELETED",ptr->data);
    free(ptr);
}

void middle_delete(struct node **head,int search_data)
{
    struct node *ptr=*head;
    struct node *temp;
    if(*head==NULL)
        printf("\n LIST IS EMPTY");

    while(ptr->data!=search_data)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    printf("\n %d ELEMENT IS DELETED",ptr->data);
    free(ptr);
}

int main()
{
    struct node *head=NULL;
    int ch,val,search_val;
    printf("\n 1.  LAST INSERT");
    printf("\n 2.  FIRST INSERT");
    printf("\n 3.  MIDDLE INSERT");
    printf("\n 4.  LAST DELETE");
    printf("\n 5.  FIRST DELETE");
    printf("\n 6.  MIDDLE DELETE");
    printf("\n 7.  DISPLAY");
    printf("\n 0.  EXIT");
    do
    {
        printf("\n Enter chioce :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Entre last value : ");
            scanf("%d",&val);
            last_insert(&head,val);
            break;

        case 2: 
            printf("\n Entre front value : ");
            scanf("%d",&val);
            first_insert(&head,val);
            break;

        case 3:
            printf("\n Enter a arter value=");
            scanf("%d",&search_val);
            printf("\n Entre front value : ");
            scanf("%d",&val);
            middle_insert(&head,val,search_val);
            break;

        case 4:
            last_delete(&head);
            break;

        case 5:
            first_delete(&head);
            break;

        case 6:
            printf("\n Enter delete value=");
            scanf("%d",&val);
            middle_delete(&head,val);
            break;

        case 7:
            head_count(head);
            break;

        case 0:
            printf("\n YOUR CHOICE WRONG");
            break;
        
        }
    } while (ch!=0);
}