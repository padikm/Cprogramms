#include<stdio.h>
int prime_palin(int );
int main()
{

	int n,small_palin;
	scanf("%d",&n);
	small_palin = prime_palin(n);
	printf("%d\n",small_palin);
	return 0;



}

int prime_palin(int n)
{ 
	int rem,res,tmp,i,flag;
	while(1)
	{	rem = 0;
		res = 0;
		tmp = n;
		flag = 0;
		while(tmp)
		{	
			flag = 1;
			rem = tmp%10;
			res = res*10+rem;
			tmp = tmp/10;
		
		}
		if(n==res)
		{	flag = 0;
			for(i=2;i<=n/2;i++)
			{
				if(!(n%i))
				{
				flag = 1;
				break;
				}

			}	
		}
		if(!flag)
			return res;
		n++;
	
	
	}


}
