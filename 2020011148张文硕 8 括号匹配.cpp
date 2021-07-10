#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct zhan {
	char data[101];
	int top;
} STACK;//创建栈 
int main() {
	char a[101];
	while(cin>>a) {//ctrl+z结束 
		int i=0,flag=1;
		STACK w;
		w.top = 0;
		while(a[i]!='\0') {
			switch (a[i]) {//3种 前括号进栈，3种 后括号比较 
				case '(':
					w.data[w.top++]=a[i];//进栈 
					break;
				case '[':
					w.data[w.top++]=a[i];
					break;
				case '{':
					w.data[w.top++]=a[i];
					break;
				case ')':
					if(w.data[--w.top]!='(') flag=0;//出栈 
					break;
				case ']':
					if(w.data[--w.top]!='[') flag=0;
					break;
				case '}':
					if(w.data[--w.top]!='{') flag=0;
					break;
			}
			i++;
			if(flag==0) break;//如果中间有一次没对应就直接提前退出循环，节省时间复杂度 
		}
		if(w.top!=0) flag=0; 
		if(flag) cout<<'y'<<'e'<<'s'<<endl;
		else cout<<'n'<<'o'<<endl;
	}
	return 0;
}
