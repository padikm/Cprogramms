#include<stdio.h>
#include<malloc.h>

void turbo_sort(int *,int );
int main()
{

	int *a,t,i;
	scanf("%d",&t);
	a = malloc(sizeof(int)*t);
	for(i=0;i<t;i++)
		scanf("%d",(a+i));
	turbo_sort(a,t);
	for(i=0;i<t;i++)
		printf("%d\n",*(a+i));
	return 0;

}

void turbo_sort(int *p,int n)
{
	int tmp,i,small,j;
	for(i=0;i<n;i++)
	{
		small = i;
		for(j=i+1;j<n;j++)
		{
			if(p[small]>p[j])
				small = j;
			
		
		}
		tmp = p[i];
		p[i] = p[small];
		p[small] = tmp;

	}
}
