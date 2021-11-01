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
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n], b[m];
    ll freqa[n + 1], freqb[m + 1];
    freqa[0] = freqb[0] = 0;

    // for (ll &tmp : a) //0 based input
    //     cin >> tmp;
    // for (ll &tmp : b)
    //     cin >> tmp;

    for (ll i = 1; i <= n; i++)
    {
        scanf("%lld",&a[i-1]);
        freqa[i] = freqa[i - 1] + a[i - 1]; //1 based freqa
    }
        
    for (ll i = 1; i <= m; i++)
    {
        scanf("%lld",&b[i-1]);
        freqb[i] = freqb[i - 1] + b[i - 1];
    }
       
    ll ans = 0;

    for (ll i = 0; i <= n and freqa[i] <= k; i++)
    {
        ll j=lower_bound(freqb,freqb+m,k-freqa[i])-freqb;
        if(j>m or freqa[i]+freqb[j]>k) j--;
        ans=max(ans,i+j);
    }
    cout << ans << endl;

    return 0;
}