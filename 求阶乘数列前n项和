#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int Sn=0,n;
	cin>>n;
	long long int a[n];
	for(int b=0;b<n;b++)
	{
	    a[b]=1;
	}
	for(int i=n;i>0;i--)
	{
		for(int o=i;o>0;o--)
			a[i-1]=a[i-1]*o; 
		Sn=a[i-1]+Sn;
	}
	cout<<Sn;
	return 0;
 } 
