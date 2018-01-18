#include<stdio.h>
#include<math.h>

int main()
{
	int t,a[100],b[100],n[100],i,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d%d%d",&a[i],&b[i],&n[i]);
	for(i=0;i<t;i++)
	{
		if(n[i]%2==0)
		{
			c=a[i]*pow(2,n[i]);
			d=b[i]*pow(2,n[i]);
		}
		
		else
		{
			c=a[i]*pow(2,((n[i]+1)/2));
			d=b[i]*pow(2,((n[i]-1)/2));
		}
		
		if(c>d)
                        printf("%d\n",(c/d));
                else
                        printf("%d\n",(d/c));
	}

	return 0;
}

		

	

