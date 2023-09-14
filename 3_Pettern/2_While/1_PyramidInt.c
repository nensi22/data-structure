#include<stdio.h>
int main()
{
    int i=1,j,sp=4,t=0,f,c,k;
    while (i<=4)
    {
        t+=i;
        k=1;
        while (k<=sp)
        {
           printf("\t");
           k++;
        }
        f=t;
        j=1;
        while(j<=i)
        {
            if(i==4)
            {
                printf("\t%d",c++);
            }
            else
            {
                printf("\t%d",f--);
            }
            j++;
        }
        c=t+1;
        sp--;
        printf("\n");
        i++;
    }
    
}