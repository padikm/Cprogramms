#include<stdio.h>

int fun()
{

	return 10;

}
int main() 
{

	int (*p)();
	p = fun;
	printf("%d\n",p());
	return 0;


}
