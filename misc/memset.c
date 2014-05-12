#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
	int a = 512;
	int *p;
	//q=&a;

	//char *p;
	p = (int *)malloc(sizeof(int));
	p=&a;
	printf("Addres_of_p_Before = %u\n",p);
	printf("Addres_a_Before = %u\n",p+1);
	 printf("%d\n",*(int *)(p));
//	p = malloc(4);
//	memset(p,a,sizeof(p));
	memcpy (p,p+1,sizeof(int));
//	memmove(p,p+1,sizeof(int));
	printf("%d\n",*(int *)(p));
	printf("Addres_of_p_After = %u\n",p);
	printf("Addres_a_After = %u\n",p+1);
//	printf("A = %d\n",a);
	return 0;
	

}
