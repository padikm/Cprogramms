#include<stdio.h>
#include<malloc.h>
int bigg(int *,int ,int ,int );
int main()
{
	int *a,i,res;
	a = (int *)malloc(sizeof(int)*10);
	for(i=0;i<6;i++)
		scanf("%d",(a+i));
	//for(i=0;i<5;i++)
	//	printf("%d\n",a[i]);
	i=0;
	res = bigg(a,6,a[0],i);
	printf("%d",res);
	return 0;

}

int bigg(int *a,int n,int big,int i)
{	//int tmp;	

	if(i==(n-1))
	{
		return big;
	}
	else if(big<a[i+1])
	{
		i++;
	
	}
	else
	{
		big = a[i+1];
		i++;
	}	
	return bigg(a,n,big,i);
}
