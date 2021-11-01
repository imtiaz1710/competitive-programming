#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 101
using namespace std;
vector<pair<int, int>> g[maxn];
int d[maxn];
int main()
{
    fin, fout;
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;

        g[u].push_back(make_pair(c, v));
        g[v].push_back(make_pair(c, u));
    }
    for (int i = 0; i < maxn; i++)
    {
        d[i] = 10000000;
    }
    int source;
    cin >> source;
    d[source] = 0;
    priority_queue<pair<int, int>> q;
    q.push(make_pair(0, source));
    while (!q.empty())
    {
        pair<int, int> u = q.top();
        q.pop();
        for (int i = 0; i < g[u.second].size(); i++)
        {
            pair<int, int> v = g[u.second][i];
            if (d[v.second] > d[u.second] + v.first)
            {
                d[v.second] = d[u.second] + v.first;
                q.push(make_pair(-d[v.second], v.second));
            }
        }
    }

    for (int i = 0; i < node; i++)
        cout << i << " " << d[i] << endl;

    return 0;
}