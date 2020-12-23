#include<stdio.h>
int main()
{
    int i, n;
    printf("please input a number:"); 
    scanf("%d", &n);
    for (i = 2; i < n ; i++)
    {
        if (n%i == 0)
            break;
    }
    if (n <=1 ) printf("This is not a prime\n");
    else  if (i < n) printf("This is not a prime.\n"); 
    else printf("This is a prime.\n");
    return 0;
 
}
