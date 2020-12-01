#include<stdio.h>
int Gcd(int a,int b)
{
	int r;
    while(b)
    {
    r=a%b,a=b,b=r;
    }
    r=a;
    printf("他们的最大公约数为%d",r);
    return r;
}
int main()
{
	int a,b,t;
	begin:printf("请输入两个正整数");
	scanf("%d %d",&a,&b);
	if(a>0&&b>0)
	t=Gcd(a,b);
	else
     goto begin;
    return 0;
}
