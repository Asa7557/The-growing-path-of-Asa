/* n    A(n)
   1	1
   2	3
   3	8
   4	20
   5	48
   6	112
   7	256
   8	576
   ...
   A(n)=A(n-1)*2+pow(2,n-1)*/
//hdoj 过了 
#include<stdio.h>
#include<string.h>
int mypow(int x)//pow 函数有误差，循环则没有 
{
	int sq=1;
	for(int g=1;g<x;g++)
	{
		sq=sq*2;
	}
	return sq;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)//外循环控制循环次数 
	{
		int n;
		int a[22];
		memset(a,0,sizeof(a));//初始化 
		scanf("%d",&n);
		for(int i=1;i<=n;i++)//递推公式 
		{
			a[i]=2*a[i-1]+mypow(i-1);
		}
		printf("%d\n",a[n]);
	}
	return 0;
}
