#include<stdio.h>
int main()
{
	long int n,tmp,flag=1;
	scanf("%ld",&n);
	tmp = n;
	n=n/2;
	while(n!=0)
	{
		
		if((0==(tmp%n)))
		{
			tmp = tmp - n;
			n=n/2;
			if(flag)
			{
				printf("Alice\n");
				flag = 0;
			}

			else
			{
				printf("BOB\n");
				flag = 1;
			
			}
		}
		else

		{
		n=n-1;
		}

	
	}
	return 0;


}
