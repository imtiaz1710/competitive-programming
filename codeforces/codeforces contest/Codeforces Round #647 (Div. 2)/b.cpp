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
        ll mark[2000];
        memset(mark, 0, sizeof mark);
        ll n;
        cin>>n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            mark[a[i]]=1;
        }

        ll res=-1;
        for (ll i = 1; i <= 1024*10; i++)
        {
            bool f=0;
            for (ll j = 0; j < n; j++)
            {
                ll bor=a[j]^i;
                if(bor > 1024 or mark[bor]==0)
                    {
                        f=1;
                        break;
                    }
            }
            if(f==0) {
                res=i;
                break;
            }
            
        }
       cout<<res<<endl;
        
    }

    return 0;
}