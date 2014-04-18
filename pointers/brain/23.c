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
	char c;
	c = fun();
	printf("%c\n",c);
	return 0;

}
char (*(*fun())[2])()
{
	//int i;
	char c;
	char (*(b[2][2]))() =  {{fun1,fun2},{fun3,fun4}};
	//for(i=0;i<2;i++)
	//printf("%s",b[i]);
	c = (char) ((*(*(b+1)+1))());
	printf("%c\n",c);
	return c;

}


