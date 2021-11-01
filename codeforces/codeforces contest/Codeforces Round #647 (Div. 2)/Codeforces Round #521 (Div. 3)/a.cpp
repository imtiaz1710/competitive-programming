#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        ll ans = (k / 2) * a - (k / 2) * b;
        if(k%2==1)
        {
            ans+=a;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}