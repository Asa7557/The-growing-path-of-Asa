#include<stdio.h>
int main()
{
	int a=0,b;
do
	{
		a=a+1;
		b=98-a;
	}
	while(4*a+2*b!=386);
	printf("兔子有%d只",a);
	printf("鸡有%d只",b);
	return 0; 
}
