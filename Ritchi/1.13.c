#include<stdio.h>
int main()
{
	int c,count=0,i;
	while((c=getchar())!=EOF)
	{ 
		if(c!=' ')
		{	
			count++;

			putchar(c);
		}
		else
		{	
		        putchar('\n');	
			for(i=0;i<=count;i++)
			{
				putchar('-');
							
			}
			putchar('\n');
			for(i=0;i<count;i++)
			putchar(' ');
			//printf("%d",count);
			//
			putchar('|');
			printf("%d",count);
			putchar('\n');
			for(i=0;i<count;i++)
			putchar(' ');
			putchar('|');
			putchar('\n');
			for(i=count;i>=0;i--)
				putchar('-');
			for(i=0;i<=count;i++);
		//	printf("%d",count);
			count=0;
			putchar('\n');
				
		
		}
	}
	return 0;



}
