#include <bits/stdc++.h>
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);

#define ll long long
#define US unsigned short int
#define MP make_pair
#define FF first
#define SS second
#define MOD (1000000000+7)
#define IFN 100000000000000000
#define M_PI 3.14159265358979323846
#define PLL pair<ll,ll>

#define PB push_back
#define LN cout<<"\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define IN(x) cin>>x
#define INN(x,y) cin>>x>>y
#define INNN(x,y,z) cin>>x>>y>>z
#define INNNN(x,y,z,zz) cin>>x>>y>>z>>zz
#define OU(y) cout<<y<<" "
#define OUT(x) cout<<x<<"\n"
#define OUTT(x,y) cout<<x<<" "<<y<<"\n" 
#define OUTTT(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define OUTTTT(x,y,z,zz) cout<<x<<" "<<y<<" "<<z<<" "<<zz<<"\n" 

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))

#define FOR(i,a,b)      for(auto i=a;i<=b;i++)
#define ROF(i,a,b)      for(auto i=a;i>=b;i--)
#define REP(i,b)        for(auto i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))
#define SORT(v)         sort(v.begin(),v.end())
#define RSORT(v)         sort(v.rbegin(),v.rend())
#define REV(v)          reverse(v.begin(),v.end())
#define AI(v,n)           for(ll i=0;i<n;i++) cin>>v[i]
#define AO(v,n)           for(ll i=0;i<n;i++) cout<<v[i]<<" "

using namespace std;

ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};
ll n,m;
vector <ll> a[100009];
ll mark[100009];
ll col[100009];
void dfs(ll root)
{
    mark[root]=1;
    for (ll i = 0; i < a[root].size(); i++)
    {
        ll v=a[root][i];
        ll u=root;
        if(mark[v]) continue;
        if(col[v]==-1)
            col[v]=col[u]^1;
        dfs(v);
    }
    
}

int main(){
    MEM(mark,0);
    MEM(col,-1);
    INN(n,m);
    vector<PLL> ver;
    for (ll i = 0; i < m; i++)
    {
        ll u,v;
        INN(u,v);
        ver.PB({u,v});
        a[u].PB(v);
        a[v].PB(u);
    }
    for (ll i = 1; i <= n; i++)
    {
        if(mark[i]) continue;
        if(col[i]==-1) col[i]=0;
        dfs(i);
    }
    bool f=0;
    set<ll> ayn;
    set<ll> pet;
    for (ll i = 0; i < ver.size(); i++)
    {
        if(col[ver[i].FF]==col[ver[i].SS]) {
            f=1;
            break;
        }
        else
        {
            if(col[ver[i].FF]==0) ayn.insert(ver[i].FF);
            if(col[ver[i].FF]==1) pet.insert(ver[i].FF);
            if(col[ver[i].SS]==0) ayn.insert(ver[i].SS);
            if(col[ver[i].SS]==1) pet.insert(ver[i].SS);
        }
    }
    if(f) OUT(-1);
    else
    {
        OUT(ayn.size());
        for(auto tmp:ayn) cout<<tmp<<" ";
        LN;
        OUT(pet.size());
        for(auto tmp:pet) cout<<tmp<<" ";
        LN;
    }
    
    


    return 0;
}