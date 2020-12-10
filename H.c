#include<stdio.h>
int main()
{
	int n,q=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    	if(a[i]%2==0)
        q=q+a[i];
	}
	printf("%d",q);
	return 0;
}
