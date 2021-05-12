#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct LIST{//双向链表 
	char a[16];
	struct LIST *next;
	struct LIST *prev;
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
	for(int i=0;i<n-1;i++)//循环双向链表 
	{
		jie=(plist)malloc(sizeof(LIST));
		gets(jie->a);
		temp->next=jie;
		jie->prev=temp; 
		jie->next=head;
		temp=jie;
		head->prev=temp;
	}
	plist output=head;
	for(int j=0;j<2*n;j++) 
	{
		cout<<output->a<<' ';
		output=output->prev;
	}
}
