//pattern 
#include<stdio.h>
int main()
{
    int i,j,sp=10,t=0,f,c;
    for(i=1;i<=10;i++)
    {
        t+=i;
        for(j=1;j<=sp;j++)
        {
         printf("\t");
        }
        f=t;
        for(j=1;j<=i;j++)
        {
            if(i==4 || i==7)
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