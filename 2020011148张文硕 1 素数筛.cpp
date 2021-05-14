#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,MAXN;
	cin>>n; 
	MAXN=n+1;//定义n+1大小的数组 
	int prime[MAXN]={0};//默认所有数都是素数，标识为 0 
	int m = sqrt(MAXN);
	prime[0] = 1;
	prime[1] = 1;//0和 1 剔除， 
	for(int i = 2; i <= m; i++)
	{
		if(prime[i])
		{
			continue;
		}//跳过已经剔除的非素数，减少循环次数，节省时间复杂度 
		for(int j = i; j * i < MAXN; j++)
		{
			prime[i * j] =1;
		}
	}//筛法剔除非素数 
	for(int i = 0; i < MAXN; i++)
	{
		if(!prime[i]){
			cout << i << " ";
		}
	}
	return 0;
}
