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
    for(ll &tmp: a) cin>>tmp;
    map<ll,ll> m;
    for (ll i = 0; i < n; i++)
    {
        if(a[i]!=0) m[a[i]]++;
    }
    cout<<m.size()<<endl;
    
    return 0;
}