#include<stdio.h>
int main()
{
	double n,b;
	while(scanf("%lf",&n)&&n!=0)
    {
    int store1[100]={0},i;
	long long int a;
	a=n;
	b=n-a;//整数部分与小数部分分离 
	for(i=0;a;i++)//对整数部分求2进制 
	{
		if(a%2) store1[i]=1;
		a=a/2;
	}
	while(i--)
	{
		printf("%d",store1[i]);
	}
	printf(".");
	for(int j=0;j<6;j++)//最多保留6位小数 
	{
		if(b*2>=1) 
		{
			printf("1");
			b=b*2-1;
		}
		else 
		{
			b=b*2;
			printf("0");
		}
	 } 
	printf("\n");
    }
    return 0;
}
