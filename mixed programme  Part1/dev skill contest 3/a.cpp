#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
ll mx=1000000000;
ll fun(ll n)
{
    return (n*(n+1)/2);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll l=0,r=mx;
        ll mid;
        ll ans;
        while (l<=r)
        {
            mid=(l+r)/2;
            if(fun(mid)<=n)
            {
                 l=mid+1;
                 ans =mid;
            }
           
            else
            {
                r=mid-1;
            }
            
        }
        cout<<ans<<endl;
    }
}