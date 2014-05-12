#include<stdio.h>
int main()
{
	union x {
		int i;
		char ch[4];
	}b;
	b.ch[0]=3;
	b.ch[1]=2;
	b.ch[3]=0;
	b.ch[4]=0;
	printf("%c %c %d",b.ch[0],b.ch[1],b.i);
	return 0;


}
