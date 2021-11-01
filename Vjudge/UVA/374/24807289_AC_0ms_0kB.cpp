#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
ll bigmod(ll a,ll n,ll m)
{
    if(n==0) return 1%m;
        ll value=bigmod(a,n/2,m);
        value=(value*value)%m;
        if(n%2==1)
        value=(value*a)%m;
        return value;
}

int main(){
    ll a,n,m;
    while (cin>>a>>n>>m)
    {
        cout<<bigmod(a,n,m)<<endl;
    }
    return 0;
}