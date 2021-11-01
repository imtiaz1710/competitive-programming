#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 1000
using namespace std;

int main()
{

    int t;
    cin >> t;
    int cs = 0;
    while (t--)
    {

        int n, e;

        cin >> n >> e;
        vector<pair<int, int>> g[n+1];
        int d[n+1];
        memset(d, -1, sizeof d);
        for (int i = 0; i < e; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            g[u].push_back(make_pair(w, v));
            g[v].push_back(make_pair(w, u));
        }
        int root=1;
        d[root] = 0;
        queue<int> q;
        q.push(root);
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (int i = 0; i < g[u].size(); i++)
            {
                pair<int, int> v = g[u][i];
                if (d[v.second] != -1 && d[v.second]>d[u]+v.first)
                {
                    d[v.second] = d[u]+v.first;
                    q.push(v.second);
                }
                else if (d[v.second] == -1)
                {
                    d[v.second] = d[u] + v.first;
                    q.push(v.second);
                }
            }
        } 
        printf("Case %d: ", ++cs);
    
            if (d[n] == -1)
                printf("Impossible\n");
            else
            {
                printf("%d\n", d[n]);
            }
        

    }
    return 0;
}