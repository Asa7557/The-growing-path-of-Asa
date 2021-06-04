#include<stdio.h>
#include<string.h>
int a[1000000]={0},b[1000000]={0},c[1000000]={0}; 
int main()
{
	a[0]=a[1]=1;
	for(int i=2;i*i<=1000000;i++)//筛选素数； 
	{
		if(!a[i])
		for(int j=i*i;j<=1000000;j+=i)
		{
			a[j]=1;
		}
	}
	for(int i=2;i<=1000000;i++)
	{
		int ans=i;
		int sum=0;
		if(a[i])
		{
			continue;
		}
		while(ans)
		{
			sum=sum+ans%10;
			ans=ans/10;
		}
		if(!a[i] && !a[sum])
		{
			b[i]=1;
		}
	}
	int res=0;
	for(int k=1;k<=1000000;k++) 
	{
		if(b[k])
		res++;
		c[k]=res;//把每一段(1,k)范围内的美素数储存到数组c； 
	}
	int m,n,p=1,t;
	scanf("%d",&t); 
	while(t--)
	{
		scanf("%d %d",&m,&n);
		printf("Case #%d: %d\n",p++,c[n]-c[m-1]); 
	}
	return 0;
} 
