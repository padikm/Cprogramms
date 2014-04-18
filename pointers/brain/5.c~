#include<stdio.h>
int (*fun())[2][2]
{

	static int b[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
	return b;

}
int main()
{
	int (*(*p)())[2][2],i,j,l,(*c)[2][2];
	p = fun;
	c = p();
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			for(l=0;l<2;l++)
				printf("%d\n",c[i][j][l]);

	return 0;

}
