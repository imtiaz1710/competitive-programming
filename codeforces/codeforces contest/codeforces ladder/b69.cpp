#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll a[n],b[n],c[n];
    set<ll> s[4];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>b[i];
        s[b[i]].insert(a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>c[i];
        s[c[i]].insert(a[i]);
    } 
    ll m;
    cin>>m;
    for (ll i = 0; i < m; i++)
    {
        ll tmp;
        cin>>tmp;
        if(s[tmp].empty())
        {
            cout<<-1<<" ";
        }
        else
        {
            ll ele=*s[tmp].begin();
            cout<<ele<<" ";
            for (ll j = 1; j <= 3; j++)
            {
                s[j].erase(ele);
            }
            
        }  
    }
    
    cout<<endl;
    
    return 0;
}