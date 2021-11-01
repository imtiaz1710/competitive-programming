#include <bits/stdc++.h>
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

#define ll long long
#define US unsigned short int
#define MP make_pair
#define FS first
#define SD second
#define MOD (1000000000 + 7)
#define PLL pair<ll, ll>

#define PB push_back
#define LN cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define IN(x) cin >> x
#define INN(x, y) cin >> x >> y
#define OU(y) cout << y << " "
#define OUT(x) cout << x << "\n"
#define OUTT(x, y) cout << x << " " << y << "\n"

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define ROF(i, a, b) for (int i = a; i >= b; i--)
#define REP(i, b) for (int i = 0; i < b; i++)
#define MEM(a, x) memset(a, x, sizeof(a))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SORT(v) sort(v.begin(), v.end())
#define REV(v) reverse(v.begin(), v.end())
#define AI(v)          \
    for (ll & tmp : v) \
    cin >> tmp
#define AO(v)        \
    for (ll tmp : v) \
    cout << tmp << " "

using namespace std;

ll dr[] = {-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[] = {0, 0, -1, 1, -1, -1, 1, 1};

int main()
{
    ll n = 14;
    ll a[n + 1];
    vector<PLL> b;
    for (ll i = 1; i <= n; i++)
    {
        IN(a[i]);
        b.push_back({a[i], i});
    }
    ll mx = 0;

    for (auto c1 : b)
    {
        ll sum = 0;
        if (c1.FS == 0)
            continue;
        for (auto c2 : b)
        {
            ll num1 = c1.FS;
            ll num2 = c2.FS;
            ll indx1 = c1.SD;
            ll indx2 = c2.SD;

            ll indx_gap;
            ll cnt = 0;
            if (indx1 > indx2)
                indx_gap = n - indx1 + indx2;
            else
                indx_gap = indx2 - indx1;
            
            
            if (indx1 == indx2)
            {
                num1 = num1 - n;
                num2 = 0;
            }
            else
                num1 -= indx_gap;
                
            if (num1 >= 0)
            {
                cnt = num2 +1;
                cnt += (num1 / 14);
                if (cnt % 2 == 0)
                    sum += cnt;
            }
        }
        mx = max(sum, mx);
    }
    cout << mx << endl;
    return 0;
}