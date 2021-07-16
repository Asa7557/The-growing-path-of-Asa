#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,sum=0;
	cin>>a>>b;
	int c[a];
	for(int i=0;i<a;i++)
	{
		cin>>c[i];
	}
	sort(c,c+a);
    int ans=0,s=0;
    for(int i=0;i<a;i++){
        if(c[i]<=0){
            ans++;
        }
    }
    if(ans<b){
        for(int i=0;i<ans;i++){
            s+=c[i];
        }
    }else{
        for(int i=0;i<b;i++){
            s+=c[i];
        }
    }
    cout<<abs(s)<<endl;
    return 0;

}
