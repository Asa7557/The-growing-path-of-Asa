#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[101],n,sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);

	for(int j=0;j<n;j++)
	{
		sum1=sum1+a[j];
	}
	for(int k=n-1;k>=0;k--)
	{
		sum2=sum2+a[k];
		sum1=sum1-a[k];
		if(sum2>sum1) 
		{
			printf("%d",n-k);
			break;
		}
	}
	return 0;
}
