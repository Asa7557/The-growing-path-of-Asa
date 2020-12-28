#include<stdio.h>
int main()
{
	int n;
	printf("请输入数据总数");
	scanf("%d",&n);
	int a=0,b=0,c=0,d=0,e=0;
    double f[n];
	for(;a<n;a++)
	{
		printf("请输入第%d个数据",a+1);
		scanf("%d",&f[a]);
	}
	for(;b<n;b++)
	{
		for(c=0;c<n;c++)
	    {
		if(f[c]>f[c+1])
	    {
			d=f[c];
			f[c]=f[c+1];
			f[c+1]=d;
		}
	    }
	}
	for(;e<n;e++)
	{
		printf("%4d  ",f[e]);
		if((e+1)%5==0)
		printf("\n");
	}
	return 0;
 } 
