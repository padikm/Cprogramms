#include<stdio.h>
void disp(int *a,int );
int main()
{
	int a[]={1,2,3,4};

	disp(a,3);
	return 0;

}

void disp(int *a,int n)
{

	if(n<0)
		return ;

	printf("%d\n",a[n]);
	disp(a,n-1);

}
