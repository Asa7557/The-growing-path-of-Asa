#include<stdio.h>
int main()
{
	int a,b,c;
	for (a=0;a<=100;a++)
	{
    	for (b=0;b<=100;b++)
    	{
 	        for (c=0;c<=100;c=c+3)
           	{
                if (a+b+c==100&&5*a+3*b+c/3==100) 
		        {
				 printf("公鸡%d只",a);
                 printf("母鸡%d只",b); 
    	         printf("小鸡%d只\n",c);
                }
            } 
        }
    }
	return 0;
}
