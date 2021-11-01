#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 100
using namespace std;

ll a[maxn][maxn];
ll mark[maxn][maxn];
ll n;
ll dr[4] = {0, 0, 1, -1};
ll dc[4] = {1, -1, 0, 0};
ll no;
vector<pair<ll, ll>> res[2];

void dfs(ll x, ll y)
{

    mark[x][y] = 1;
    for (ll i = 0; i < 4; i++)
    {
        ll u = x + dr[i];
        ll v = y + dc[i];
        if (0 <= u and 0 <= v and u < n and v < n and mark[u][v] == 0)
        {
            if (a[u][v] == 1)
                res[no].push_back({x, y});
            else
                dfs(u, v);
        }
    }
}
int main()
{
    memset(mark, 0, sizeof mark);
    cin >> n;
    ll r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    r1--, c1--, r2--, c2--;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            scanf("%1lld", &a[i][j]);
        }
    }
    no = 0;
    dfs(r1, c1);
    no = 1;

    if (mark[r2][c2] == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        dfs(r2, c2);
    }

    ll mn = 1000000000;
    for (ll i = 0; i < res[0].size(); i++)
    {
        for (ll j = 0; j < res[1].size(); j++)
        {

            ll x, y, u, v;
            x = res[0][i].first;
            y = res[0][i].second;
            u = res[1][j].first;
            v = res[1][j].second;
            ll ans = (x - u) * (x - u) + (y - v) * (y - v);
            mn = min(ans, mn);
        }
    }
    cout << mn << endl;
    return 0;
}