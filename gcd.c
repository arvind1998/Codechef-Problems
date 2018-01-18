#include<stdio.h>
int small(int a,int b)
{
	if(a>b)
		return b;
	else
		return a;
}

int large(int a,int b)
{
        if(a>b)
                return a;
        else
                return b;
}


main()
{
	int a,b,i,c[100],j=0,l=0;
	scanf("%d%d",&a,&b);
	for(i=1;i<=small(a,b);i++)
	{
		if(small(a,b)%i==0)
		{
			c[j]=i;
			j++;
		}
	}
	for(i=j-1;i>=0;i--)
	{
		if(large(a,b)%c[i]==0)
		{
			printf("%d\n",c[i]);
			break;
		}
	}
}
