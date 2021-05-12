#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct LIST{
	char a[16];
	struct LIST *next;
}*plist;
int main()
{
	int n;
	cin>>n;
	plist head,temp,jie;
	head=(plist)malloc(sizeof(LIST));
	getchar();
	gets(head->a);
	temp=head;
	for(int i=0;i<n-1;i++)//
	{
		jie=(plist)malloc(sizeof(LIST));
		gets(jie->a);
		temp->next=jie;
		jie->next=head;
		temp=jie;
	}
	plist output=head;
	for(int j=0;j<2*n;j++) 
	{
		cout<<output->a<<' ';
		output=output->next;
	}
}
