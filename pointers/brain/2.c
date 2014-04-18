#include<stdio.h>
int fun(int *a,int *b)
{
	return (*a+*b);


}
int main()
{

	int (*p)(int *,int *),a=10,b=20,x;
	p = fun;
	x = p(&a,&b);
	printf("%d",x);
	return 0;
}
