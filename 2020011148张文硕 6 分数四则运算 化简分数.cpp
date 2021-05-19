#include<stdio.h>
int simplify(int m,int n)//化简分数并输出 
{
	if(m==n) printf("1\n");
	else
	{
	    int temp=1,a=m,b=n;
	    while(temp)
	    {
	    	temp=a%b;
	    	a=b;
	    	b=temp;
		}
		printf("%d/%d\n",m/a,n/a);
	}	
}
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)//控制外循环 
	{
		int a,b,c,d,ra,rb;
	    char x;
	    scanf("%d %*c %d %c %d %*c %d",&a,&b,&x,&c,&d);
		//%*c表示输入中，忽略一个字符
		switch(x)//switch case 语句分别运算+ - * /； 
		{
	        case '+':
	        {	
	    	    rb=b*d;
	    	    ra=a*d+b*c;
                simplify(ra,rb); 
                break;
            }
            case '-':
            {
            	ra=a*d-b*c;
            	rb=b*d;
            	simplify(ra,rb);
            	break;
			}
			case '*':
			{
				ra=a*c;
				rb=b*d;
				simplify(ra,rb);
				break;
			}
			case '/':
			{
				ra=a*d;
				rb=b*c;
				simplify(ra,rb);
				break;
			}
	    }
	}
	return 0;
}
