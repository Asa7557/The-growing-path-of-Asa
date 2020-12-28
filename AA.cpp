#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,j,i,p;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
    	a=0;
    	for(p=2;p<i;p++)
    	{
    		if(i%p==0)a=a+p;
		}
		if(a+1==i)
		{
	    	printf("%d its factprs are ",i);
		    for (j=1;j<i;j++)
            {
            	if(i%j==0)printf("%d ",j);
			}
		   printf("\n");
        }
	}
	return 0;
}
