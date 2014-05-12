#include<stdio.h>
int main()
{
	int c;
	while((c=getchar())!=EOF)
	{
	//	printf("%c",c);
	
		if(c==' ')
		{
		       	//fflush(stdout);
			putchar(c);
			//printf("%c",c);	
		}
	}
	return 0;

}
