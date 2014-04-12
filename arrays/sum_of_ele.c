#include<stdio.h>
int fun(int *,int );
int main()
{
	int a[] = {1,2,3,4},res;
	res = fun(a,4);
	printf("%d\n",res);
	return 0;
	
}

int fun(int *a,int n)
{	static int sum,i;
	if(i==n)
		return sum;
	sum = sum + a[i];
	i++;
	return fun(a,n);

}
