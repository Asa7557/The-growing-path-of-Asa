#include <stdio.h>
int main()
{
    double sum=1;
    double sum1=0;
    for(int a=1;a<=30;a++ )
    {
        sum=1;
        for(int b=1;b<=a;b++)
        {
            sum=sum*b;
        }
        sum1=sum1+sum;
    }
    printf("%.2e",sum1);
    return 0;
}
