#include<stdio.h>
int xk10(int m)
{ 
    static int p=0;
    int y;
    if(m==0) return 0;
    else 
	{
	    y=xk10(m-1);
        p=p*10+2;
	    return y+p;
    }
}
int main( )
{
    int n;
    printf("输入一个整数:");    
    scanf("%d",&n);    
    printf("%d\n",xk10(n) );
    
}
