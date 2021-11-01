#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll &tmp:a) cin>>tmp;
        bool f=0;
        for (ll i = 1; i < n-1; i++)
        {
            ll x=i+1;
            ll y=-1;
            ll z=-1;
            for (ll j = i-1; j >=0; j--)
            {
                if(a[i]>a[j]) {
                    y=j+1;
                }
            }
            if(y!=-1)
            for (ll k = i+1; k < n; k++)
            {
                if(a[k]<a[i]) z=k+1;
            }
            
            if(y!=-1 and z!=-1)
            {
                cout<<"YES"<<endl;
                cout<<y<<" "<<x<<" "<<z<<endl;
                f=1;
                break;
            }
        }
        if(f==0) cout<<"NO"<<endl;
        
    }
    
    return 0;
}