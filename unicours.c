#include<stdio.h>
void sort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
}
int main()
{
	int i,t,n[100],a[100][100],j,count;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<t;i++)
	{
		sort(a[i],n[i]);
		count=1;
		for(j=1;j<n[i];j++)
		{
			if(a[i][0]==a[i][j])
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
