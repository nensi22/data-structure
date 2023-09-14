#include<stdio.h>
int main()
{
    int a=3,b=5,c=6;
    printf("%d",(a>b&&a>c)?a:(b>c)?b:c);
}