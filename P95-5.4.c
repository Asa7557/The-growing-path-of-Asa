#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,rate;
	int n;
	printf("请输入本金后输入一个空格再输入存款年数(存款年数只能为1，2，3，5，8中的一个)");
	scanf("%lf %d",&x,&n);
	switch (n)
	{
		case 1:rate=0.0225;
		break;
		case 2:rate=0.0243;
		break;
		case 3:rate=0.027;
		break;
		case 5:rate=0.028; 
		break;
		case 8:rate=0.03;
		break;
	}
	y=x*rate*n+x;//  根据百度搜索的结果定期存款不计复利所以算式不用y=x*pow(1+rate,n) 
	printf("本金=%f ",x);
	printf("年数=%d ",n);
	printf("合计=%f ",y);
	return 0;
}
