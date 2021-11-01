//after a lots of try!!!

#include <bits/stdc++.h>
#define mod 998244353
using namespace std;
long long ans=0;

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==2)
    {
        cout<<3<<endl;
        return 0;
    }
    long long  left=0;
    long long right=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=s[i+1])
        {
            left=i+1;
            
            for (int j=n-1; j>=0; j--)
            {
                right++;
                if(s[j]!=s[j-1])
                    break;
            }
            break;
        }
    }
    
    
    
    if(left+right==n)
    {
        ans=(left%mod+right%mod+1)%mod;
        cout<<ans<<endl;
        return 0;
    }
    if(s[0]!=s[n-1])
    {
        ans=(left%mod+right%mod+1)%mod;
        cout<<ans<<endl;
        return 0;
    }
   long long  l=(left-1);
    long long r=(right-1);
    
    
    ans=(left+right+2+l+r+(l*r))%mod;
    cout<<ans<<endl;


    return 0;
}