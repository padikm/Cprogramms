#include<stdio.h>
# define SET(p) (1<<p)
# define RESET(p) ~(1<<p)
int main()
{
	int n,p,res;
	printf("enter the number");
	scanf("%d%d",&n,&p);
	res = SET(p) | n;
	printf("SET = %d\n",res);
	res = RESET(p) & n;
	printf("RESET = %d\n",res);
	return 0;
	
}

