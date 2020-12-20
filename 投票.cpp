#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p=10;
	struct toupiao
    {
    char ch[7];
	int v;
    }c[3]={{"zhang",0},{"wang",0},{"li",0}};
	char xuan[7];
	for(int i=1;i<=10;i++)
	{
	gets(xuan);
	for(int u=0;u<3;u++)
	{
	if(strcmp(c[u].ch,xuan)==0)
	c[u].v++;
	continue;
	}
	}
	cout<<"zhang "<<c[0].v<<endl;
	cout<<"wang "<<c[1].v<<endl;
	cout<<"li "<<c[2].v<<endl;
}
