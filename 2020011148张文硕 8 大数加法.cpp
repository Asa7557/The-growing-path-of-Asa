#include <stdio.h>
#include <string.h>
int main()
{
    int i,t,j=1,n,len,k;
    char sum[1009],sa[1009],sb[1009];
    scanf("%d",&t);
    getchar();
    while(t--)
    {    
        for(i=0;i<1009;i++)
            sum[i]='0';
        scanf("%s%s",sa,sb);
        len=strlen(sa);
        for(i=len-1,k=0;i>=0;i--,k++)
        {
            sum[k]=sum[k]-'0'+sa[i];
             n=k;
            while(sum[n]>'9')//进制转换 
            {
                sum[n+1]=sum[n+1]+(sum[n]-'0')/10;
                sum[n]=(sum[n]-'0')%10+'0';
                n++;
            }
        }
        len=strlen(sb);
        for(i=len-1,k=0;i>=0;k++,i--)
        {
            sum[k]=sum[k]-'0'+sb[i];
            n=k;
            while(sum[n]>'9')
            {
                sum[n+1]=sum[n+1]+(sum[n]-'0')/10;
                sum[n]=(sum[n]-'0')%10+'0';
                n++;
            }
        }
        printf("Case %d:\n%s + %s = ",j,sa,sb);
        j++;
        for(i=1008;sum[i]=='0';i--);//输出 
        for(;i>=0;i--)
            printf("%c",sum[i]);
        if(t>0)
            printf("\n");
    }
    return 0;
}
