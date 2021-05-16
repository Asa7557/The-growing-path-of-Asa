#include<bits/stdc++.h>
using namespace std;
int Fprime(int num)
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}//判断素数函数 
int main()
{
	int min,max,sign=0,prime[10000]={0};
	cout<<"请输入上限和下限" <<endl;
	cin>>min;
	cin>>max;
	for(int j=min;j<=max;j++)
	{
	    if(Fprime(j))
	    {
	    	prime[sign]=j;
	    	sign++;
		}
	}//筛选范围内素数 
	for(int k=0;k<sign;)
	{
		if(prime[k]+2==prime[k+1])
		{
	    	printf("%d,%d\n",prime[k],prime[k+1]);
		}
		k=k+1;
	}//循环输出符合条件的素数对 
	return 0;
 } 
