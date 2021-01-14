#include<stdio.h>
int main()
{
	int a,b,c,V,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	scanf("%d %d %d",&a,&b,&c);
	int V;
	V=a*b*c;
	printf("%d\n",V);
    } 
    return 0;
}
