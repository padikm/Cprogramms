#include<stdio.h>
#include<string.h>
#define SEZE 128
int main()
{
	int c,i,a[128];
	memset(a,0,sizeof(a));

	while((c=getchar())!=EOF)
	{ 
			
			a[c]++;
			for(i=0;i<=a[c];i++)
			{
				putchar('-');
							
			}
			putchar('\n');
			for(i=0;i<a[c];i++)
			putchar(' ');
			//printf("%d",count);
			//
			putchar('|');
			printf("%d",a[c]);
			putchar('\n');
			for(i=0;i<a[c];i++)
			putchar(' ');
			putchar('|');
			putchar('\n');
			for(i=a[c];i>=0;i--)
				putchar('-');
			for(i=0;i<=a[c];i++);
		//	printf("%d",count);
			putchar('\n');
				
		
		
	}
/*	for(i=0;i<128;i++)
	printf("%d\n",a[i]);*/
	return 0;



}
