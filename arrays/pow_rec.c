#include<stdio.h>
int mypow(int a,int b);
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	res = mypow(a,b);
	printf("Res = %d\n",res);
	return 0;

	
}

int mypow(int a,int b)
{	
	static int tmp=1;
	if(b==0)
		return tmp;
	tmp = tmp * a;
	b--;
	return mypow(a,b);


}
