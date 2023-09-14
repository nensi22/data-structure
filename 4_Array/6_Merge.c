#include<stdio.h>
int main()
{
    int a[100],b[100];
    int limitA,limitB,limitC;
    int i;
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
    for(i=0;i<limitC;i++)
    {
        a[i]=b[i];
   
        printf("\t %d ",a[i]);
    }
}
