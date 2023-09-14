#include<stdio.h>
int main()
{                 
    int a=100,b=20,c=29,x;
    x=(a>b && a>c)?a:(b>c)?b:c;
    printf("%d",x);
}