#include<stdio.h>
int main()

{
	int n,p1,p2,x,tmp1,tmp2,tmp3,tmp4;
	scanf("%d%d%d%d",&x,&n,&p1,&p2);
	tmp1 = ((x>>(p2-n+1)) & (~(~0<<n))) << (p1-n+1);
	tmp2 = ((x>>(p1-n+1)) & (~(~0<<n))) << (p2-n+1);
	tmp4 = tmp1 | tmp2;
	tmp3 = x & ~((~(~0<<n)) << (p2-n+1));
	tmp3 = tmp3 & ~((~(~0<<n)) << (p1-n+1));
	tmp3 = tmp3 | tmp4;
	printf("res = %d",tmp3);
	return 0;

}

