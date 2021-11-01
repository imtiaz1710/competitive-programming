#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 1000
using namespace std;

int main(){

    int t;
    cin>>t;
    int cs=0;
    while (t--)
    {

        int n,e;
        
        cin>>n>>e;
        vector<pair<int, int>> g[n];
        int d[n];
        memset(d,-1,sizeof d);
        for(int i=0;i<e;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            g[u].push_back(make_pair(w,v));
            g[v].push_back(make_pair(w,u));
        }
        int root;
        cin>>root;
        d[root]=0;
        queue<int> q;
        q.push(root);
        while (!q.empty())
        {
            int u=q.front();
            q.pop();
            for(int i=0;i<g[u].size();i++)
            {
                pair<int,int> v=g[u][i];
                int top_w=max(d[u],v.first);
                if(d[v.second]!=-1 && d[v.second]>top_w)
                {
                    d[v.second]=top_w;
                    q.push(v.second);
                }
                else if(d[v.second]==-1)
                {
                    d[v.second]=top_w;
                    q.push(v.second);
                }
                
            }
        }
        printf("Case %d:\n",++cs);
         for (int i = 0; i < n; i++)
        {
            if (d[i] == -1)
                printf("Impossible\n");
            else
            {
                printf("%d\n",d[i]);
            }
            
        }
        
        
        
    }
    
    return 0;
}