#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int x,a,b,c,d,e,i,o=0,q;
	cin>>x;
	for(i=1;i<6;i++)
	{
	    q=pow(10,i);
		if(x%q>0) o++;
	}
	a=x%10;
	b=x%100/10;
	c=x%1000/100;
	d=x%10000/1000;
	e=x/10000;
	x=a*10000+b*1000+c*100+d*10+e;
	cout<<o<<'\n'<<e<<' '<<d<<' '<<c<<' '<<b<<' '<<a<<'\n'<<x; 
} 
