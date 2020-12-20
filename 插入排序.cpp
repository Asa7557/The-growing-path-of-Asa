#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int q,p,t,u[n];
	for(int i=0;i<n;i++)
	{
		cin>>u[i];
	}
	for(q=1;q<n;q++)
	{
		t=u[q];
		for(p=q-1;p>=0;p--)
		{
			if(t<u[p]) u[p+1]=u[p];
			else break;
		}
		u[p+1]=t;
	}
	for(int i=0;i<n;i++)
	cout<<u[i]<<' ';
}
