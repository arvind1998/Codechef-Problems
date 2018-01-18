#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,t,k,len;
	char s[100];
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%[^\n]s",s);
		len=strlen(s);
		s[0]=toupper(s[0]);
		printf("%c",s[0]);
		for(i=0;i<len;i++)
		{
			if(s[i]==' ')
			{
				printf(".");
				j=i+1;
				s[j]=toupper(s[j]);
				printf("%c",s[j]);
			}
		}
	}
	return 0;
}
