#include<stdio.h>
int main()
{
    int i,j,n,m,row=0,row9=0,col=0,max,min,col9=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int p=0;p<n;p++)
    {
    	for(int q=0;q<m;q++)
    	{
    		scanf("%d",&a[p][q]);
		}
	}
    max=a[0][0];
    min=a[n-1][m-1];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                row=i;
                col=j;
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
                row9=i;
                col9=j;
            }
        }
    }
    printf("max=%d row=%d col=%d\nmin=%d row=%d col=%d",max,row,col,min,row9,col9);
    return 0;
}
