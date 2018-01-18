#include<stdio.h>
#include<string.h>

int main()
{
        int i,j,t,k,len,x,y;
        char s[100];
     	scanf("%d",&t);
	getchar();
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
                                printf(". ");
                                j=i+1;
                                s[j]=toupper(s[j]);
                        }
			if(s[i]=='\n')
			{
				for(x=j+1;x<i;x++)
					s[x]=tolower(s[x]);
				printf("%c",s[j]);
				for(x=j+1;x<i;x++)
					printf("%c",s[x]);
			}
		}
		printf("\n");		
	}
	return 0;
}
