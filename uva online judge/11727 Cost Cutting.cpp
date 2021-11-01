#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    int a,b,c;
    cin>>t;
    int cnt=0;
    while (t--)
    {
        
        cin>>a>>b>>c;
        int ans;
        if((a>b && a<c) || (a>c && a<b))
        ans=a;
        else if ((b<a && b>c)|| (b>a && b<c))
        {
            ans=b;
        }
        else
        {
            ans=c;
        }
        printf("Case %d: %d\n",++cnt,ans);
        
    }
    
    return 0;
}