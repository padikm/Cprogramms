#include<stdio.h>
#include<malloc.h>
void sort(int *,int n);
int main()
{
	int *a,i,n,*r,j,count,t;
	scanf("%d",&t);
	while(t--)
	{
	count = 0;
	scanf("%d",&n);
	a = malloc(n * sizeof(int));
	r = malloc(n * sizeof(int));
	//Pie weights
	//printf("Enter pie weights\n");
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	//Rack weights
	//printf("Enter rack weights\n");
	for(i=0;i<n;i++)
		      scanf("%d",(r+i));
	sort(a,n);
	sort(r,n);
	
	
	for(i=n-1;i>=0;--i)
	{ 
		for(j=n-1;j>=0;--j)
		{
	
			if(a[i]<=r[j])
			{
				
				++count;
				r[j]=-1;
				break;
			}
		}
	}

	printf("%d\n",count);
	}
	//printf("count = %d\n",count);
	return 0;

}

void sort(int *a,int n)
{

	int i,j,tmp,small;
	for(i=0;i<n;i++)
	{
		small = i;
	  for(j=i+1;j<n;j++)
	  {
		  if(a[small]>a[j])
		  {
		  
		  	small = j;
		  
		  }
	  }
	  
		  tmp = a[i];
		  a[i] = a[small];
		  a[small] = tmp;
					
				
	  }


}
