#include<stdio.h>
int make(int a)
{
	int s=0;
	while(a>0)
	{
		s=s+a%10;
		a=a/10;
	}
    return s;
}
int main()
{
	int c;
	scanf("%d",&c);
	printf("%d",make(c));
	return 0;
}
