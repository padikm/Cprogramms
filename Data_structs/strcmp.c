#include<stdio.h>
#include<string.h>
int main()
{

	int len;
	char ch[10],c[10];
	gets(ch);
	gets(c);
	len = strcmp(ch,c);
	printf("Len = %d",len);
	return 0;


}
