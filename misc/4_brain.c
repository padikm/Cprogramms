#include<stdio.h>
char (*(*fun())[2])();

char fun1()
{
	return 'A';

}

char fun2()
{
	        return 'B';

}

char fun3()
{
	        return 'C';

}


char fun4()
{
	        return 'D';

}


int main()
{
	char (*(*(*p)())[2])(),(*(*q)[2])();
	int i,j;
	p = fun;
	q = p();
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	printf("%c\n",q[i][j]());		
	return 0;


}

char (*(*fun())[2])()
{
	static char (*b[2][2])() = {{fun1,fun2},{fun3,fun4}};
	return b;


}
