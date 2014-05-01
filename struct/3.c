#include<stdio.h>
int main()
{
	struct book{
		short int j;
		char i;
		char k;
		char m;
	};
	union x{
		int l;
		char c[4];
	};
	union x y;
	y.l = 65;
	struct book z;
//	printf("%ld\n",sizeof(float));
//	printf("%ld\n",sizeof(z));
	printf("%c\n",y.c[0]);
	return 0;

}
