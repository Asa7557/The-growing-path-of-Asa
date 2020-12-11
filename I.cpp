#include<stdio.h>
int main()
{
	int sum=2,i,a,n,s=0;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<n;i++)
	{
		for(a=0;a<i;a++)
		s=s+3;
		sum=2*n+s;
	}
	printf("%d",sum);
 } 
