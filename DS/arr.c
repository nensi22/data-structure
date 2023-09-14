#include<stdio.h>
int main()
{
    //int  a[]={1,20,11,25,32,53,42,55};
    //printf("%d",a[1]);
    int a=10;
    float b=3.14;
    char c ='a';
    double d ='a';
    long double e ='a';
    long long int f = 13;
    printf("\n int  %d",sizeof(a));
    printf("\n float  %d",sizeof(b));
    printf("\n char  %d",sizeof(c));
    printf("\n double %d",sizeof(d));
    printf("\n long double  %d",sizeof(e));
    printf("\n long long int  %d",sizeof(f));
    return 0;
}
