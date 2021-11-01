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
        for(ll &tmp: a) cin>>tmp;
        ll fst=-1;
        ll lst=-1;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]!=i+1)
            {
                fst=i;
                break;
            }
        }
        for (ll i = n-1; i >= 0; i--)
        {
            if(a[i]!=i+1)
            {
                lst=i;
                break;
            }
        }
        if(lst==-1 and fst==-1)
        {
            cout<<0<<endl;
            continue;
        }
        bool f=0;
        for (ll i = fst; i <=lst; i++)
        {
            if(a[i]==i+1)
            {
                f=1;
                break;
            }
        }
        if(f)cout<<2<<endl;
        else cout<<1<<endl;
        
        
        
    }
    
    return 0;
}