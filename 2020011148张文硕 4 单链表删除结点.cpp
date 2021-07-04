#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct List{
	int data;
	struct List *next;
}*plist;
int main()
{
	int n,m;
	cin>>n;
	plist L,jie,r;
	L=(plist)malloc(sizeof(List));
	L->next=NULL;//创建头节点 
	r=L;//尾插法 
	for(int i=0;i<n;i++)
	{
		jie=(plist)malloc(sizeof(List));
		cin>>jie->data;
		r->next=jie;
		jie->next=NULL;
		r=jie;
	}
	cin>>m;
	plist temp=L->next,pretemp=L;//每次保存比较结点的前一个结点 
	while(temp!=NULL)
	{
		if(temp->data==m)
		{
			pretemp->next=temp->next;
			temp->next=NULL;
		 } 
		 pretemp=temp;
		 temp=temp->next;//后移 
	}
	plist output=L->next;
	for(int k=0;k<n-1;k++)//输出 
	{
		cout<<output->data<<' ';
		output=output->next;
	}
	return 0;
}
