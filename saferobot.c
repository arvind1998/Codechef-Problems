#include<stdio.h>
int main()
{
	int t,i,r,c,p,q,j,k,l,f=0;
	char s[100];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&r,&c);
		scanf("%s",s);
				for(j=0;s[j]!='\0';j++)
				{
			
					if(s[j]=='U')
						p++;
					else if(s[j]=='D')
						p--;
					else if(s[j]=='R')
						q++;
					else if(s[j]=='L')
						q--;
				
				if(p==r||p==-r)
				{
					f=1;
					break;
				}
				if(q==c||q==-c)
				{	f=1;break;		}
				}

		if(f==1)
			printf("safe\n");
		else
			printf("unsafe\n");
		
	}
	return 0;
}

			
