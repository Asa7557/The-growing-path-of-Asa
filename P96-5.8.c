#include<stdio.h>
int main()
{
	char ch;
	printf("请输入一个任意字符");
	scanf("%c",&ch);
	if (ch>=49&&ch<=57) 
		printf("这是一个数字字符"); 
	else
		if (ch>=65&&ch<=90)
			printf("这是一个大写字母"); 
		else
			if (ch>=97&&ch<=122)
				printf("这是一个小写字母"); 
			else
				if (ch==32)
					printf("这是一个空格") ;
				else
					printf("这是一个非空格符号") ;
	return 0;
}
