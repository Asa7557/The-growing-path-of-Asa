#include<stdio.h>
int main()
{
	char c[100];
	int i=0;
	gets(c);
	while(c[i]!='\0')
	{
		if(c[i]>='a'&&c[i]<'z'||c[i]>='A'&&c[i]<'Z')
		c[i]=c[i]+1;
		else 
		    if(c[i]=='z') c[i]='a';
		    else 
			if(c[i]=='Z') c[i]='A';
	    i++;
	}
	printf("%s",c);
}
