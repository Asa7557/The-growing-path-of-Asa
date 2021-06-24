#include<stdio.h>
#include<cstring>
int main()
{
	char a[1000],b[1000];
	while(gets(a)!=NULL)//默认文档末尾结束 
	{
		int count=0,flag=1,begin,i,j;
		gets(b);
		for(i=0;i<strlen(a);i++)
		{
			for(j=0;j<strlen(b);j++)//循环比较 
			{
				if(b[j]==a[j+i]) ;
				else break;
			}
			if(j==strlen(b)&&flag)//如果循环比较到最后未被break打破则子串出现 
			{
				printf("%d,",i+1);
			}
			if(j==strlen(b))//flag用来标记第一次出现子串的位置 
			{
                flag=0;
				count++;
			}
		}
		if(flag==1) printf("-1,");//flag还用来标记子串是否出现过 
		printf("%d\n",count);
	}
}
