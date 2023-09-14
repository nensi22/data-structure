#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
 
void head_count(struct node *head)
{
    int cnt =0;
    if(head ==NULL)
    printf("\n List is Empty");
    struct node *ptr =NULL;
    ptr =head;
    while(ptr !=NULL)
    {
        printf("\t %d",ptr ->data);
        cnt++;
        ptr=ptr->next;
    }
}
void insert_end(struct node **head_ref,int new_data)
{
    struct node *ptr =*head_ref;
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp ->next =NULL;
    temp ->data =new_data;
    if(*head_ref == NULL)
    {
        *head_ref =temp;
        return;
    }
    while(ptr -> next !=NULL)
    ptr =ptr ->next;
    ptr ->next =temp;
    return;
}
void insert_first(struct node **head,int n_data)
{
    struct node *ptr =*head;
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp ->next =*head;
    temp ->data =n_data;
   *head = temp;
}
void delete_last(struct node **head1,int n_data1)
{
    struct node *ptr =*head1;
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp ->next =*head1;
    temp ->data =NULL;
   *head1= temp;
}
void delete_first(struct node **head)
{
    struct node *ptr=*head;
    if(*head==NULL)
    {
        printf("\n empty !");
        return;
    }
    *head=ptr->next;
    free(ptr);
} 
int main()
{
    struct node *head =NULL;
   // insert_end(&head,11);    
   // insert_end(&head,12);
   // insert_end(&head,13);
   // insert_end(&head,14);
   // insert_first(&head,10);
   // delete_first(&head,10);
   // head_count(head);  

    printf("\n press-->1 for last_insert.");
    printf("\n press-->2 for front_insert.");
    printf("\n press-->3 for fornt_delete.'");
    printf("\n press-->4 for last_delete.");
    printf("\n press-->5 for show.");
    printf("\n press-->0 for exit.");
    int ch,val,n_data,new_data;
    do
    {
        printf("\n Enter chioce :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Entre last value : ");
            scanf("%d",&new_data);
            insert_end(&head,new_data);
            break;    
        case 2:
            printf("\n Entre front value : ");
            scanf("%d",&n_data);
            insert_first(&head,n_data);
            break;
        case 3:
            delete_first(&head);
            break;
        // case 4:
        //     delete_last(&head);
        //     break;
        case 5:
            head_count(head); 
            break;
        case 0:
            break;
        }
    } while(ch!=0);
    
    return 0;
}




