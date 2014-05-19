#include<stdio.h>
#include<string.h>
#include<malloc.h>
char *sqeeze(char *,char *);
int main() {
	char ch[10],match[10],*res;
	gets(ch);
	gets(match);
	res = sqeeze(ch,match);
	puts(res);
	return 0;
}

char *sqeeze(char *ch,char *c) {
	static char *sh;
	int i,j,flag,k=0;
	sh =(char *) malloc(10);
	//len = strlen(ch);
	for(i=0;ch[i];i++) {

		flag = 0;
	       	for(j=0;j<strlen(c);j++) {
	  	if(ch[i]==c[j])
			flag = 1;
		
		}
		if(!flag) {
		
			sh[k]=ch[i];
			k++;
		
		}
	}
	

	sh[i]=*ch;
	//len = strlen(sh);
//	printf("%d\n",len);
//	puts(sh);
	return (sh);
	

}
