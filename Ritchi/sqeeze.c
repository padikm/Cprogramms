#include<stdio.h>
#include<string.h>
#include<malloc.h>
char *sqeeze(char *,char );
int main() {
	char ch[10],c,*res;
	gets(ch);
	c=getchar();
	res = sqeeze(ch,c);
	puts(res);
	return 0;
}

char *sqeeze(char *ch,char c) {
	static char *sh;
	int i=0,len;
	sh =(char *) malloc(10);
	len = strlen(ch);
	while(*ch) {
		if(*ch!=c) {
			sh[i++]=*ch;
			//++;
		}

		ch++;

	}
	sh[i]=*ch;
	//len = strlen(sh);
	printf("%d\n",len);
//	puts(sh);
	return (sh);
	

}
