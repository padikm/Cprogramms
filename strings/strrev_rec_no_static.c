#include<stdio.h>
#include<string.h>
char *mystrrev(char *,int ,int );
int main()
{
	char *a,*res;
	int n,len,j=0;
	puts("enter the value of n");
	scanf("%d",&n);
	a = (char *)malloc(n);
	gets(a);
	len = strlen(a);
	res = mystrrev(a,len-1,j);
	puts(res);
//
	return 0;
	

}

char *mystrrev(char *c,int i,int j)
{
	char tmp;
//	static int j;
	if(j>=i)
		return c;
	tmp = c[i];
	c[i] = c[j];
	c[j] = tmp;
	j++;
	i--;

	return(mystrrev(c,i,j));

}

