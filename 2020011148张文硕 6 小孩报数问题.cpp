#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
typedef struct LIST
{
	char a[16];
	struct LIST *next;
}*plist;
void create(plist &head,int n)//建立无头尾插法循环链表 
{ 
	head=(plist)malloc(sizeof(LIST));//head是假的链表头 
	/*fgets(head->a,16,stdin);//用fgets防止越界 */
	cin>>head->a;//后来发现名字里没有空格，用cin更好用 
	plist temp=head,jie;
	while(--n)//因为假的链表头已经保存一个名字了，所以循环次数减一 
	{
		jie=(plist)malloc(sizeof(LIST));
		/*fgets(jie->a,16,stdin);*/
		cin>>jie->a;
		temp->next=jie;
		jie->next=head; //循环 
		temp=jie;
	}
}
int main()
{
	int n,w,s;
	scanf("%d%*c",&n); 
	plist head,output;
	create(head,n);
	scanf("%d,%d",&w,&s);//逗号隔开 
	output=head;
	for(int i=0;i<w-1;i++)//先循环到对应的开始报数的 w 
	{
		output=output->next;
	}
	while(1)
	{
		int order=1;
		while(1)
		{
			plist preout=output;
			output=output->next;
			order++;
			if(order==s)//输出第s个并 
			{
				n--;//每输出一个链表长度减一 
				cout<<output->a<<endl;
				output=output->next;
				preout->next=output;
				break;	
			}
		}
		if(n==0) break;
	}
	plist remain=head;
	/*while(n--)//输出剩下的小于 s 个
	{
		cout<<(output->a)<<endl;
		output=output->next;
	}*/
	return 0;
}
