#include<stdio.h>
int (*fun())[2]
{

	static int a[2][2]={{1,2},{3,4}};
	return a;


}



int (*fun1())[2]
{

	       static  int b[2][2]={{6,7},{8,9}};
		        return b;

}


int (*fun2())[2]
{

	        static int c[2][2]={{10,11},{12,13}};
		        return c;

}


int main()
{
	int (*(*p[3])())[2],(*x)[2],i,j;
	p[0]=fun;
	p[1]=fun1;
	p[2]=fun2;
	x = p[0]();
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	printf("%d\n",x[i][j]);

	x = p[1]();
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	printf("%d\n",x[i][j]);
	x = p[2]();
	for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        printf("%d\n",x[i][j]);
	return 0;

}
