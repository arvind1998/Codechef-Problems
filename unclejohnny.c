#include<stdio.h>

int main()
{
	int t,i,n[1000],j,ans[1000],k[1000],s[1000][1000],a[1000],x,y,z;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n[i]);
		for(j=1;j<=n[i];j++)
			scanf("%d",&s[i][j]);
		scanf("%d",&k[i]);
		a[i]=s[i][k[i]];
		
      
        	for(x=1;x<=n[i];x++)
                	for(y=1;y<n[i];y++)
                        	if(s[i][y]>s[i][y+1])
                        	{
                                	z=s[i][y];
                                	s[i][y]=s[i][y+1];
                                	s[i][y+1]=z;
                        	}


		for(j=1;j<=n[i];j++)
			if(s[i][j]==a[i])
			{
				ans[i]=j;
				break;
			}
	}
	for(i=1;i<=t;i++)
		printf("%d\n",ans[i]);
	return 0;
} 

