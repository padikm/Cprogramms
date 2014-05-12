#include<stdio.h>
//#define T 10
int exchange(int,int ,int );
int main() {
	int Amount,n,sum,i;
	scanf("%d",&n);
	while(n!=EOF){
		sum=0;
		i=2;
	//	scanf("%d",&n);
		Amount = exchange(n,sum,i);
		printf("%d\n",Amount);
		scanf("%d",&n);
	}
	return 0;
		
}

int exchange(int n,int sum,int i) {

	if(n==2)
		return n;	
	if(i>4)
		return sum;
	sum+=(n/i++);
	return exchange(n,sum,i);

}
