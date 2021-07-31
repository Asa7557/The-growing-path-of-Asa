/*这个程序我是按照ppt上的方式整理了一遍然后把细节的地方改动了一下*/ 
#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
	int data;
   	struct LNode *next;
}LNode,*Linklist;
void create_LIFO(Linklist &L, int a[], int n)  //头插法建表，逆序建表
{	
	int i;
	Linklist p;
	L = (Linklist)malloc(sizeof (LNode));
	L-> next = NULL;    // 先建立一个带头结点的空链表
	for (i = 0; i < n; i++)
	{   
	    p = (Linklist) malloc (sizeof (LNode));   // 每次生成一个新结点
		p -> data = a[i];
		p -> next = L -> next; 
		L -> next = p;   // 插入到表头 
	}
}
void create_FIFO(Linklist &L, int a[], int n) //尾插法、正序建表
{
	Linklist r, p;
	int i;	
	L = (Linklist)malloc(sizeof(LNode));
    //先建立一个带头结点的单链表
	r = L;                           //r为表尾元素指针
	for(i = 0; i < n; i++)
	{
		p = (Linklist)malloc(sizeof(LNode));     //生成新结点
		p -> data = a[i];         //元素值
		p -> next = NULL;
		r -> next = p; //插入到表尾
		r = p;  //r指针后移
 	}
}
void printLinklist(Linklist L)
{
	LNode *p;
	p = L->next;
	while (p!=NULL)
	{
		printf("%4d",p->data);
		p = p->next;
	}
	printf("\n");
}
void DistroyLinklist(Linklist &L)
{
	Linklist p;
	p=L;
	while(L != NULL)
	{
		L = L -> next;   //后移L指针
		free(p);         //释放当前结点
		p = L;       //后移p指针
	}
}
int main()
{
    Linklist L1, L2;
	int a[100], x, n;	
	n = 0;
	while (scanf("%d", &x)!=EOF)
		a[n++] = x;			
	create_LIFO(L1, a, n);   //头插法建表
	printLinklist(L1);
	create_FIFO(L2, a, n);    //尾插法建表
	printLinklist(L2);
	DistroyLinklist(L1);
	DistroyLinklist(L2);
	return 0;
}

