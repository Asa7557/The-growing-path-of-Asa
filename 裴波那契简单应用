#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a[N+1],i;
	float sum=0;
	a[0]=1;
	a[1]=2;
	for(i=0;i<N;i++)
	{
		a[i+2]=a[i]+a[i+1];
		sum=sum+1.0*a[i+1]/a[i];
	}
	printf("%.2f",sum);
	return 0;
}
