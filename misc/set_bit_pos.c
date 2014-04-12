#include<stdio.h>
int main()
{
	int n,p,x,res,y,res1;
	scanf("%d%d%d%d",&x,&y,&n,&p);
	res = (x) | (~(~0<<p))<<(n-p+1);
	res1 = res & ((y<<(n-p+1) & ((~(~0<<p))<<(n-p+1))) | ~((~(~0<<p))<<(n-p+1)));
	printf("%d\n",res1);
	return 0;

}
