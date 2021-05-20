#include<stdio.h>
int calculate(int x)
{
	int memory,temp;//memory用于储存上一次的x也就是当前楼层 
	if(x>memory)  
	{
		temp=6*(x-memory)+5;
		memory=x;
		return temp;
	}
	if(x<memory) 
	{
		temp=4*(memory-x)+5;
		memory=x;
		return temp;
	}
	if(x==memory)
	{
		memory=x;
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n)//当每行第一个数是 0 时结束 
	{	
	    int m,sum=0;
	    while(n--)//控制每行输入的数据个数 
	    {
		    scanf("%d",&m);
		    if(sum==0)//第一次初始楼层为0 
		    {
		    	calculate(m);
				//引用函数仅仅为了把楼层(m)传递给函数并用memory记住这个楼层下次用 
		    	sum=6*m+5;
			}
		    else sum=sum+calculate(m);
			//自第二次开始每次引用函数计算电梯这次运行所需时间 
	    }
	    printf("%d\n",sum);
	    scanf("%d",&n);
	}
	return 0;
}
