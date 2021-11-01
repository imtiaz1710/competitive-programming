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
    cout << v[i] << " "

using namespace std;

ll dr[] = {-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[] = {0, 0, -1, 1, -1, -1, 1, 1};
ll n, m, k;
// ll bam = k - 1;
// ll dan = n - k;
ll cal(ll side, ll val, ll sum)
{
    if (side)
    {
        ll total = 0;
        if (val - 1 >= side)
        {
            ll sub = val - 1 - side;
            sub = sub * (sub + 1);
            sub /= 2;
            total += (sum - sub);
        }
        else
        {
            total += sum;
            total += (side - (val - 1));
        }
        return total;
    }
    else
    {
        return 0;
    }
}

ll fun(ll val)
{
    ll total = val;
    ll sum = (val * (val - 1)) / 2;
    //OUTT(dan,bam);
    total += (cal(k-1, val , sum) + cal(n-k, val, sum));
    //OUT(total);
    if(total<m and n*val>=m) total=m;
    return total;
}

int main()
{

    INNN(n, m, k);
    ll l = 1, r = m;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll ret = fun(mid);
        if (ret > m)
        {
            r = mid - 1;
        }
        else if (ret < m)
        {
            l = mid + 1;
        }
        else
        {
            ans = max(mid, ans);
            l = mid + 1;
        }
    }
    OUT(ans);
    return 0;
}