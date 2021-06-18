#include<iostream>
using namespace std;
int data[20][20]={0};
void full(int number,int begin,int size);
int main() {
	int n,i,j;
	scanf("%d",&n);
	full(1,0,n);
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {//顺序输出数组 
			printf("%3d ",data[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
void full(int number,int begin,int size) {	
//number每一次开始填充的数字,begin每一层起始位置下标，size矩阵的阶数
	int i=begin,j=begin,k;
	if(size==0)//处理n=0的情况 
		return ;
	if(size==1) {//处理n=1的情况 
		data[begin][begin]=number;
		return;
	}
	for( k=0; k<size-1; k++ ) {
		data[i][j]=number++;
		j++;
	}
	for( k=0; k<size-1; k++ ) {
		data[i][j]=number++;
		i++;
	}
	for( k=0; k<size-1; k++ ) {
		data[i][j]=number++;
		j--;
	}
	for( k=0; k<size-1; k++ ) {
		data[i][j]=number++;
		i--;
	}
	full(number,begin+1,size-2);//递归 
}
