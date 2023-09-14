#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        a[i]=rand()%99+1;
        // printf("\t %d",rand()%10);

    }
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }

}