#include<stdio.h>
#include<string.h>
char *mystrrev(char *ch);
int main()
{
	char ch[10],*c;
	gets(ch);
	c = mystrrev(ch);
	printf("Rev = %s",c);
	return 0;

}

char *mystrrev(char *ch)
{
	char *c;
	int i,len = strlen(ch);
	i=len;
//	printf("Rev = %s",ch);
	c = (char*)malloc(strlen(ch));
	ch = ch + len-1;
//	printf("%c\n",*ch);
	while(len--)
	{
		*c = *ch;
		//printf("%c\n",*c);
		c++;
		ch--;
		//printf("%c\n",*c);
	}
//	printf("Rev = %s",ch);
	return (c=c-i);

}
