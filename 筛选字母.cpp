#include<stdio.h>
int main()
{
	char a[80],b[80];
	int n=0,i=0;
	gets(a);
	while(a[n]!='\0')
	{
		if(a[n]>='a'&&a[n]<='z'||a[n]>='A'&&a[n]<='Z')
		{
			b[i]=a[n];
			i++;
		}
		n++;
	}
	puts(b);
	return 0;
}
