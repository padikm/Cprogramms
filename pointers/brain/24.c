#include<stdio.h>
int (*(*fun())[2])();

int fun1()
{
	return 1;

}

int fun2()
{
	        return 2;

}
int fun3()
{
	        return 3;

}
int fun4()
{
	        return 4;

}



int main()
{
	int (*(*(*x)())[2])(),(*(*y)[2])(),i,j;
	x = fun;
	y = x();

	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		printf("%d\n",(*(*(y+i)+j))());
	return 0;
}

int (*(*fun())[2])()
{
	static int (*(x[2][2]))()={{fun1,fun2},{fun3,fun4}};
	return x;
}
