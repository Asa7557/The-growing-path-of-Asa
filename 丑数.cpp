#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)//剔除 n 为 1 的情况 
	{
		printf("False");
	}
	else
	{
	while(n%2==0)
	{
		n=n/2;
	}
	while(n%3==0)
	{
	    n=n/3;
	}
	while(n%5==0)
	{
	    n=n/5;
	}//3个循环除掉所有 2 3 5因子 ； 
	if(n==1)//提出因子后的数如果是 1 则为丑数 ； 
	{
		printf("True");
	}
	else//不是1说明 n 还有其他因子，不是丑数； 
	{
		printf("False");
	}
    }
	return 0;
}
