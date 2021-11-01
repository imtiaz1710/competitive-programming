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
    ll cnt=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        cnt+=ceil(a[i]/double(k));
    }
    cout<<(ll)ceil(cnt/2.0)<<endl;
    return 0;
}