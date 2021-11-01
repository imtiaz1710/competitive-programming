#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll sum=0;
    vector<pair<ll,pair<ll,ll>>> a;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        ll z = x < y ? y - x : 0;
        a.push_back({-z, {x, y}});
    }
    sort(a.begin(), a.end());
    ll loop=0;
    ll j=0;
    while (j<k)
    {
        if(a[loop].second.first!=0) {
            j++;
            a[loop].second.first*=2;
        }
        loop++;
    }
    
    for (ll i = 0; i < n; i++)
    {
        sum += min(a[i].second.first, a[i].second.second);
    }
    cout<<sum<<endl;
    return 0;
}