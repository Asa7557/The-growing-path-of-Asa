#include<stdio.h>
int main()
{
	double pi=3.1415926;
	int r;
    double area;
	for(r=1;r<=10;r++)
	{
		area=pi*r*r;
		if((area>=40)&&(area<=90))
		{
			printf("r=%d area=%.2lf\n",r,area);
		}
	}
	return 0;
}
