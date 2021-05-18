#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x)//x=0结束 
	{
		int count=0; 
		int prime[x]={0},RealPrime[10000]={0},sign=0;//驼峰式命名 
		for(int j=2;j<=10000;j++)//素数筛；
		{
			if(prime[j]) continue;
	    	for(int k=j;k*j<10000;k++)
		    {
		    	prime[j*k] =1;
	    	}
		}
		prime[0]=prime[1]=1;
		for(int i=0;i<x;i++)//将下标变为数组中的元素 
		{
			if(!prime[i])
			{
				RealPrime[sign]=i;
				sign++;
			}
		}
		for(int p=0;p<=sign/2;p++)//统计能拆成的个数 
		{
			for(int q=sign-1;q>=sign/2;q--)
			{
				if(RealPrime[p]+RealPrime[q]==x) 
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
		scanf("%d",&x);
	}
	return 0;
 } 
