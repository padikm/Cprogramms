#include<stdio.h>
int main()
{
	int x,n,n1,tmp1=0,tmp2,res,x1;
	scanf("%d%d",&x,&n);
	x1=x;
	n1=n;
//	printf("x1 = %d\n",x1);
//	tmp1 = (x>>n & ~(~0<<n))<<(n);
	//tmp1 = (x>>n & ~(~0<<n))<<(n);
	while(n)
	{
		if(x1 & 1)
		{
			tmp1 = (tmp1 | 1)<< (1);
			x1=x1>>1;
			printf("tmp1 = %d",tmp1);
		
		}
		else
		{
		
			tmp1 = (tmp1 | 0) <<1;
			x1 = x1>>1;
			printf("tmp1 = %d",tmp1);
		}
		n--;
	
	}
	tmp2 = x>>n1;
	tmp1 = tmp1>>1;
	tmp1 = tmp1<<(8-n1);
	res = tmp1| tmp2;
	printf("Res = %d",res);
	return 0;


}
