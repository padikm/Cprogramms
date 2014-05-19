#include<stdio.h>
int main()
{
	int x,n,tmp1;
	scanf("%d%d",&x,&n);
	tmp1 = (x>>n | x<<(8-n));
	printf("Res = %d",tmp1);
	return 0;


}
