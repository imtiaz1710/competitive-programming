#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,m;
    cin>>n;
    ll a[n];
    for(ll &tmp: a) cin>>tmp;
    cin>>m;
    ll b[m];
    for(ll &tmp: b)cin>>tmp;
    cout<<*max_element(a,a+n)<<" "<<*max_element(b,b+m)<<endl;
    return 0;
}