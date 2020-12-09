#include <stdio.h>
int F(int a,int b,int n)
{
      if(n==1) return a;
      else if(n==2) return b;
            else if(n%2==0) return (F(a,b,n-1)+F(a,b,n-2)+F(a,b,n-3));
                  else return (F(a,b,n-1)+F(a,b,n-2));
 }
int main()
{
      int T,a,b,n,x,i;
      scanf("%d",&T);
      for(i=0;i<T;i++)
	  {
	  	scanf("%d %d %d",&a,&b,&n);
	  	x=F(a,b,n);
	  	printf("%d\n",x);
      }
      return 0;
}
