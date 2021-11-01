#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 100005
using namespace std;

vector<ll> g[maxn];
ll d[maxn];
double p[maxn];
vector<ll> res;

void dfs(ll root, ll prev)
{
    ll cnt = 0;
    for (ll i = 0; i < g[root].size(); i++)
    {
        ll u = g[root][i];
        if (u == prev)
            continue;
        p[u] = p[root] / (long double)(g[root].size() - (root != 1));
        d[u] = d[root] + 1;
        cnt++;
        dfs(u, root);
    }
    if (cnt == 0)
    {
        res.push_back(root);
    }
}

int main()
{
    memset(d, (ll)-1, sizeof d);
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    d[1] = 0;
    p[1] = 1;
    dfs(1, 0);
    ll sz = (ll)res.size();
    double sum = 0;
    for (ll i = 0; i < sz; i++)
    {
        sum += (d[res[i]] * p[res[i]]);
    }
    cout << fixed << setprecision(12) << sum << endl;
    return 0;
}
