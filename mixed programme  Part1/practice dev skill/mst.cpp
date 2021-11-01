#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mp make_pair
#define maxn 101
using namespace std;

vector <pair<int,pair<int,int>>> g;
int parents[maxn];

int findparets(int u)
{
    if(parents[u]==u) return u;
    return parents[u]=findparets(parents[u]);
}

int main(){
    int node,edge;
    cin>>node>>edge;
    for (int i = 0; i < edge; i++)
    {
       int u,v,c;
       cin>>u>>v>>c;
       g.push_back(mp(c,mp(u,v)));
    }
    for (int i = 0; i <= node; i++)
    {
        parents[i]=i;
    }
    sort(g.begin(),g.end());
    int mstcost=0;
    vector<pair <pair<int,int>,int> > res;
    for (int i = 0; i < edge; i++)
    {
        int u=g[i].second.first;
        int v=g[i].second.second;
        int pu=findparets(u);
        int pv=findparets(v);
        if(pv!=pu)
        {
            mstcost+=g[i].first;
            res.push_back(mp(mp(u, v),g[i].first));
            parents[pu]=pv;
        }
        
    }
    cout<<endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i].first.first<<" ";
        cout<<res[i].first.second<<" ";
        cout<<res[i].second<<endl;
    }
    cout<<endl;
    cout<<mstcost<<endl;
    
    return 0;
}