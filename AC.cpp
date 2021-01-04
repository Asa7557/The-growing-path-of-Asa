#include<bits/stdc++.h>
using namespace std;
int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	float a[N+1],sum=0;
	a[0]=M;
	for(int i=0;i<N;i++)
	{
		a[i+1]=a[i]/2;
		sum=sum+a[i];
	}
	printf("%.2f ",a[N]);
	printf("%.2f",sum);
}
