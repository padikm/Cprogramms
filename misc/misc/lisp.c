#include<stdio.h>
static char input[1000];
int main(int argc, char **argv){
	puts("Lisp version");
	puts("Press Cntl+c to exit\n");
	while(1){
		fputs("lisp>",stdout);
		fgets(input,1000,stdin);
		printf("No you are a %s",input);
	}
	return 0;
}
