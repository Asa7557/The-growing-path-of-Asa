#include<stdio.h>
int main()
{
	int x,y,a,b,c;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++)
			{
			x=a+10*b+c*100;
			y=1333-x;
			if(y%10==c&&(y/10)%10==b&&(y/100)%10==a)
			printf("%d+%d=1333\n",y,x);
			}
		}
	}
	return 0;
} 
