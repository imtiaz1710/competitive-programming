#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,l,r;
    cin>>n>>l>>r;
    ll mn=0,mx=0;
    for (ll i = 0; i < l; i++)
    {
        mn+=pow(2,i);
    }
    mn+=n-l;
    for (ll i = 0; i < r; i++)
    {
        mx+=pow(2,i);
    }
    mx+=(n-r)*pow(2,r-1);
    cout<<mn<<" "<<mx<<endl;
    
    return 0;
}