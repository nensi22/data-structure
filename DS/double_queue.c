#include<stdio.h>
int f=-1,r=-1,q[5],max=5,i;
void rear_insert(int val)
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
void front_insert(int val)
{
    if(r==0)
    printf("\n queue is full.");
    else if(f==-1&&r==-1)
    {
        f=r=max;
        q[--f]=val;
        --r;
    }
    else
    q[--f]=val;
}
void front_delete()
{
    if(f==-1&&r==-1)
    printf("\n queue is empty.");
    else if(f==r)
    f=r=-1;
    else                                                      
    ++f;
}
void rear_delete()
{
    int k;
    if(f==-1&&r==-1)
    printf("\n queue is empty.");
    else if(f==r)
    f=r=-1;
    //printf("\n enter last delete :");
    //scanf("%d",&k);
    --r;
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
        printf("\t a[%d] == %d ",i,q[i]);
        }
    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n press-->1 for last_insert.");
        printf("\n press-->2 for front_insert.");
        printf("\n press-->3 for fornt_delete.'");
        printf("\n press-->4 for last_delete.");
        printf("\n press-->5 for show.");
        printf("\n press-->0 for exit.");
        printf("\n Enter chioce :");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("\n Entre last value : ");
                scanf("%d",&val);
                rear_insert(val);
                break;    
            case 2:
                printf("\n Entre front value : ");
                scanf("%d",&val);
                front_insert(val);
                break;
            case 3:
                front_delete();
                break;
            case 4:
                rear_delete();
                break;
            case 5:
                print();
                break;
            case 0:
                break;
        }
    } while(ch!=0);
    
}