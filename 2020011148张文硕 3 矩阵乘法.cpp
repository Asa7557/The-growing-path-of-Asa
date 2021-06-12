#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,i,j,t,k;
	scanf("%d %d %d",&m,&t,&n);  
	int a[20][20],b[20][20],c[20][20];
	for(i=1;i<=m;i++)//输入 
	{
		for(j=1;j<=t;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=t;i++)//输入 
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    for(i=1;i<=m;i++)//循环相乘 
    {
    	for(j=1;j<=n;j++)
    	{
    		for(k=1;k<=t;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];//结果累加作为下一个数组的第i j个元素 
		}
	}
    for(i=1;i<=m;i++)//输出 
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");//换行 
	}
	return 0;
}
    
    
