#include<stdio.h>
int main()
{
	int a,b,n;
	for(a=12;a<=1000;a=a+2)
	if(a%3==0&&a%7==0)
	printf("%d\n",a);
}
