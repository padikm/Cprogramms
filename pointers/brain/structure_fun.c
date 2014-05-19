#include<stdio.h>
int fun()
{
	return 10;

}
int main()
{
	struct fptr
	{
		int (*p)();
	
	}*x;
	int a;
	struct fptr y;
	x=&y;
	x->p = fun;
	a = x->p();
	printf("%d",a);
	return 0;



}
