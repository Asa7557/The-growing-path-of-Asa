#include<stdio.h>
int main()
{
	int x=0,y=0;
	double a=1,s1=0,s2=0,s=0;
	printf("请输入数据，数据间用空格隔开，输入0表示输入数据结束");
	while(a)
	{
		scanf("%lf",&a);
		if(a>0)
		{
			x++;
			s1=s1+a;
		}
	    if(a<0)
		{
			y++;
			s2=s2+a;
		}
	}
	s=(s1+s2)/(x+y);
	printf("正数有%d个    他们的和是%f\n",x,s1);
	printf("负数有%d个    他们的和是%f\n",y,s2);
	printf("他们的平均数是%f\n",s);
	return 0;
}



