#include<bits/stdc++.h>//万能头，永远的神 
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;//c99标准支持用已赋值的变定义数组大小 
	int a[m*n],b[m*n];
	for(int i=0;i<m*n;i++)
	cin>>a[i];
	for(int j=0;j<n*m;j++)//倒序对b赋值 
	{
		b[m*n-j-1]=a[j];
	}
	for(int t=0;t<n*m;t++)//输出 
	{
		cout<<b[t]<<' ';
		if((t+1)%m==0) cout<<endl;
		//在合适位置输出回车，假装我是二维数组 
	}
	return 0;
}
