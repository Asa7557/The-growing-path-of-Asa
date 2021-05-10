#include<stdio.h>
int swap1(int &x,int &y)//引用 
{
	x=x+y;
	y=x-y;
	x=x-y;
}//不引入额外变量交换 x y 
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
    swap1(a,b);
    printf("%d %d",a,b);
}

