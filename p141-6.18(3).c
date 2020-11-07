#include<stdio.h>
int main()
{
	int a,b,c,d=1,e;
	for(a=1;a<=9;a++)
	{
		printf("%2d ",a);
	}
	printf("\n");
    for(b=1;b<=9;b++)
	{
		printf(" - ");
	}
	printf("\n");
		for (c=1;c<=9;c++)          
	{
		for (d=1;d<=3*c-3; d++) 
		{
			printf(" ");          
		}
		for (e=c;e<=9;e++)      
		{
			printf("%2d ",c*e);    
		}
		printf("\n");               
	}
	return 0;
}
