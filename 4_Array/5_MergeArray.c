#include<stdio.h>
int main()
{
    int i;
    int limitA,limitB,limitC;
    int a[100],b[100],c[200];
    
    printf("Enter the limite of first array: ");
    scanf("%d",&limitA);

    for(i=0;i<limitA;i++)
    {
        printf("\n a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the limite of second array: ");
    scanf("%d",&limitB);

    for(i=0;i<limitB;i++)
    {
        printf("\n b[%d] = ",i);
        scanf("%d",&b[i]);
    }

    limitC=limitA+limitB;

    for(i=0;i<limitA;i++)
    {
        c[i]=a[i];
    }

    for(i=0;i<limitB;i++)
    {
        c[i+limitA]=b[i];
    }

    for(i=0;i<limitC;i++)
    {
        printf("\t c[%d] = %d",i,c[i]);
    }

    return 0;
}