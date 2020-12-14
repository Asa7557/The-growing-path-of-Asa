#include<stdio.h>
int main()
{
	int a[20],i=0,o,count=0;
	while(i<20)
	{
		scanf("%d",&a[i]);
		i++;
	} 
	for(i=0;i<20;i++)
	{
		count=0;
		for(o=0;o<i+1;o++)
		{
			if(a[i]%a[o]==0) count=count+1;
		}
		if(count>=2) printf("%d\n",a[i]);
		else continue;
	}
	return 0;
}
