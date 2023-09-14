#include<stdio.h>
//int revers(int x,int y,int n)
//{
//    int a[x];
//    for(x=1;x<=y;x++)
//    {
//    return a[x];
//    }
//}

//}
int main()
{
    int i,j,sp=4,t=0,f,c;
    for(i=1;i<=4;i++)
    {
        t+=i;
        for(j=1;j<=sp;j++)
        {
         printf("\t");
        }
        f=t;
        for(j=1;j<=i;j++)
        {
            if(i==4)
                printf("\t%d",c++);
            else
            printf("\t%d",f--);
        }
        c=t+1;
    sp--;
     printf("\n");
    }
    return 0;
}