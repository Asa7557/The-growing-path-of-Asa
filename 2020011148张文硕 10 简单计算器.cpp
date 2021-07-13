#include<iostream>
#include<cstdlib>
#include<cstring>
#define N 1000
using namespace std;
typedef struct zhan {
	float data[N];//细节浮点数
	int top;
} zhan;
int main() {
	int n;
	scanf("%d%*c",&n);//跳一个空格
	while(n--) {
		zhan s;
		s.top=0;
		char a[N];
		scanf("%[^\n]%*c",a);//细节防超限
		int len=strlen(a),i=0;
		float temp,b,ten;
		for(;i<len;) {
			if(a[i]>='0'&&a[i]<='9') {//数字存入 
				temp=0;
				while(a[i] && (a[i]>='0' && a[i]<='9')) {
					temp=temp*10.0+a[i]-'0';
					i++;
				}
				s.data[s.top++]=temp;
			} 
			else if(a[i]=='.') {//处理小数点 
				b=0;
				i++;
				ten=1;
				while(a[i]&&(a[i]>='0'&&a[i]<='9')) {
					b=b*10.0+a[i]-'0';
					ten=ten*10.0;
					i++;
				}
				float ding=s.data[--s.top];
				ding=ding+b/ten;
				s.data[s.top++]=ding;
			}
			else if(a[i]==' ') i++;
			else {//运算符参与运算 
				char c=a[i];
				float a=s.data[--s.top];
				float b=s.data[--s.top];
				switch (c) {
					case '+':
						a=a+b;
						break;
					case '-':
						a=b-a;//栈后进先出
						break;
					case '*':
						a=a*b;
						break;
					case '/':
						a=b/a;
						break;
				}
				s.data[s.top++]=a;
				i++;
			}
		}
		printf("%.2f\n",s.data[0]);//输出栈顶 
	}
	return 0;
}
