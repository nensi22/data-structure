#include<stdio.h>
int f=0,r=0,max=7,q[5],i;
void insret(int val)
{
    if(r+1==max)
    printf("\n queue is full.");
    else if(f==-0&&r==-0)
    {
        r=(r+1)%max;
        q[++f]=val;
        ++r;
    }
    else
    q[++r]=val;
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
    do
    {
      //  printf("\n press-->1 for last_insert.");
        printf("\n press-->1 for insert.");
        //printf("\n press-->3 for fornt_delete.'");
        //printf("\n press-->4 for last_delete.");
        printf("\n press-->5 for show.");
        printf("\n press-->0 for exit.");
        printf("\n Enter chioce :");
        scanf("%d",&ch);
        switch (ch)
        {
       /* case 1:
            printf("\n Entre last value : ");
            scanf("%d",&val);
            last_insert(val);
            break;   */ 
        case 1:
            printf("\n Entre front value : ");
            scanf("%d",&val);
            insret(val);
            break;
        /*case 3:
            front_delete();
            break;
        case 4:
            last_delete();
            break;*/
        case 5:
            print();
            break;
        case 0:
            break;
        }
    } while(ch!=0);
    
}

