//本题也和3题类似实际算算就能发现规律 
//hdoj 通过 
#include<iostream>
#include <cstring>
using namespace std;
long long int c[500];//定义全局变量   这个题用函数递归调用杭电oj过不去 
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		memset(c,0,sizeof(c));//给数组初始化，memset函数效率大于c[500]={0} 
		int a,b,i;
		cin>>a>>b;
		for(i=0;i<=b-a;i++) //循环版斐波那契 
		{
			if(i==1||i==0)
			c[i]=1;
			else 
			c[i]=c[i-1]+c[i-2];
		}
		cout<<c[b-a]<<endl;
	}
	return 0; 
}
