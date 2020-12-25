#include"bits/stdc++.h"
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	float s;
	for(int i=1;i<=a;i++)
	s=s+i;
	for(int i=1;i<=b;i++)
	s=s+pow(i,2);
	for(int i=1;i<=c;i++)
	s=s+1.0/i;
	printf("%.2f",s);
}
