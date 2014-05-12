#include<stdio.h>
#define SIZE 100
int sumoft(int (*a)[SIZE],int i,int j);
int main()
{

	int a[SIZE][SIZE],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}

	return 0;



}
