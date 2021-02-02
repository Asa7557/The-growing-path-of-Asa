#include<stdio.h>
int main()
{
	int n,a[6],h,m,s;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int u=0;u<6;u++)
		{
			scanf("%d",&a[u]);
		}
		h=a[0]+a[3];
		m=a[1]+a[4];
		s=a[2]+a[5];
		if(s>=60)
		{
			int x;
			x=s/60;
			s=s-x*60;
			m=m+x;
		}
		if(m>=60)
		{
			int y;
			y=m/60;
			m=m-y*60;
			h=h+y;
		}
		printf("%d %d %d",h,m,s);
	}
}
