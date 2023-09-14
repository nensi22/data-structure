#include<stdio.h>
int pos=0,a[10],i;
void frontInsert(int n)
{
    for(i=pos;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=n;
    pos++;
}
void MedilInsert(int n)
{
    for(i=0;i<pos;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=n;
    pos++;
}

void lastInsert(int n)
{
    a[pos++]=n;
}

void print()
{
    for(i=0;i<pos;i++)
    {
        printf("\n \ta[%d]=%d",i,a[i]);
    }
   
}
int main()
{ 
    int n;
    frontInsert(1);
    frontInsert(0);
    // MedilInsert(4);
    // lastInsert(11);
    // lastInsert(12);
    // lastInsert(13);
    // lastInsert(14);
    frontInsert(5);
    print();
}