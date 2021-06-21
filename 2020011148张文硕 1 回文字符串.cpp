#include<iostream>
#include<cstring>
int main() {
	int i,count;
	char c[255];
	while(gets(c)!=NULL) {//文档末尾或 ctrl+z结束 
		for(i=0; i<strlen(c)/2; i++) {//只需要判断到字符串的一半 
			if(c[i]<0) {//汉字单拎出来判断 
				if(c[i]==c[strlen(c)-i-2]&&c[i+1]==c[strlen(c)-i-1]) {
					i++;
					count++;
				}
				else break;
			} 
			else {//数字字母直接判断 
				if(c[i]==c[strlen(c)-1-i]) count++;
				else break;
			}
		}
		if(i>=strlen(c)/2) printf("yes\n");//最后通过判断循环变量来判断是否回文 
	    else printf("no\n");
	}
}
