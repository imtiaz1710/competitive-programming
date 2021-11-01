#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/out.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 101
using namespace std;
vector <int> g[100];
bool visited[maxn];
void dfs(int u)
{
    visited[u]=true;
    cout<<"entering:"<<u<<endl;
    for (int i = 0; i < g[u].size(); i++)
    {
        if(!visited[g[u][i]])
        dfs(g[u][i]);
    }
    cout<<"ending:"<<u<<endl;
    
}
int main(){
    int node,edge;
    cin>>node>>edge;
    for (int i = 0; i < edge; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int root;
    cin>>root;
    dfs(root);
    
    return 0;
}
