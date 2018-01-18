#include<stdio.h>

int main()
{
	int t,n,a[100],i,j,sum=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		for(i=0;i<n;i++)
			sum= (sum)|(a[i]);
			
		printf("%d\n",sum);
	}
	return 0;
}			
