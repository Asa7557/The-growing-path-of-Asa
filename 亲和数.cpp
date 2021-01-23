#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sa=0,sb=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<a;i++)
    {
    	if(a%i==0)
    	{
    		sa=sa+i;
		}
	}
    for(int i=1;i<b;i++)
    {
    	if(b%i==0)
    	{
    		sb=sb+i;
		}
	}
	if(a==sb&&b==sa) printf("YES");
	else printf("NO");
	return 0;
}
