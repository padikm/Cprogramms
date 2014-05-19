#include<stdio.h>
int main()
{
	int n,p,x,res;
	scanf("%d%d%d",&x,&n,&p);
	res = (x>>(n-p+1)) & ~(~0<<(p));
	printf("%d\n",res);
	return 0;

}
