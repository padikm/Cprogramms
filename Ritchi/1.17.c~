#include<stdio.h>
int main()
{
	int c,count=0,i;
	char a[128];
	while((c=getchar())!=EOF)
	{	
		a[count++]=c;
		if(c=='\n' && count<=20)
		{
			count = 0;
		
		}
		if(c=='\n'&& count>20)
		{	
			a[count]='\0';
			count = 0;
			puts(a);
		}
	
	
	}
	return 0;



}
