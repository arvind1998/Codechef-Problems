#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<=n;i++)
		for(j=1;j<n;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}
int main()
{
	int t,n[10],i,j,a[1000],ans[1000];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n[i]);	
		for(j=1;j<=n[i];j++)
			scanf("%d",&a[j]);
		sort(a,n[i]);
		for(j=1;j<n[i];j++)
			if((a[j]+1)!=a[j+1])
			{
				ans[i]=a[j];
				break;
			}

		if(j==n[i]-1)
			if((a[j]+1)!=a[j+1])
                        {
                                ans[i]=a[j+1];
                                break;
                        }

	}
	for(i=1;i<=t;i++)
		printf("%d\n",ans[i]);
	return 0;
}


