#include<stdio.h>

float *fun1()
{
	static float b=1.0;
	return &b;

}


float *fun2()
{
	static float c=2.0;
	return &c;

}

float *fun3()
{
	static float d=3.0;
	return &d;

}


float *fun4()
{
        static float d=4.0;
        return &d;

}


float *(*(*f())[2])();
int main()
{

	float *(*(*(*p)())[2])(),*(*(*q)[2])(),*q1;
	int i,j;
	p = f;
	q = p();
	//q1 = q[0][0]();
	//printf("%f",*q1);

	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{

		q1 = q[i][j]();	
		printf("%f\n",*q1);
	}	

	return 0;
		


}

float *(*(*f())[2])()
{
	static float *(*(a[2][2]))()={{fun1,fun2},{fun3,fun4}};
	return a;


}
