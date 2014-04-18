#include<stdio.h>
char (*fun())[2]
{

	static char a[2][2]={{"ma"},{"dh"}};
	return a;


}



char (*fun1())[2]
{

	       static  char b[2][2]={{"up"},{"ad"}};
		        return b;

}


char (*fun2())[2]
{

	        static char c[2][2]={{"ik"},{"ar"}};
		        return c;

}


int main()
{
	char (*(*p[3])())[2],(*x)[2];
	int i,j;
	p[0]=fun;
	p[1]=fun1;
	p[2]=fun2;
	x = p[0]();
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	printf("%c\n",x[i][j]);

	x = p[1]();
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	printf("%c\n",x[i][j]);
	x = p[2]();
	for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        printf("%c\n",x[i][j]);
	return 0;

}
