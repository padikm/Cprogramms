#include<stdio.h>
#include<malloc.h>
#define SIZE 1000000

int *turbo_sort(int *,int );
int main()
{

	int *a,t,i,*out;
	scanf("%d",&t);
	a = malloc(sizeof(int)*t);
	for(i=0;i<t;i++)
		scanf("%d",(a+i));
	out = turbo_sort(a,t);
//	printf("OUTPUT\n\n");
	for(i=1;i<=t;i++)
		printf("%d\n",*(out+i));
	return 0;

}

int *turbo_sort(int *p,int n)
{
	static int i,*c,*o;
	c = malloc(sizeof(int)*SIZE);
	o = malloc(sizeof(int)*n);
	for(i=0;i<=SIZE;i++)
	{
		        c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		c[p[i]]++;
	//	printf("%d\n",c[p[i]]);
	}

	for(i=0;i<=SIZE;i++)
	{
		c[i+1]=c[i]+c[i+1];
	
	}
	for(i=n-1;i>=0;i--)
	{
	
		o[c[p[i]]] = p[i];
		c[p[i]] = c[p[i]] - 1;
	
	}

	
	return o;


}
