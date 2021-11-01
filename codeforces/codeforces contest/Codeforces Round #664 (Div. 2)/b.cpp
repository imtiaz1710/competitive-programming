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
#define PLL pair<ll,ll>

#define PB push_back
#define LN cout<<"\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define IN(x) cin>>x
#define INN(x,y) cin>>x>>y
#define OU(y) cout<<y<<" "
#define OUT(x) cout<<x<<"\n"
#define OUTT(x,y) cout<<x<<" "<<y<<"\n" 

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
#define REV(v)          reverse(v.begin(),v.end())
#define AI(v)           for(auto &tmp:v) cin>>tmp
#define AO(v)           for(auto tmp:v) cout<<tmp<<" "

using namespace std;

ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


int main(){
    vector <PLL> res;
    ll n,m;
    INN(n,m);
    ll a[n][m];
    ll x,y;
    INN(x,y);
    x--,y--;
    res.PB({x,y});
    ll dane=0;
    ll bame=0;
    for (ll j = 0; j < m; j++)
    {
        if(j==y) continue;
        a[x][j]=1;
        res.PB({x,j});
    }
    dane=1;
    for (ll i = 0; i < n; i++)
    {
        if(i==x) continue;
        if(bame){
            for (ll j = 0; j < m; j++)
            {
                res.PB({i,j});
            }
            bame=0;
            dane=1;
        }
        else if(dane)
        {
            for (ll j = m-1; j >=0; j--)
            {
                res.PB({i, j});
            }
            dane=0;
            bame=1;
        } 
    }
    for(auto tmp:res){
        OUTT(tmp.FF+1,tmp.SS+1);
    }
    
    return 0;
}