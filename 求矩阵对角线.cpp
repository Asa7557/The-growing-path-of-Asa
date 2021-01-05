#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],sum1=0,sum2=0;
	for(int i=0;i<n;i++)
	for(int u=0;u<n;u++)
    scanf("%d",&a[i][u]);
    for(int i=0;i<n;i++)
    sum1=sum1+a[i][i];
    for(int i=n-1;i>=0;i--)
    sum2=sum2+a[n-i-1][i];
    printf("%d %d",sum1,sum2);
	}
