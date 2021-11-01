#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll mone,pone;
    mone=pone=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==1) pone++;
        else mone++;
    }g
    ll ans=0;
    for (ll i = 0; i < k; i++)
    {
        ll tmp1=pone; ll tmp2=mone;
        for (ll j = i; j < n; j+=k)
        {
            if(a[j]==1) tmp1--;
            else tmp2--;
        }
        ans=max(ans,abs(tmp1-tmp2));
    }
    
    cout<<ans<<endl;
    return 0;
}