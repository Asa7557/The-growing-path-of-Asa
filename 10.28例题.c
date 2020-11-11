#include<stdio.h>
int main()
{
	int a,b,x,y,n,i;
	printf("请输入两个正整数并用逗号隔开");
    scanf("%d,%d",&a,&b);
    x=a>b?a:b;
    y=a<b?a:b;
    while(y)
    {
    n=x%y,x=y,y=n;
    }
    i=a*b/x;
    printf("他们的最小公倍数是%d",i);
    return 0;
}
