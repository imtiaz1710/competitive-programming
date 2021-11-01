#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define mx 100007
using namespace std;

vector<int> g[mx];
int mark[mx];
int w[mx];
vector<int> res;

void dfs(int root)
{
    mark[root] = 1;
    for (int i = 0; i < g[root].size(); i++)
    {
        if (mark[g[root][i]] == 0)
        {
            int x = g[root][i];
            if (w[x] == 1)
            {
                int f = 0;
                for (int j = 0; j < g[x].size(); j++)
                {
                    if (w[g[x][j]] == 0)
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                    res.push_back(x);
            }
            dfs(x);
        }
    }
}

int main()
{
    memset(mark, 0, sizeof mark);
    ll n;
    cin >> n;
    ll root;
    for (int i = 1; i <= n; i++)
    {
        mark[i]=0;
        ll x, y;
        cin >> x >> y;
        if(x==-1) {
            
            root=i;
            w[i]=y;
            continue;
        }
        
        g[x].push_back(i);
        w[i] = y;
    }
    //cout<<root<<endl;
    dfs(root);
    if(res.empty())
    {
        cout<<-1<<endl;
    }
    else
    {
        sort(res.begin(),res.end());
        for (int i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}