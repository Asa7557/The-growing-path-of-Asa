/*2020011165ÖÇ¼Îè¯
µçÌÝ*/
#include<stdio.h>
#define N 10000
int main()
{
	int i=1,m,n,flag[N],t=0;
	flag[0]=0;
	scanf("%d",&n);
    while(n)
    {
	while(n--)
	{   
		scanf("%d",&m);
		flag[i]=m;
		if(flag[i]>flag[i-1])
		{
			t=t+6*(flag[i]-flag[i-1])+5;
		}
		if(flag[i]<flag[i-1])
		{
			t=t+4*(flag[i-1]-flag[i])+5;
		}
		i=i+1;	
   } 
   	printf("%d\n",t);
    scanf("%d",&n);
   }
	return 0;
}
