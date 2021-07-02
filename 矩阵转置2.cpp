#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)//ÊäÈë 
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)//×ªÖÃÊä³ö 
	{
		for(j=0;j<m;j++)
		printf("%d ",a[j][i]);
		printf("\n");
	}
	return 0;
}
