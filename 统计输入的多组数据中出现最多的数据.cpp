#include<stdio.h>
int main() 
{
    //max1为次数，max2为数据 
    int n, k, num, max1= 0, max2= 0;
    scanf("%d", &n);//控制整个输入几组数据的 
    int arr[1001] = {0};
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &k);//输入第一行的数据 
        for (int j=0;j<k;j++)
        {
            scanf("%d", &num);
            arr[num]++;//统计存入相同的数出现的次数， 
        }
    }
    // 输出出现次数最多的数据，并把他次数数出来 
    for (int i=0;i<1001;i++)
     {
        if (arr[i] >= max1)
         {
            max1= arr[i];
            max2= i;
        }
    }
    printf("%d %d",max2,max1);
    return 0;
}
