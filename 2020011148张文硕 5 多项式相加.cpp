//这个题我想了好久，我的方法需要用到链表的冒泡排序比较复杂
//所以我整理了ppt上的方法
//但是这个方法我看着也不全对，等回来老师讲吧。
//我还是觉得应该先对两个链表排序，然后对应项相加然后都合并到新创建的新链表里 
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct LNode {
	int coef;
	int power;
	struct LNode *next;
}*plist;
void createlist(plist &L,int n) { //尾插法
	int i;
	plist p,r;
	L = (plist)malloc(sizeof (LNode));
	L-> next = NULL;    // 先建立一个带头结点的空链表
	r=L;
	for (i = 0; i < n; i++) {
		p = (plist) malloc (sizeof (LNode));   // 每次生成一个新结点
		cin>>p->coef>>p->power;
		p->next=NULL;
		r->next=p;   // 插入到表头
		r=p;
	}
}
plist mergeLinklist(plist ha, plist hb) {
	plist p, q, r;
	int x;
	p = ha->next;
	q = hb->next;
	r = ha;
	while (p!=NULL && q!=NULL) {
		if (p->power > q->power) {
			r->next = p;	//a表指数大
			r = r->next;
			p = p->next;
		} else if (p->power < q->power) {
			r->next = q;	//b表指数大
			r = r->next;
			q = q->next;
		} else {	//两表指数相等
			p->coef = p->coef + q->coef;
			if (p->coef != 0) {  //系数不为0
				r->next = p;
				r = r->next;
			}
			p = p->next;
			q = q->next;
		}
	}
	if (p!=NULL)
		r->next = p;
	else
		r->next = q;
	return ha;
}
int main() {
	plist L1,L2,L3;
	int a,b;
	cin>>a>>b;
	createlist(L1,a);
	createlist(L2,b);
	mergeLinklist(L1,L2); 
	plist output=L1->next;
    {
    	while(output!=NULL)
    	{
    		cout<<output->coef<<' '<<' '<<output->power<<endl;
    		output=output->next;
		}
	}
	return 0;
}
