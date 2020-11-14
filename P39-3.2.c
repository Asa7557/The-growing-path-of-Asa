#include<stdio.h>
int main()
{
int x=789;
int c=x%10;
int b=x%100-c;
int a=x/100;
int y=c*100+b+a;
printf("%d",y);
}
