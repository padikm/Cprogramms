#include<stdio.h>
char (*(*fun())[2])();

char fun1()
{
	return 'H';

}

char fun2()
{
	return 'm';

}

char fun3()
{
	return 'A';


}

char fun4()
{
	return 'D';

}


int main()
{
	char (*(*c)[2])(),x,(*(*(*p)())[2])();
	//c=fun();
	//x = c[0][0]();
	//printf("%c\n",x);
	//x = c[0][1]();
	//printf("%c\n",x);
	//x = c[1][0]();
	//printf("%c\n",x);
	//x = c[1][1]();
	//printf("%c\n",x);
	p = fun;
	c = p();
	x = c[0][0]();
	printf("%c\n",x);
	x = c[0][1]();
	printf("%c\n",x);
	x = c[1][0]();
	printf("%c\n",x);
	x = c[1][1]();
	printf("%c\n",x);
	//*((*(*p)())[2])()
	return 0;

}
char (*(*fun())[2])()
{	

	//int i;
	//static char c[2][2] = {{"ma"},{"dh"}};
	static char (*(b[2][2]))() =  {{fun1,fun2},{fun3,fun4}};
	return b;

}


