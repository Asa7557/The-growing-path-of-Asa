#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		for(int u=0;u<n;u=u+2)
		{
			for(int v=0;v<n;v=v+5)
			{
				if(i+u+v==n)
				{
					count++;
				}
			}
		}
	}
	printf("%d",count);
	return 0;
}
