// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (j=1;j<=10;j++)
//     {
//         if(!(i>10))
//             printf("\n if %d ",i++);
//         else
//             printf("\n else %d ",i++);
//     }
//     return 0;
    
// }

#include<stdio.h>
int main()
{
    int i=0,j=0;
    for(i=0;i<5;i++)
    {
        printf("i=%d,j=",i);
        for(j=0;j<5;j++)
        {
            if(j==2)
            continue;
            printf("%d",j);
        }
        printf("\n");
    }
}
