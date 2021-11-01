#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll &tmp:a) cin>>tmp;
    ll cnt=1;
    for (ll i = 0; i < n/2; i++)
    {
        ll x=a[i];
        ll y=a[n-i];
        if(cnt&1) cout<<y<<" "<<x<<endl;
        else cout<<x<<" "<<y<<endl;
    }
    if(n&1) cout<<" "<<a[n/2];
    cout<<endl;
    
    return 0;
}