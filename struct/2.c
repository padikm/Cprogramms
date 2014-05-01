#include<stdio.h>
int main()
{
	struct x
	{
		//char a;
		int *p;
	};
	struct x y;
	//int a=10,*q;
	//y.p = &a;
	int *q=0;
	printf("%ld\n",sizeof(q));
	//printf("%ld\n",sizeof(*(y.p)));
	printf("%ld\n",sizeof(y));
	return 0;

		

}

