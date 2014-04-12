#include<stdio.h>
int main()
{
	int i=10,j=12;
	if(j>=i)
	{	{	j=i;
			i=j;
		}
	}
	printf("%d %d\n",i,j);
	return 0;
}
