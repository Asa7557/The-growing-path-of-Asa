#include<stdio.h>
int Gcd(int a, int b)
{
    int x, r, y;
    while (x)
    {
        x = a >= b ? a : b;
        y = a <= b ? a : b;
        x = x - y;
        if (x == y)
        {
            r = x;
            printf("他们的最大公约数为%d", r);
        }
    }
}
int main()
{
    int r, a, b;
    printf("请输入两个正整数");
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0)
        r = Gcd(a, b);
    else
    {
        printf("请重新输入两个正整数");
        scanf("%d %d", &a, &b);
        r = Gcd(a, b);
    }
    return 0;
}