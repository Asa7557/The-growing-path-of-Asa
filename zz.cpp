#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
	int n;
	cin>>n;
	int temp=0;
	for(int i=2;i<=n;i++)
	{
		int sum=1;
		temp=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				a[temp++]=i/j;
				sum+=i/j;
			}
		}
		if(sum==i)
		{
			sort(a,a+temp);
			cout<<i<<" "<<"1 ";
			for(int i=0;i<temp;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		
	}
	
	
}
