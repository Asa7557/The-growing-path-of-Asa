#include<stdio.h>
int main()
{
	int n,a,b,temp=0,temp2;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		for(int i=0;i<b;i++)
		{
			temp=0;
			for(int u=a;u>a/2;u--)
		    {
		    	for(int r=temp;r>0;r--) printf(" ");
				if(temp!=a/2) printf("X");
				for(int s=a-2-2*temp;s>0;s--) printf(" ");
				printf("X\n");
				temp=temp+1;
			}
			temp2=temp-2;
			for(int u=a;u>a/2+2;u--)
			{
				for(int r=temp2;r>0;r--) printf(" ");
				printf("X");
				for(int s=a-2-2*temp2;s>0;s--) printf(" ");
				printf("X\n");
                temp2--;
			}
        }
        printf("x");
        for(int i=0;i<a-2;i++) printf(" ");
        printf("x\n\n");
    }
    return 0;
}
