/*  分为两个矩阵，a为分子b为分母
    分子简单，都是 1；
	分母比较复杂，当n=4时
	1 2 3 4
	2 1 2 3
	3 2 1 2
	4 3 2 1
	不难看出它是一个对称矩阵*/ 
#include<bits/stdc++.h>//下次不用了哈 
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int a[n][n],b[n][n],m=n*n;
	    float sum=0;
	    fill(a[0],a[0]+m,1);//对分子赋值 
		for(int r=0;r<n;r++)//对b对角线赋值 
		{
			b[r][r]=1;
		}
		for(int t=0;t<n;t++)//对b对角线左下的部分赋值 
		{
			int temp=t+1;
			int count=n-t-1; 
			while(count--)
			//循环次数为 n - 相应对角线的下标再减 1 
			{
				b[t][temp]=b[t][temp-1]+1;
				temp++;
			}
		}
		for(int x=0;x<n;x++)//根据对称对右上赋值 
		{
			for(int y=0;y<n;y++)
			{
				b[y][x]=b[x][y];
			}
		} 
		for(int k=0;k<n;k++)//a b 对应元素做比并存到sum 
	    {
	    	for(int g=0;g<n;g++)
	    	{
	    	    sum=sum+(float)a[k][g]/(float)b[k][g];
	    	}
		}
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum<<endl;
		//保留小数位数 cout 有点呆，不如 printf 好用 
		cin>>n;
	}
    return 0;
}

