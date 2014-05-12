#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{

	int c,count=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\t')
		{
			printf("\\t");
		}
		else if(c == ' ')
		{
			printf("\\b");
		
		}
		else if(c == '\\')
		{
			        printf("\\\\");

		}
				else
		{
			printf("%c",c);
		
		}
	}
		return 0;
}	


