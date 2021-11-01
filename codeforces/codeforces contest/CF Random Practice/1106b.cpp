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
#define FF first
#define SS second
#define MOD (1000000000 + 7)
#define M_PI 3.14159265358979323846
#define PLL pair<ll, ll>

#define PB push_back
#define LN cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define IN(x) cin >> x
#define INN(x, y) cin >> x >> y
#define INNN(x, y, z) cin >> x >> y >> z
#define INNNN(x, y, z, zz) cin >> x >> y >> z >> zz
#define OU(y) cout << y << " "
#define OUT(x) cout << x << "\n"
#define OUTT(x, y) cout << x << " " << y << "\n"
#define OUTTT(x, y, z) cout << x << " " << y << " " << z << "\n"
#define OUTTTT(x, y, z, zz) cout << x << " " << y << " " << z << " " << zz << "\n"

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))

#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define ROF(i, a, b) for (auto i = a; i >= b; i--)
#define REP(i, b) for (auto i = 0; i < b; i++)
#define MEM(a, x) memset(a, x, sizeof(a))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(), v.rend())
#define REV(v) reverse(v.begin(), v.end())
#define AI(v, n)               \
    for (ll i = 0; i < n; i++) \
    cin >> v[i]
#define AO(v, n)               \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << "\n"

using namespace std;

ll dr[] = {-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[] = {0, 0, -1, 1, -1, -1, 1, 1};

int main()
{
    //fin;
    ll n, m;
    INN(n, m);
    vector<ll> a(n);
    vector<ll> c(n);
    deque<PLL> ci(n);
    AI(a, n);
    for (ll i = 0; i < n; i++)
    {
        IN(c[i]);
        ci[i].FF = c[i];
        ci[i].SS = i;
    }
    SORT(ci);
    ll ans[m];
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        INN(x, y);
        x--;
        ll tmp = a[x] - y;

        if (tmp >= 0)
        {
            ans[i] = (c[x] * y);
            a[x] = tmp;
        }
        else
        {
            ans[i] = c[x] * a[x];
            y -= a[x];
            a[x] = 0;
            for (ll j = 0; j < ci.size() and y; j++)
            {
                x = ci[j].SS;
                ll baki = a[x] - y;
                if (baki >= 0)
                {
                    ans[i] += (c[x] * y);
                    a[x] = baki;
                    y=0;
                }
                else
                {
                    ans[i]+=(a[x]*c[x]);
                    y-=a[x];
                    a[x]=0;
                }
            }
            while (ci.size() and a[ci[0].SS]==0)
            {
                ci.pop_front();
            }
            
            
            
            if(y) ans[i]=0;
        }
    }
    AO(ans,m);

    return 0;
}