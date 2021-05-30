#include<stdio.h>
int main()
{
	int m;
	while(scanf("%d",&m)!=EOF)//题中未说何时结束默认文档末尾结束 
	{
		int n=m,nixu=0;
		while(n)
		{
			nixu=nixu*10+n%10;
			n=n/10;
		 } 
		 if(nixu==m) printf("%d是回文数\n",m);
		 else printf("%d不是回文数\n",m);
	}
	return 0;
 } 
