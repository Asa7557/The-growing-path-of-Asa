#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,Sn=0,a=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a=10*a+2;
		Sn=Sn+a;
	}
	cout<<Sn;
}
