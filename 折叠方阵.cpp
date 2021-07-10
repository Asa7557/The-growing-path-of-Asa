#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d %d",&n,&a);
	int t[n][n];
	t[0][0]=a;
	a++; 
	for(int i=1;i<n;i++)
	{
		int j;
		for(j=0;j<i+1;j++)
		{
			t[j][i]=a;
			a++;
		}
		for(int k=i-1;k>=0;k--)
		{
			t[j-1][k]=a;
			a++;
		}
	}
	for(int r=0;r<n;r++)
	{
		for(int s=0;s<n;s++)
		{
			printf("%d ",t[r][s]);
		}
		printf("\n");
	}
	return 0;
}
