#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int data[n];
	//这个题目明确说明了变量n表示数组元素个数； 
	for(int i=0;i<n;i++)//输入数据； 
	{
		scanf("%d",data+i);//指针不太会  QAQ
	} 
	for(int j=0;j<n;j++)
	{
		for(int k=j;k<n;k++)
		{
			if(data[j]>data[k])//判断逆序； 
			{
				cout<<"("<<data[j]<<","<<data[k]<<")"<<endl;
				//printf("(%d,%d)\n",data[j],data[k]);
				//我想知道cout和printf的区别但是并未发现； 
			}
		}
	}
	return 0;
}
