#include<stdio.h>
#include<string.h>

int main()
{
	
	int i=0,j=0,a[1000000],t,count=0,s;
	scanf("%d",&s);
	while(j<count)
	{
		if(a[count-1-j]==1)
		{
			for(i=0;i<=(count-1-j);i++)
			{
				if(a[i]==1)
					a[i]=0;
				else
					a[i]=1;
			}
		}
		j++;
	}
	printf("%d\n",j);
	return 0;
}
