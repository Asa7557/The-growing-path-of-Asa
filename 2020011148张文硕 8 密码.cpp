//这个是东秦oj的题我去年做过，直接ctrl+c  v 
#include<stdio.h>
#include<string.h>
int main()
{
	int n,a=0,b=0,c=0,d=0,count=0;
	char m[17];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		count=0;
	    c=0;d=0;a=0;b=0;//a b c d记录4种变量是否出现 
		scanf("%s",m);
		for(int u=0;u<strlen(m);u++)//循环判断 
		{
			if(m[u]>='0'&&m[u]<='9') a++;
			if(m[u]>='a'&&m[u]<='z')b++;
			if(m[u]>='A'&&m[u]<='Z')c++;
			if(m[u]=='~'||m[u]=='!'||m[u]=='@'||m[u]=='#'||m[u]=='$'||m[u]=='%'||m[u]=='^') d++;			
		}
		if(a>0) count++;
		if(b>0) count++;
		if(c>0) count++;
		if(d>0) count++;
		if(count>=3) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
