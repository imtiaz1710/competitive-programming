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
#define mod 1000000007
using namespace std;
vector<ll> g[maxn];
vector<ll> visited(maxn);
vector<ll> red;
ll dfs(ll root)
{
    ll cnt = 0;
    visited[root] = 1;
    for (ll i = 0; i < g[root].size(); i++)
    {
        if (visited[g[root][i]] == 0)
        {
            cnt += 1 + dfs(g[root][i]);
        }
    }
    return cnt;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (z == 0)
        {
            g[x].push_back(y);
            g[y].push_back(x);
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
            red.push_back(dfs(i) + 1);
    }
    ll sum_red = 0;
    ll sum_total = 1;

    for (ll i = 0; i < red.size(); i++)
    {
        ll local_sum = 1;
        for (ll j = 0; j < k; j++)
        {

            local_sum = (local_sum * red[i]) % mod;
        }

        sum_red = (sum_red + local_sum) % mod;
    }
    for (int i = 0; i < k; i++)
    {
        sum_total = (sum_total * n) % mod;
    }
    if (sum_red > sum_total)
        sum_total += mod;
    cout << sum_total - sum_red << endl;

    return 0;
}