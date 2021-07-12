//不知道错在哪...吐了 
#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct DUI {
	int grade,data;
	struct DUI *next;
}*pDUI;
void create(pDUI &head) { //创建队列
	pDUI tail;
	head=(pDUI)malloc(sizeof(DUI));
	tail=(pDUI)malloc(sizeof(DUI));
	head->data=0;
	tail->data=0;
	head->next=tail;//头指向尾，空队列
	tail->next=NULL;
}
int main() {
	int n;
	while(cin>>n) {//文档末尾结束 
		pDUI docA,docB,docC;
		create(docA);
		create(docB);
		create(docC);//分别为3个医生创建自己的队列 
		for(int i=1; i<=n; i++) {
			int grade=0;
			char a[4],d;
			scanf("%s %c %d",a,&d,&grade);
			/*cout<<a<<' '<<d<<' '<<grade<<endl; */
			if(a[0]=='I') {//如果是进入则入队 
				pDUI s1=docA,s2=docB,s3=docC,rear,temp;
				rear=(pDUI)malloc(sizeof(DUI));
				rear->grade=grade;//grade保存等级 
				rear->data=i;//data保存序列号 
				switch (d) {//选择进入 1 2 3 医生的队列 
					case '1':
						while(s1->data>=grade) {//按优先级等级排队 
							temp=s1;
							s1=s1->next;
						}
						rear->next=s1;
						temp->next=rear;
						break;
					case '2':
						while(s2->data>=grade) {
							temp=s2;
							s2=s2->next;
						}
						rear->next=s2;
						temp->next=rear;
						break;
					case '3':
						while(s3->data>=grade) {
							temp=s3;
							s3=s3->next;
						}
						rear->next=s3;
						temp->next=rear;
						break;
				}
			} else {//如果不是输入则输出 
					pDUI outputA=docA->next;
					pDUI outputB=docB->next;
					pDUI outputC=docC->next;
				switch (d) {
					case '1':
						if(outputA->next!=NULL)//输出队列首个元素的序列号 
							cout<<outputA->data;
						else
							printf("EMPTY");
						break;
					case '2':
						if(outputB->next!=NULL)
							cout<<outputB->data;
						else
							printf("EMPTY");
						break;
					case '3':
						if(outputB->next!=NULL)
							cout<<outputB->data;
						else
							printf("EMPTY");
						break;
				}
			}
		}
	}
	return 0;
}
