#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 1000000
using namespace std;
int n, t;
vector<int> g[maxn];
int parents[maxn];
bool visited[maxn];

void dfs(int root)
{
    visited[root] = 1;
    for (int i = 0; i < g[root].size(); i++)
    {
        if (!visited[g[root][i]])
        {
            parents[g[root][i]] = root;
            dfs(g[root][i]);
        }
    }
}

int main()
{
    //fin, fout;

    scanf("%d%d", &n, &t);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    parents[1] = -1;
    dfs(1);
    for (int i = 0; i < t; i++)
    {
        int k;
        scanf("%d", &k);
        int quary[k];
        bool mark_path[n + 1];
        memset(mark_path, 0, sizeof mark_path);
        for (int loop = 0; loop < k; loop++)
        {
            scanf("%d", &quary[loop]);
            mark_path[quary[loop]] = 1;
        }

        int max_node = 1;
        int mx = 0;

        for (int j = 0; j < k; j++)
        {
            if (!mark_path[quary[j]])
                continue;
            int tmp = quary[j];
            int step = 1;

            while (parents[tmp] != -1)
            {
                if (mark_path[tmp])
                    mark_path[tmp] = 0;
                tmp = parents[tmp];
                step++;
                //cout << "somossa 0" << endl;
            }
            if (step > mx)
            {
                max_node = quary[j];
                mx = step;
            }
        }
        memset(mark_path, 0, sizeof mark_path);
        int tmp = max_node;
        mark_path[tmp] = 1;
      
        while (parents[tmp] != -1)
        {
            tmp = parents[tmp];
            mark_path[tmp] = 1;
            //cout << "somossa 1" << endl;
        }
        bool yes = 1;
        for (int loop = 0; loop < k; loop++)
        {
            if (!(mark_path[quary[loop]] or mark_path[parents[quary[loop]]]))
            {
                yes = 0;
                break;
            }
        }

        if (yes)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
