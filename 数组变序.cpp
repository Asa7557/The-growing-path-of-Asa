#include<stdio.h>
int main()
{
	int n,m,a[n],c[n];
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(int i=0;i<m;i++)
    {
    	c[i]=a[n-m+i];
	}
	for(int i=0;i<n;i++)
	{
		c[i+m]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}	
	return 0;
}
