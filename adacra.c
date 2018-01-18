#include<stdio.h>
#include<string.h>
int ans(char s[50],int len,int i)
{
	int j,ut=0,dt=0,u=0,d=0;
	for(j=0;j<len;j++)
	{
		if(s[j]=='U')
		{
			ut=1;
			if(dt==1)
				d++;
			dt=0;
		}
		else
		{
			dt=1;
			if(ut==1)
				u++;
			ut=0;
		}
	}
	if(s[len-1]=='U')
		u++;
	else
		d++;
	if((u>d)&&(d!=0))
		return d;
	else if((u<d)&&(u!=0))
		return u;
	else if((u>d)&&(d==0))
		return u;
	else if((u<d)&&(u==0))
		return d;

}

int main()
{
	int t,i,len[3000],out[3000];
	char s[3000][50];
	scanf("%d",&t);	
	for(i=0;i<t;i++)
	{
		scanf("%s",s[i]);
		len[i]=strlen(s[i]);
	}
	for(i=0;i<t;i++)
	{
		out[i]=ans(s[i],len[i],i);
	}
	for(i=0;i<t;i++)
		printf("%d\n",out[i]);
		
	return 0;
}
