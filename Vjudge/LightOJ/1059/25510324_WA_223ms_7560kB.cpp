#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 100007
using namespace std;

vector < pair <ll, pair<ll,ll> > > g;
ll parent[maxn];

ll findparent(ll a)
{
    if(parent[a]==a) return a;
    return parent[a]=findparent(parent[a]);
}

void clean()
{
    for(ll i=0;i<maxn;i++) parent[i]=i;
    g.clear();
}

int main(){
   // fin;
    ll tc=0;
    ll t;
    cin>>t;
    while (t--)
    {
        clean();
        ll n,m,a;
        cin>>n>>m>>a;
        for (ll i = 0; i < m; i++)
        {
            ll u,v,w;
            cin>>u>>v>>w;
            g.push_back(make_pair(min(a,w),make_pair(u,v)));
        }
        sort(g.begin(),g.end());
        ll edge_used=0;
        ll cost=0;
        for (ll i = 0; i < g.size(); i++)
        {
            ll u=g[i].second.first;
            ll v=g[i].second.second;
            ll pu=findparent(u);
            ll pv=findparent(v);
            if(pu!=pv)
            {
                cost+=g[i].first;
                edge_used++;
                parent[pv]=pu;
            }
        }
        cost+=(n-edge_used)*a;
        //cout<<edge_used<<endl;
        printf("Case %lld: %lld %lld\n",++tc,cost,n-edge_used);
    }
    
    return 0;
}