//self referential structure
#include<stdio.h>
struct node
{
   int n;
   char c;
   struct node *ptr;
};

int main()
{
    struct node var1;
    struct node var2;
    struct node var3;


    var1.n=65;
    var1.c='A';
    var1.ptr=NULL;

    var2.n=66;
    var2.c='B';
    var2.ptr=NULL;

    var3.n=67;
    var3.c='C';
    var3.ptr=NULL;

    // var2.ptr=&var1;
    // var1.ptr=&var2;

    var1.ptr=&var2;
    var2.ptr=&var3;
    var3.ptr=&var1;

    printf("\n var1 %d  %c ",var1.n,var1.c);
    printf("\n var2 %d  %c ",var2.n,var2.c);
    printf("\n var3 %d  %c ",var3.n,var3.c);

    // printf("\n  %d  %c ",var2.n,var2.c);

    printf("\n %d  %c ",var1.ptr->n,var1.ptr->c);
    printf("\n %d  %c ",var2.ptr->n,var2.ptr->c);
    printf("\n %d  %c ",var3.ptr->n,var3.ptr->c);
}