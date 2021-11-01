#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 109
using namespace std;
vector<int> g[maxn];
int mark[maxn][maxn];
int ending;
int min_cost;
int cost = 0;

void clean()
{
    memset(g, 0, sizeof g);
    memset(mark, -1, sizeof mark);
    ending = 0;
    min_cost = 0;
    cost = 0;
}
void fun(int u, int prev)
{

    for (int i = 0; i < 2; i++)
    {
        int v = g[u][i];
        //dbg(v);
        if (v == prev)
            continue;
        if (v == ending)
        {
            if (mark[u][v] == -1)
                cost += mark[v][u];
            return;
        }
        if (mark[u][v] == -1)
        {
            cost += mark[v][u];
        }
        fun(v, u);
    }
}

int main()
{
    //fin, fout;
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        clean();
        int n;
        cin >> n;
        int a, b, w;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> w;
            mark[a][b] = w;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        ending = a;
        fun(a, g[a][0]);
        min_cost = cost;
        cost = 0;
        fun(a, g[a][1]);
        min_cost = min(cost, min_cost);
        printf("Case %d: %d\n", cs, min_cost);
    }

    return 0;
}