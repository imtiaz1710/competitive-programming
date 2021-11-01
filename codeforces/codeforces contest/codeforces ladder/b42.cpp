#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

int main(){
    ll n,k,m;
    cin>>n>>k>>m;
    map <string,int> in;
    string s[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    ll cost[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>cost[i];
        in[s[i]]=cost[i];
    }
    vector <ll> st[k];
    map< string,ll > mp;
    for (ll i = 0; i < k; i++)
    {
        ll sz;
        cin>>sz;
        for (ll j = 0; j < sz; j++)
        {
            ll indx;
            cin>>indx;
            indx--;
            st[i].push_back(cost[indx]);
            mp[s[indx]]=i;
        }
        sort(st[i].begin(),st[i].end(),cmp);
    }
    string ss;
    ll ans=0;
    for (ll i = 0; i < m; i++)
    {
        cin>>ss;
        ll indx=mp[ss];
        
        if(st[indx].back()<in[ss])
        {
            ans += st[indx].back();
        }
        else
        {
            ans += in[ss];
        }
              
        
    }
    cout<<ans<<endl;
    return 0;
}