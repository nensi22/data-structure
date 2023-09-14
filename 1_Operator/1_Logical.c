#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,d;
    d=--a&&++b;
    printf("\na = %d \nb = %d \nd = %d",a,b,d);
}