#include<stdio.h>
#include<malloc.h>
int  main()
{

	struct node {
		int data;
		struct node *link;
	};
	struct node *p;
	p = (struct node *)malloc(sizeof(struct node));
	printf("%ld\n",sizeof(*p));
	return 0;


}
