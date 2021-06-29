//因为以前说过不建议直接输出结果，
//所以这次把处理后的结果存起来了
//我真是个听老师话的乖孩子 /偷笑 
#include<iostream>
#include<cstring>
int main()
{
	char a[1000];
	while(scanf("%[^\n]%*c",a)!=EOF)//花里胡哨版的gets 
	{
		char b[1000]={0};
		int i=0,rank=0,len=strlen(a),flag=strlen(a);
		for(i=len-1;i>=0;i--)//下标从后向前 
		{
			if(a[i]==' ')//每次判断出空格就把后面的单词赋给b 
			{
				for(int j=i+1;j<flag;j++) 
				{
					b[rank++]=a[j];
				}
				b[rank++]=' ';//每个单词后加空格 
				flag=i;
			}
		}
		int temp=0;
		if(a[0]!=' ') //处理首个字符不是空格的情况； 
		for(;rank<len;rank++)
		b[rank]=a[temp++];
		puts(b);
	}
	return 0;
}
