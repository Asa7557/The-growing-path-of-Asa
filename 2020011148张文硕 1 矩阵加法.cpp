#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n); 
	int a[m][n],b[m][n],c[m][n];
	for(i=0;i<m;i++)//输入 
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)//输入 
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    for(i=0;i<m;i++)//相加 
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]=a[i][j]+b[i][j]);
		}
		printf("\n");//换行 
	}
	return 0;
}
