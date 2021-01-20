/*对于任一正整数a,不论a是奇数还是偶数，整数(a×a-a+1)必然为奇数。
构造一个等差数列，数列的首项为(a×a-a+1),等差数列的差值为2(奇数数列)，则前a项的和为：
a×((a×a-a+1))+2×a(a-1)/2
=a×a×a-a×a+a+a×a-a
=a×a×a
定理成立。证毕。*/
#include<stdio.h>
int main()
{
	int n,m,a;
	scanf("%d",&n);
	m=n*n*n;
	printf("%d*%d*%d=%d=",n,n,n,m);
	a=n*n-n+1;
    for(int i;i<n;i++)
    {
    	if(i!=n-1){
		    printf("%d+",a+2*i);}
		else{
			printf("%d",a+2*i);
		}
	}
	return 0;
}
