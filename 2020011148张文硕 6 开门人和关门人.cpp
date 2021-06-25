#include<stdio.h>
#include<string.h>
int trans(char x[9])//时间转换为秒数 
{
	int h,m,s,sum;
	h=(x[0]-'0')*10+(x[1]-'0');
	m=(x[3]-'0')*10+(x[4]-'0');
	s=(x[6]-'0')*10+(x[7]-'0');
	sum=h*3600+m*60+s;
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)//大循环 
	{
		int m;
		scanf("%d",&m);
		char a[16],b[9],c[9],zao[16],wan[16];
		int min=86400,max=0;
		while(m--)//循环比较这一行数据于上一行的大小并保存相对早的和晚的 
		{
			scanf("%s%s%s",a,b,c);//充分利用 scanf %s 遇到空格结束的特性 
			if(trans(b)<min){ 
				strcpy(zao,a);
				min=trans(b);
			}
			if(trans(c)>max){
				strcpy(wan,a);
				max=trans(c);
			}
	    }
	    printf("%s %s\n",zao,wan);
	    
	}
}
