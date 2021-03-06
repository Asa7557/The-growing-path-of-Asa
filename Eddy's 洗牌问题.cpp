/*以n=10为例 
a.
1  2  3  4  5  6  7  8  9  10数字1的顺序：i=1 
11 12 13 14 15 16 17 18 19 20
b.
11 1 12 2 13 3 14 4 15 5     数字1的顺序：2=2*i
16 6 17 7 18 8 19 9 20 10
c.
16 11 6 1 17 12 7 2 18 13    数字1的顺序：4=2*i
8 3 19 14 9 4 20 15 10 5
d.
8 16 3 11 19 6 14 1 9 17     数字1的顺序：8=2*i
4 12 20 7 15 2 10 18 5 13 
e.
4 8 12 16 20 3 7 11 15 19    数字1的顺序：16=2*i
2 6 10 14 18 1 5 9 13 17
f.
2 4 6 8 10 12 14 16 18 20    数字1的顺序：11=2*(i-n)-1
1 3 5 7 9 11 13 15 17 19
g.
1  2  3  4  5  6  7  8  9  10数字1的顺序：1=2*(i-n)-1 
11 12 13 14 15 16 17 18 19 20*/  
//为了验证 ，再试一下n=4
/*
a.
1 2 3 4 数字1的顺序：i=1 
5 6 7 8
b.
5 1 6 2 数字1的顺序：i=2*i 
7 3 8 4
c.
7 5 3 1 数字1的顺序：4=2*i
8 6 4 2
d.
8 7 6 5 数字1的顺序：8=2*i
4 3 2 1
e.
4 8 3 7 数字1的顺序：7=2*(i-n)-1
2 6 1 5
f.
2 4 6 8 数字1的顺序：5=2*(i-n)-1
1 3 5 7
g.
1 2 3 4 数字1的顺序：1=2*(i-n)-1
5 6 7 8*/
//本题 hdoj 通过 
#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)//文档末尾结束 
	{
		int count=0,i=1;
	    while(1)//因为用i==1结束会错过n=1的特殊情况
		//所以不知道啥时候结束时就等着后面跳出来 
	    {
		    if(i<=n) i*=2;
		    else i=2*(i-n)-1;
	    	count++;
	    	if(i==1) break;
	    }
		printf("%d\n",count);
    }
    return 0;
}
