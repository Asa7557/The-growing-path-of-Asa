#include<stdio.h>
#include<string.h>
int main()
{
	char a[81],b[81];
	while(scanf("%[^\n]%*c",a)!=EOF&&scanf("%[^\n]%*c",b)!=EOF)//文档末尾结束 
	{
	int x=strlen(a),y=strlen(b);
	for(int i=0;i<x;)
	{
		if(a[i]>='a'&&a[i]<='z') a[i]=a[i]-32;//把字母都搞成大写 
		if(a[i]==' '||a[i]=='	')//删除tab和空格 
		{
			for(int j=i;j<x;j++)
			{
				a[j]=a[j+1];
			}
			x--;
			continue;//这样是为了处理多个空格连续的情况 
		}
		i++;
	}
	a[x]=0;//在最后一个字母后加上结束符号 
	for(int i=0;i<y;)
	{
		if(b[i]>='a'&&b[i]<='z') b[i]=b[i]-32;
		if(b[i]==' '||b[i]=='	')
		{
			for(int j=i;j<y;j++)
			{
				b[j]=b[j+1];
			}
			y--;
			continue;
		}
		i++;
	}
	b[y]=0;
    if(strcmp(a,b)) printf("No\n");
    else printf("Yes\n");
    }
    return 0;
}
