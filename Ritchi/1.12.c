#include<stdio.h>
int main()
{

	int c,count=0;
	while((c=getchar())!=EOF)
	{
	
		if(c!=' ' && c!='\t')
		{	
			count=0;
			putchar(c);
			
		}
		else
		{	count++;
			if(count==1)
			{
				putchar('\n');
			}
			else
			{
				continue;
			
			}
		}		
	
	
	}
	return 0;


}
