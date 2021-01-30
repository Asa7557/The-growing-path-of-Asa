#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
	    int a[n];
	    char b[n+1];
	    for(int i=0;i<n;i++)
    	{
		    scanf("%d",&a[i]);
	    }
	    for(int u=0;u<n;u++)
	    {
	    	int temp;
	    	if(a[u]<0)
	    	{
	    		temp=a[u];
	    		a[u]=-temp;
	    		b[u]='-';
			}
			else
			{
				b[u]=' ';
			}
		}
		for(int v=0;v<n;v++)
		{
			for(int w=0;w<n-v-1;w++)
			{
				int change;
				char c;
				if(a[w]<a[w+1])
				{
					change=a[w+1];
					a[w+1]=a[w];
					a[w]=change;
					c=b[w+1];
					b[w+1]=b[w];
					b[w]=c;
				}
			}
		}
		for(int x=0;x<n;x++)
		{
			printf("%c%d",b[x],a[x]);
		}
	    scanf("%d",&n);
	}

}
