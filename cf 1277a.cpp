#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int x,a[10],i,n;
		cin>>x;
		for(i=0;x>0;i++)
		{
			a[i]=x%10;
			x/=10;
		}
		i--;
		n=i*9;
		n+=a[i];
		for(;i>0;i--)
		{
			if(a[i-1]<a[i]) 
			{
				n--;
				break;
			}
			else if(a[i-1]>a[i])
			{
				break;
			}
		}
		cout<<n<<endl;
	}
}
