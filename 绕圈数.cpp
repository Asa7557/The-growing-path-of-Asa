#include<stdio.h>
int main()
{
	int m,i;
	scanf("%d",&m);
	while(m)//控制外循环当输入m=0时跳出 
	{
		int data[10000]={0},x,flag=1;
		data[0]=m;
		for(i=1;i<10000&&flag;i++)
		{
			x=data[i-1];
			while(x)//求每一位的平方并相加 
			{
				data[i]=data[i]+(x%10)*(x%10);
				x=x/10;
			}
			for(int j=0;j<i;j++)//比较是否有循环的元素出现 
			{
				if(data[i]==data[j])
				{
					flag=0;//引入标志变量用于符合条件时跳出循环 
					break;
				}
			}
		}
		for(int k=0;k<i;k++)//输出数组中从 0 到刚刚跳出的那个 i 数组中保存的数据 
		{
			printf("%d ",data[k]);
		}
		printf("\n");
		scanf("%d",&m);
	}
	return 0; 
}
