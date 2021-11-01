#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        if(k>=n)
        {
            cout<<1<<endl;
        }
        else
        {
            ll sq=sqrt(n)+1;
           // sq=max(n,(ll)sqrt(k)+1);
           // sq=min(sq,k);
            bool f=0;
            ll ans=n;
            for ( ll i = 2; i <= sq ; i++)
            {
                if(n%i==0 and (k>=i or n/i<=k))
                {
                    if(k>=i)
                    {
                        ans=min(ans,i);
                    }
                    else
                    {
                        ans=min(ans,n/i);
                    }
                    
                }
            }
            cout<<ans<<endl;
            
            
        }
        
    }
    
    return 0;
}