#include<stdio.h>
int main()
{
	int t,n[10],i,j,xen[1000],yan[1000],sumaaone=0,sumaatwo=0,sumbaone=0,sumbatwo=0,a,b;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		sumaaone=0;
		sumaatwo=0;
		sumbaone=0;
		sumbatwo=0;
		scanf("%d",&n[i]);
		for(j=1;j<=n[i];j++);
			scanf("%d",&xen[j]);
		for(j=1;j<=n[i];j++)
			scanf("%d",&yan[j]);
		for(j=1;j<=n[i];j=j+2)
		{
			sumaaone=sumaaone+xen[j];
			sumbaone=sumbaone+yan[j];
		}
		for(j=2;j<=n[i];j=j+2)
		{
			sumaatwo=sumaatwo+xen[j];
			sumbatwo=sumbatwo+yan[j];
		}
		a=sumaaone+sumbatwo;
		b=sumbaone+sumaatwo;
		if(a>b)
			printf("%d\n",b);
		else
			printf("%d\n",a);
		
	}
	return 0;
}
