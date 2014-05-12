#include<stdio.h>
int main()
{
	int c,t,b,n;
	t=b=n=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\t')
		{
			t++;
			
		}	
		else if(c=='\n')
		{
		
			n++;
		
		}
		else if(c==' ')
		{
		
			b++;
		}
		//putchar(c);
		printf("Blank = %d,Tab = %d,Newline = %d",b,t,n);

	
	}
	return 0;


}
