#include<stdio.h>
#include<malloc.h>
int mystrstr(char *p,char *q)
{
	int i,j,count=0;
	for(i=0;p[i];i++)
	{
	//printf("P = %c\n",p[i]);
		j=0;
		count = 0;
		while(q[j])
		{
		//	printf("P = %c Q = %c J=%d\n",p[i+j],q[j],j);
		
			if(p[i+j]!=q[j])
			{
		//		printf("P = %c Q = %c J=%d\n",p[i+j],q[j],j);
			
				break;
			
			}
			else
			{
				count++;
				j++;
			}
		//	printf("J=%d\n",j);

		
		}
		if(q[j]=='\0')
		 {       
			// printf("%d\n",count);
			 return i+1;
		 }
	
	}
	return 0;
		




}
int main()
{
	int pos;
	char *p,*q;
	p = (char *) malloc(5);
	q = (char *) malloc(5);
	gets(p);
	gets(q);
	pos = mystrstr(p,q);
	printf("%d\n",pos);
	return 0;
}


