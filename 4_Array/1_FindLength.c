#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10},length;
    
    length=sizeof(a)/sizeof(a[0]);
    printf("\n length of array = %d",length);

    return 0;
}