#include<stdio.h>
#include<string.h>
void sort(char a[])
{
	int i,j,n;
	n=strlen(a);
	char temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
}
int main()
{
	int t,i,j,ans[100];
	char a[100][100],b[100][100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%s",a[i]);
	for(i=0;i<t;i++)
	{
		strcpy(b[i],a[i]);
		sort(a[i]);
	}
	
	for(i=0;i<t;i++)
	{
		if((strcmp(a[i],b[i])==0)&&(a[i][0]=='E'))
                        ans[i]=0;
                if((strcmp(a[i],b[i])==0)&&(a[i][0]!='E'))
                        ans[i]=1;
                else
                        ans[i]=0;

	}
	for(i=0;i<t;i++)
	{
		if(ans[i]==1)
			printf("yes\n");	
		else
			printf("no\n");
	}
	return 0;
}
		
