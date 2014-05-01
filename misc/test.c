#include<stdio.h>
int main()
{
	char c[] = "s\065AB";
	printf("%ld\n",sizeof(c));
	return 0;

}
