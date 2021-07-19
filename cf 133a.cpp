#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int i=0,flag=0;
	while(a[i]!='\0')
	{
		if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag) printf("YES");
	else printf("NO");
}
