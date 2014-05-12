#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{

	int c,count=0;
/*	while((c=getchar()!=EOF))
	{
		fflush(stdout);	
		printf("%c",c);
		if(c==' ')
		{	
			count++;

		}
		else if(c!=' ' && count>0)
		{

			printf("%c",c);
			count=0;
			printf("%c",c);
		}
		else
		{
			printf("%c",c);
		
		}
	}*/
	while((c=getchar())!=EOF)
	{
	        //printf("%c",c);
		if(c==' ')
		{
			        count++;

		}
		else if(c!=' ' && count>=1)
		{

			        //printf(" ");
				putchar(' ');
			        count=0;
			        //printf("%c",c);
				putchar(c);
		}
		else
		{
			       // printf("%c",c);
				putchar(c);
		}

	}
		return 0;
}	


