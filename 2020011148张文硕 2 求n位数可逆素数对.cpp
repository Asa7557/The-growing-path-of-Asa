#include<stdio.h>
#include<math.h>
int Fprime(int num)//判断素数函数 
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n,prime[100000]={0},sum=0,max,min,sign=0;
	printf("请输入数据的位数") ; 
	scanf("%d",&n); 
	max=pow(10,n);
	min=pow(10,n-1);
	for(int i=min;i<max;i++)
	{
		if(Fprime(i))
		{
			prime[sign]=i;
			sign++;
		}
	}//将n位数中的素数保存到数组 
	for(int k=0;k<sign;k++)
	{
		int temp=prime[k],nixu=0;
		while(temp!=0)
		{
			nixu=10*nixu+temp%10;
			temp=temp/10;
		}
		if(nixu!=prime[k])
		{
		    if(Fprime(nixu))
		    {
		        sum++;
		    }
		}
	}
	printf("%d",sum/2);
	return 0;
}


