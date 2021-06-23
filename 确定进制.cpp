#include<stdio.h>
#include<math.h>
int turn10(int b,int k)//将其他进制的数转换为10进制 
{
	if(b<k) return b;
	else
	{
		int a[32]={0},g=0,turn=0;
		/*int turn=b%10;
		for(int g=1;b/10;g++)
		{
			b=b/10;
			turn=turn+(b%10)*pow(k,g);
		}*/  //用 pow 函数方法 
		while(b)
		{
			a[g]=b%10;
			b=b/10;
			g++;
		}
		while(g+1)
		{
			turn=turn*k+a[g];
			g--;
		}
    	return turn;
	}
}
int F(int w,int xi)//比较数据的任意一位与 i（进制）的大小关系 
{
	while(w)
	{
		if(w%10>=xi) return 0;
		w=w/10;
	}
	return 1;
}
int main()
{
	int p,q,r;
	scanf("%d %d %d",&p,&q,&r);
    while(p||q||r)//控制0 0 0 结束 ； 
    {
    	int result=0,i;
    	if(r==0) printf("2\n");//除去类似  0 * 123 = 0 的情况 ； 
    	else
    	{
    		for(i=2;i<=16;i++)//循环测试从2到16进制； 
            { 
                if(F(r,i)==0)  continue;
                if(F(q,i)==0)  continue;
                if(F(p,i)==0)  continue;
	//如果3个数任意某个数的某一位比 i（进制）大，则不符合这一进制数字表示规范所以直接跳过； 
	//别问我怎么知道的，问就是一大堆头发和一大堆肝； 
    		    result=turn10(p,i)*turn10(q,i);
    		    if(result==turn10(r,i))
    		    {
    		    	printf("%d\n",i);
    		    	break;
				}
    		}
    		if(i==17) printf("0\n");//所有进制都不符合，输出 0； 
		}
		scanf("%d %d %d",&p,&q,&r);
	}
	return 0;
}
