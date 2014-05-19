#include<stdio.h>
void mytolower(char *);
int main() {
	char c[10];
	gets(c);
	mytolower(c);
	puts(c);
	return 0;

}

void mytolower(char *c) {
	while(*c) {

		*c = (*c>='A' && *c<='Z')?*c + 'a'-'A':*c ;
		c++;
	}
}


