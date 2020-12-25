#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,i;
	for(i=101;i<1000;i++)
	{
		a=i/100;
		b=(i-100*a)/10;
		c=i%10;
		if(i==a*a*a+b*b*b+c*c*c)
		printf("%d\n",i);
	}
	return 0;
}
