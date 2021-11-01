#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 150
using namespace std;

vector < pair <int, pair<int,int> > >  g;
int parent[maxn]; 
void clean()
{
    for (int  i = 0; i < maxn; i++)
    {
        parent[i]=i;
    }
    g.clear();
}
int findparent(int a)
{
    if(parent[a]==a) return a;
    return parent[a]=findparent(parent[a]);
}
int main(){
    //fin;
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        clean();
        int n;
        cin>>n;
        map <string,int> m;
        int key=1;
        for (int i = 0; i <n ; i++)
        {
            string u,v;
            int w;
            cin>>u>>v>>w;
            if(m.find(u)==m.end())
            {
                m[u]=key;
                key++;
            }
            if(m.find(v)==m.end())
            {
                m[v]=key;
                key++;
            }
            g.push_back(make_pair(w, make_pair(m[u],m[v])));
        }
        int node=key-1;
        sort(g.begin(),g.end());
        int cost=0;
        int edge_taken=0;
        for (int i = 0; i < g.size(); i++)
        {
            int u=g[i].second.first;
            int v=g[i].second.second;
            int pu=findparent(u);
            int pv=findparent(v);
            if(pu!=pv)
            {
                cost+=g[i].first;
                edge_taken++;
                parent[pv]=pu;
            }
        }
        if(edge_taken==node-1)
        {
            printf("Case %d: %d\n",++tc,cost);
        }
        else
        {
            printf("Case %d: Impossible\n",++tc);
        }
        
         
    }
    
    return 0;
}