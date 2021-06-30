/*做法同前两题 
注：hdoj 过了 */
#include<iostream>
#include<cstring>
using namespace std;
long long int c[500];
int main()
{
	int n;
	while(cin>>n)//默认文档末尾结束 
	{
		memset(c,0,sizeof(c));
		int i;
		for(i=0;i<=n;i++) 
		{
			if(i==1||i==0) c[i]=1;
			else c[i]=c[i-1]+c[i-2];
		}
       cout<<c[n]<<endl;
	}
	return 0; 
}
