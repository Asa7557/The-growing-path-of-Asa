#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)//控制外循环 
	{
		int a,b,c,asum=0,bsum=0,csum=0;
		a=n,b=n,c=n;
		while(a)//10进制
		{
			asum=asum+a%10;
			a=a/10;
		}
		while(b)//12进制 
		{
			bsum=bsum+b%12;
			b=b/12;
		}
		if(asum==bsum)//如果这一步不满足则不求16进制的，减小复杂度 
		{
			while(c)
			{
				csum=csum+c%16;
				c=c/16;
			}
			if(csum==bsum)
			{
				printf("%d is a Sky Number.\n",n);
			}
			else printf("%d is not a Sky Number.\n",n);
		}
		else printf("%d is not a Sky Number.\n",n);
		//printf("%d %d %d ",asum,bsum,csum);  用这句调错； 
	}
	return 0; 
}
