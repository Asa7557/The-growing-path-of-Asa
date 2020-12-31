/*猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，
还不过瘾，又多吃了一个。第二天早上又将第一天剩下的桃子吃掉一半，
有多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第 n 天早上想再吃时，
发现只剩下一个桃子了。编写程序求猴子第一天摘了多少个桃子。 
*/
#include<stdio.h>
int fac(int n,int m)
{
	if(n==m) return 1;
	else 
	{
		return 2*(fac(n+1,m)+1);
	}
}
int main()
{ 	
    int m;
    scanf("%d",&m);
	printf("%d",fac(1,m));
}
