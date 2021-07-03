#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}*plist;//定义plist这个符号代表定义一个指向结构体的指针 
int main()
{
	plist L,jie,temp;
	L=(plist)malloc(sizeof(LNode));
	L->next=NULL;
	temp=L;
	int n,m,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)//尾插法建表 
	{
		jie=(plist)malloc(sizeof(LNode));
		scanf("%d",&jie->data);
		jie->next=NULL;
		temp->next=jie;
		temp=jie;
	}
	scanf("%d",&m);
	plist compare=L->next,precompare=L,ChaRu;
	ChaRu=(plist)malloc(sizeof(LNode));
	ChaRu->data=m;
	//把每次用于比较的结点的上一个结点用 precompare 保存便于后面插入新结点 
	for( k=0;k<n;k++)
	{
		if(compare->data>=m)
		{
			ChaRu->next=compare;//先连右边 
			precompare->next=ChaRu;//再连左边 
			break;
		}
        precompare=compare;//每次保存compare结点的前一个结点 
		compare=compare->next;
	}
	if(k==n)//如果新元素比链表里所有元素都大，则直接插到表尾 
	{
		precompare->next=ChaRu;
		ChaRu->next=NULL;
	}
	plist output=L->next;//输出 
	for(int j=0;j<n+1;j++)
	{
		printf("%3d",output->data);
		output=output->next;
	}
	return 0; 
}
