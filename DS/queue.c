#include<stdio.h>
int f=-1,r=-1,q[5],max=5,i;
void insert(int val)
{
    if(r+1==max)
        printf("\n queue is full.");
    else if(f==-1&&r==-1)
    {
        q[++f]=val;
        ++r;
    }
    else
        q[++r]=val;
}
void delete()
{
    if(f==-1&&r==-1)
        printf("\n queue is empty.");
    else if(f==r)
        f=r=-1;
    else
        ++f;
}
void print()
{
    if(f==-1)
    {
        printf("\n Queue is empty.");
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("\t %d ",q[i]);
        }
    }
}
int main()
{
    int ch,val;
    printf("\n\n press-->1 for insert.\n press-->2 for delete.\n press-->3 for show.\n press-->0 for exit.");
    do
    {
        printf("\n Enter chioce :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Entre value : ");
            scanf("%d",&val);
            insert(val);
            break;    
        case 2:
            delete();
            break;
        case 3:
            print();
            break;
        case 0:
            break;
        }
    } while(ch!=0);
    
}

/*{
    for(i=0;i<=7;i++)
        {
        printf("enter element:");
        scanf("%d",&r);
        }
}
void insert()
{
    if(r+1==max)
    printf("Queue is overflow.");
    else
    {
        if(f=r=-1)
        a[++f]=val;
        r=0;
    }
}
void insert()
{
    if(r+1==max)
    {
    printf("queue is overflow.");
    }
    else
    {
        if(f=r=-1)
        {
            a[++f]=val;
            f=0;
            
            for(i=0;i<=5;i++)
            {
                printf("\n Enter element :");
                scanf("%d",max);
                r=r+1;
                a[r]=max;
            }
        }
    }
}
void main()
{
    add();
    insert();
}*/