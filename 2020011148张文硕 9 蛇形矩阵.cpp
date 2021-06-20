//把上一题偷过来然后发现奇数偶数不一样，分类，有点麻烦但是思路好想 
//这题看漏了题目中只输入奇数但是我这个既可以处理奇数又可以处理偶数 
#include<iostream>
using namespace std;
int data[20][20]={0};
void full1(int number,int begin,int size);//处理奇数 
void full2(int number,int begin,int size);//处理偶数 
int main() {
	int n,i,j,sum=0;
	scanf("%d",&n);
	data[n/2][n/2]=1;
	if(n%2!=0) 
	full1(n*n,n-1,n);
	else full2(n*n,0,n);
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {//顺序输出数组 
			printf("%3d ",data[i][j]);
		}
		cout<<endl;
	}
	for(int k=0;k<n;k++)
	{
		sum=sum+data[k][k];
	}
	cout<<sum;
	return 0;
}
void full1(int number,int begin,int size) {
//number每一次开始填充的数字,begin每一层起始位置下标，size矩阵的阶数
	int i=begin,j=begin,k;
	if(size==1||size==0) {//当size为0或1时跳出递归 
		return;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j--;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i--;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j++;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i++;
	}
	full1(number,begin-1,size-2);//递归 
}
void full2(int number,int begin,int size) {
//number每一次开始填充的数字,begin每一层起始位置下标，size矩阵的阶数
	int i=begin,j=begin,k;
	if(size==1||size==0) {//当size为0或1时跳出递归 
		return;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j++;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i++;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j--;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i--;
	}
	full2(number,begin+1,size-2);//递归 
}
