#include<stdio.h>
int fact(int n);
int main()
{
	int n,res;
	scanf("%d",&n);
	res = fact(n);
	printf("%d\n",res);
	return 0;

}

int fact(int n)
{
	if(n==1)
	return 1;
	return(n*fact(n-1));

} 
