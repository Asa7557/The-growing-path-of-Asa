#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
	    scanf("%d",&a[i]);
	}
    for(int u=0;u<n;u++)
    {
        for(int v=u+1;v<n;v++)
        {
        	if(a[u]==a[v])
        	{
        		int temp1;
        		temp1=a[n-1];
        		a[n-1]=a[v];
        		a[v]=temp1;
        		n=n-1;
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<n-j-1;k++)
		{
			if(a[k]>a[k+1])
			{
				int temp2;
				temp2=a[k];
				a[k]=a[k+1];
				a[k+1]=temp2;
			}
		}
	}
	printf("%d\n",n);
	for(int w=0;w<n;w++)
	{
		printf("%d ",a[w]);
	}
	return 0;
}
