/* 
   功能：回文数
	所谓回文数，即顺读与逆读相同的整数。如292、10301均为回文数，编写一个程序判断输入的一个整数是否是回文数。
*/
#include<stdio.h>
int judge(int n);//判断回文数函数
int nerverse(int n);//求n的逆序数
int main()
{
	int n,k;
	//输入整数n
	while(scanf("%d",&n)!=EOF)
	{
		//方法一：判断n是否是回文数
		k=judge(n);
		if(k)
		    printf("%d是回文数",n);
		else
		    printf("%d不是回文数",n);
		/*方法二：求n的逆序数k，n==k则是回文数，n!=k则不是回文数
		k=nerverse(n);
		if(k==n)
		    printf("%d是回文数",n);
		else
		    printf("%d不是回文数",n);
		*/ 
	}
	return 0; 
} 
/*函数名：judge
  函数功能：判断n是否是回文数
  入口参数：整数n
  出口参数：1是回文数，0不是回文数
*/
int judge(int n)
{
	int i,j,count,a[32];//将整数n的每一位分解到数组中
	count=0;
	while(n)
	{
		a[count]=n%10;
		n=n/10;
		count++;
	 } 
	 //判断对应位置的两个数字是否相等
	 //for(j=0;j<count/2&&a[j]==a[count-1-j];j++)
	 for(i=0,j=count-1;i<j;i++,j--)
	 if(a[i]!=a[j]) break;
	 return i>=j;
 } 
 /*函数名：nerverse
   功能：将一个正整数的每一位倒过来
   输入：正整数n
   输出：n的逆置
*/
int nerverse(int n)
{
	int m,k;
	m=0;
	while(n>0)
	{
		k=n%10;
		m=m*10+k;
		n=n/10;
	}
	return m;
 } 
