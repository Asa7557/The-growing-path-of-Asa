#include<stdio.h>
#include<string.h>
char make(char a[100])
{
	char b[50];
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		b[i]=a[strlen(a)-i-1];
	}
	strcat(a,b);
	puts(a);
}
int main()
{
	char c[100];
	make(c);
	return 0;
}
