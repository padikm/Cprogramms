#include<stdio.h>
int fib(int );
int main()
{
	int n,res;
	scanf("%d",&n);
	res = fib(n);
	printf("%d",res);
	return 0;
}

int fib(int n)
{
       static  int res=0;
	if(0==n)
	{
		printf("0\n");
		return 0;
	}
	else if(1==n)
	{
		printf("1\n");
		return 1;
	
	}
	else
	{
		printf("%d\n",res);
		return(res = fib(n-1)+fib(n-2));
	//	printf("%d\n",fib(n));
	
	}
	//printf("%d\n",fib(n);

	

}
