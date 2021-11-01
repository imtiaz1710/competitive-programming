#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
//#define mod 2005
using namespace std;
//2  i x

int main(){
    ll n;
    cin>>n;
    ll a[n+1];
    ll mod=n+1;
    for (int i = 1; i <=n; i++)
    {
        scanf("%lld",a+i);
    }
    
    vector <pair<ll,pair<ll,ll>>> res;
    
    ll add=0;
    for (ll i = n ; i >=1 ; i--)
    {
        for (ll j = 0;; j++)
        {
            if(((a[i]+add+j)%mod)==i)
            {
                add+=j;
                res.push_back({1,{i,j}});
                break;
            }
        }
    }
    res.push_back({2,{n,mod}});
    cout<<res.size()<<endl;
    for (ll i = 0; i < res.size(); i++)
    {
        cout<<res[i].first<<" "<<res[i].second.first<<" "<<res[i].second.second<<endl;
    }
    
    return 0;
}