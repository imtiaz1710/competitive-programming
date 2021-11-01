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
    // fin;
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        map<ll, ll> m;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % k != 0)
            {

                a[i] = k - (a[i] % k);
                ans = max(ans, a[i] + m[a[i]] * k);
                m[a[i]]++;
            }
            else
            {
                a[i] = 0;
            }
        }
        if (ans)
            ans++;
        cout << ans << endl;
    }

    return 0;
}