#include<stdio.h>
int Input(int a[10])
{
	for(int i=0;i<10;i++) scanf("%d",&a[i]);
}
int Made(int a[10])
{
	int max=0,min=0,temp;
	for(int i=1;i<10;i++)
	{
	    if(a[min]>a[i]) min=i;
	}
	temp=a[min],a[min]=a[0],a[0]=temp;
    for(int i=1;i<10;i++)
    {
    	if(a[max]<a[i]) max=i;
	}
    temp=a[max],a[max]=a[9],a[9]=temp;
}
int Output(int a[10])
{
	for(int i=0;i<10;i++) printf("%d ",*(a+i));
}
int main()
{
	int b[10];
	Input(b);
	Made(b);
	Output(b);
	return 0;
}
