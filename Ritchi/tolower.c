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
		if(*c>='A' && *c<='Z')
			*c = *c + 'a'-'A';
		c++;
	}
}


