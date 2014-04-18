#include<stdio.h>
void fun()
{
	printf("hello\n");


}
int main()
{

	void (*p)();
	//int x;
	p = fun;
	p();
	//printf("%d",x);
	return 0;
}
