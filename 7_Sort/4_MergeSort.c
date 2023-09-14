#include<stdio.h>
#include<stdlib.h>
void merge(int A[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=l;
	int B[100];
	while (i<=mid && j<=h)
	{//   printf("\n  B[%d]=%d",k,B[k]);
		if(A[i]<A[j])
		{
			B[k++]=A[i++];
		}
		else
			B[k++]=A[j++];
	}
	while(i<=mid)
		B[k++]=A[i++];
	while(j<=h)
		B[k++]=A[j++];
	for(i=l;i<=h;i++)
	{
		A[i]=B[i];
	}
}
void merge_sort(int A[],int l,int h)
{
	//printf("\n  B[%d]=%d",k,A[k]);
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
		merge_sort(A,l,mid);
		merge_sort(A,mid+1,h);
		merge(A,l,mid,h);
		//printf("\n L=%d   MID=%d   H=%d",l,mid,h);
	}
}

int main()
{
	int A[20], m = 30, x = 100 ,n = 15;
    for(int i = 0; i < 15; i++)
        A[i] =rand() % 99+1;
    for(int i=0; i<15; i++)
        printf("\n %d",A[i]);
	printf("\n");
    merge_sort(A,0,n-1);
	printf("\n");
    for(int i=0; i<15; i++)
        printf("\t %d",A[i]);
    return 0;
}