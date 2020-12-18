#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int a,b,c,t;
	cin>>a>>b>>c;
	if(a>b) t=a;
	else t=b;
	if(t>c) cout<<t;
	else cout<<c;
}
