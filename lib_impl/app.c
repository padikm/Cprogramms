#include<stdio.h>
#include"sub.h"
#include"add.h"
int main()
{
	int res,a=20,b=20;
	extern int m;
	res = sub1(b,a);
	printf("RES = %d\n",res);
	res = add(a,b);
	printf("RES = %d\n",res);
	k++;
	printf("K = %d\n",k);
	m++;
	printf("M = %d\n",m);
	return 0;

}
