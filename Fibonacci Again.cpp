/*有了上题的经验本题我直接打印前500个元素对3求余的结果
 并发现了本题的周期，以下程序是按照周期直接打印的结果*/
 //注：这个代码在杭电oj上过了 
#include<stdio.h>
int main()  
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
	if(n<4&&n!=2) printf("no\n");
	else 
	{
		if((n-2)%4==0) printf("yes\n");
		else printf("no\n");
	}
    }
	return 0;
}

