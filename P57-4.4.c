#include<stdio.h>
int main()
{
char ch;
printf("请输入一个小写字母");
scanf("%c",&ch);
if(ch>=97&&ch<=122)
{
ch=ch-32;
printf("%c",ch);
}
else
printf("您的输入有误，请输入字母或关闭大写锁定");
return 0;
}

