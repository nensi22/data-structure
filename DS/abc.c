#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=printf("hello world");
    printf("\n%d",a);
    printf("\n");
    a=scanf("%d%d",&b,&c,&d);
    printf("\n a:%d",a);
    printf("\n b:%d",b);
    printf("\n c:%d",c);

    printf("\n\n5/2= %d",5/2);
    printf("\n\n5/2.0= %f",5/2.0);

    printf("\n\n53331%10=%d",53331%10);
    printf("\n\n53332%10=%d",53332%10);
    printf("\n\n53333%10=%d",53333%10);
    printf("\n\n53334%10=%d",53334%10);
    printf("\n\n53331/10=%d",53331/10);
    printf("\n\n53332/10=%d",53332/10);
    printf("\n\n53333/10=%d",53333/10);
    printf("\n\n53334/10=%d",53334/10);

    printf("\n\n1<2=%d",1<2);
    printf("\n\n1>2=%d",1>2);
    printf("\n\n1<2<3=%d",1<2<3);
    printf("\n\n3<2<1=%d",3<2<1);
    printf("\n\n1>2>3=%d",1>2>3);
    printf("\n\n3>2>1=%d",3>2>1);

    printf("\n\n0||0||1=%d",0||0||1);
    printf("\n\n1&&0&&0=%d",1&&0&&0);
}
