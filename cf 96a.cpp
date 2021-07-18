#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int flag1=0,flag2=0,len=a.size();
	for(int i=0;i<len;i++)
	{
		int sum=0;
		if(a[i]=='0')
		{
		while(a[i]=='0')
		{
			sum++;
			i++;
		}}
		if(sum>=7)
		{
			flag1=1;
			break;
		}
	}
	for(int i=0;i<len;i++)
	{
		int sum=0;
		if(a[i]=='1') 
		while(a[i]=='1')
		{
			sum++;
			i++;
		}
		if(sum>=7) 
		{
			flag2=1;
			break;
		}
	}
	if(flag1||flag2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
