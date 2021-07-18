#include<stdio.h>
#include<cstring>
int main()
{
	char a[100];
	while(gets(a))//文档末尾结束 
	{
		a[0]=a[0]+'A'-'a';//第一个字母大写 
		for(int i=1;i<strlen(a);i++)//空格后首个不为空格的字母大写 
		{
			if(a[i]==' '&&a[i+1]!=' ') a[i+1]=a[i+1]+'A'-'a';
		}
		puts(a);
	}
	return 0;
}
