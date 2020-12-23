#include<stdio.h>
int IsPrime(int m)
{
	int i=2,a=0;
	    for(;i<=m;i++)
	    {
	    	if(m%i==0)a++;
		}
		return a;
}
int main()
{
    int a=0,m;
	scanf("%d",&m);
	if(m<2) printf("%d is not a prime number\n",m);
	else{
	a=IsPrime(m);
	if(a<2)printf("%d is a prime number\n",m);
	else printf("%d is not a prime number\n",m);
}
}
