#include<stdio.h>
int main()
{

	int a[]={10,20,30,40};
	int b[]={40,50,60,70},i;
	float f,d;
	f=30.0;
	d=40.7890;
	printf("%3.2lf %.1lf\n",f,d);
	for(i=0;i<4;i++) {
		printf("%3d %3d\n",a[i],b[i]);
	}
	return 0;


}
