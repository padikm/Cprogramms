#include<stdio.h>
int main()
{
	int x,tmp1=0,x1;
	scanf("%d",&x);
	x1=x;
	while(x1!=0)
	{
		if(x1 & 1)
		{
			tmp1 = (tmp1 | 1)<< 1;
			x1=x1>>1;
		//	printf("Res = %d",tmp1);
		}
		else
		{
			tmp1 = (tmp1 | 0) <<1;
			x1 = x1>>1;
		//	printf("Res = %d",tmp1);
		}
	
	
	}
tmp1 = tmp1>>1;
//	tmp1 = tmp1<<n1;
//	res = tmp1| tmp2;
	printf("Res = %d",tmp1);
	return 0;


}
