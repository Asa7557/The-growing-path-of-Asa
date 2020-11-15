#include<stdio.h>
#include<math.h>
int main()
{
double rate=1.0225,capital=10000,deposit,n=10;
double y=pow (rate,n);
deposit=capital*y;
printf("%f",deposit);
return ;
} 
