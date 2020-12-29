#include<stdio.h>
#include<iostream>
using namespace std;
int fac(int n)
{
	long long y;
	if(n==0||n==1) y=1;
	else{
		y=fac(n-1)*n;
		}
		return y;
}
int main()
{                      
    int n;
    long long y;
    printf("请输入一个正整数");
    cin>>n;
    y=fac(n);
    cout<<n<<'!'<<'='<<y<<endl;
}

