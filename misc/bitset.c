#include<stdio.h>
int main()
{
	int n,b=0;
	scanf("%d",&n);	
	while(n!=0)
	{
	
		if(n&1)
			b++;
		n=n>>1;
	}

	printf("%d",b);
	return 0;

}
