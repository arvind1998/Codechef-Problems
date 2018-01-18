#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,k;
	char ing[100][100][100],inh[100][100][100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<4;j++)
			scanf("%s",ing[i][j]);
		for(k=0;k<4;k++)
			scanf("%s",ing[i][k]);
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<4;j++)
		{
			if(strcmp(ing[i][j],inh[i][k])==0)
