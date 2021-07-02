#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}*plist;//定义plist这个符号代表定义一个指向结构体的指针 
void create(plist &L,int b[],int m)//尾插法创建链表 
{
	plist jie,temp;
	L=(plist)malloc(sizeof(LNode));
	L->next=NULL;
	temp=L;
	for(int i=0;i<m;i++)
	{
		jie=(plist)malloc(sizeof(LNode));
		jie->data=b[i];
		temp->next=jie;
		jie->next=NULL;
		temp=jie;
	}
}
void turn(plist &L,int n)//到过来再创建一遍 
{
	LNode *p,*temp;
	p=L->next;
	L->next=NULL;
    while (p!=NULL)
	{
        temp=p->next;
        p->next=L ->next;
        L->next=p;
        p=temp;
    }
}
void Output(plist L)//输出 
{
	plist p;
	p=L->next;
	while(p!=NULL)
	{
		p=p->next;
		printf("%3d",p->data);
	}
}
void distory(plist &L)//释放空间 
{
	plist p;
	p=L;
	while(L!=NULL)
	{
		L=L->next;
		free(p);
		p=L;
	}
}
int main()
{
	plist L;
	int a[101],n=0;
	while(scanf("%d",&a[n++])!=EOF);//按要求输入 
	create(L,a,n);
	turn(L,n);
	Output(L);
	distory(L);
	return 0;
}
