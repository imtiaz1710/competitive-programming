#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,a,b,c,t;
    cin>>n>>a>>b>>c>>t;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        ll mx=a;
        ll total=a;
        for (ll j = arr[i]; j <= t and total >= mx ; j++)
        {
            mx = total;
            total=total-b+c;
        }
        ans+=mx;
    }
    cout<<ans<<endl;
    return 0;
}