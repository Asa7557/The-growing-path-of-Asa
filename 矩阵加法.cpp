#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n); 
	int a[m][n],b[m][n],c[m][n];
	for(i=0;i<m;i++)//ÊäÈë 
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)//ÊäÈë 
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    for(i=0;i<m;i++)//Ïà¼Ó 
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]=a[i][j]+b[i][j]);
		}
		printf("\n");//»»ÐÐ 
	}
	return 0;
}
