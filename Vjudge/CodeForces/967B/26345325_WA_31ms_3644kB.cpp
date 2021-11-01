#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll hole[n+1];
    ll f[n+1];
    f[0]=0;
    for (ll i = 1; i <= n; i++)
    {
        cin>>hole[i];
        f[i]=f[i-1]+hole[i];
    }
   // for(ll tmp: f) cout<<tmp<<endl;
    ll res=0;
    for (ll i = n; i >= 1; i--)
    {
        if ((((double)a / f[i]) * hole[1]) >= (double) b )
        {
            res=n-i;
            break;
        }
    }
    cout<<res<<endl;
    
    return 0;
}