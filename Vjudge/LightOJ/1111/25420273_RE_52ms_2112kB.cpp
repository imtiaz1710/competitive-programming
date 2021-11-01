#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 1009
using namespace std;
vector<int> participent;
vector<int> g[maxn];
vector<int> node(maxn);
vector<bool> visited(maxn);
int k;
int cnt;
void dfs(int root)
{
    visited[root]=1;
    node[root]++;
    if(node[root]==k) cnt++;
    for (int i = 0; i < g[root].size(); i++)
    {
        dfs(g[root][i]);
    }
    
}
void clean()
{
    participent.clear();
    memset(g,0,sizeof g);
    node.clear();
    cnt=0;
}
int main(){
    int t;
    scanf("%d",&t);
    for (int cs = 1; cs <=t; cs++)
    {
        int n,m;
        scanf("%d%d%d",&k,&n,&m);
        for(int i=0;i<k;i++)
        {
            int x;
            scanf("%d",&x);
            participent.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            g[u].push_back(v);
        }
        for (int i = 0; i < participent.size(); i++)
        {
            dfs(participent[i]);
            visited.clear();
        }
        printf("Case %d: %d\n",cs,cnt);
        clean();
    }
    
    return 0;
}