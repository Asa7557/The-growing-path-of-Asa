#include<stdio.h>
int Gcd(int a,int b)
{
    int r;
    while(a!=b) 
    {
    	if(a>b)
    	a=a-b;
    	else
    	b=b-a;
    	r=a;
    } 
    printf("他们的最大公约数是%d",r);
}
int main()
{
	int a,b,r; 
	begin:printf("请输入两个正整数");
	scanf("%d %d",&a,&b);
	if(a>0&&b>0)
	r=Gcd(a,b);
	else
     goto begin;
    return 0;
}
