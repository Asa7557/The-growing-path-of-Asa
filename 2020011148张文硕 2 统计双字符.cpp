#include<stdio.h>
#include<cstring>
int main()
{
	char a[5],b[80],c;
	scanf("%c",&c);
    while(c!='#')//这里需要判断啥时候主循环结束 
    {
    	gets(a);
    	gets(b);
    	for(int r=strlen(a);r>0;r--)//这步是为了把刚刚用来判断的字符也放到 a 中 
    	{
    		a[r]=a[r-1];
		}
		a[0]=c;
	    for(int i=0;i<strlen(a);i++)//循环比较 
	    {
	    	int count=0;
    		for(int j=0;j<strlen(b);j++)
    		{
    			if(b[j]==a[i]) count++;
    		}
    		printf("%c %d\n",a[i],count);//比完直接输出 
    	}
    	scanf("%c",&c);
    }
	return 0;
}
