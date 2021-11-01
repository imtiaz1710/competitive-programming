#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/out.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define  maxn 101 
using namespace std;
vector <int> g[maxn];
bool visited[maxn];
int parents[maxn];
void dfs(int u)
{
    visited[u]=true;
    for (int i = 0; i < g[u].size(); i++)
    {
        int v=g[u][i];
        if(!visited[v])
        {
            parents[v]=u;
            dfs(v);
        }
    }
    
}
int main(){
    //fin,fout;
    memset(parents,-1,sizeof parents);
    int node,edge;
    cin>>node>>edge;
    for (int i = 0; i < edge; i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int source,dest;
    cin>>source>>dest;
    dfs(source);
    vector <int> res;
    int tmp=dest;
    do
    {
        res.push_back(tmp);
        tmp = parents[tmp];
    } while (tmp!=-1);
   for(int i:res)
    cout<<i<<endl;
    return 0;
}