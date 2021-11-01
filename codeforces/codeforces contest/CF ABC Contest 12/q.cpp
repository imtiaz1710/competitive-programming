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
#define AO(v,n)           for(ll i=0;i<n;i++) cout<<mp[v[i]]<<" "

using namespace std;

ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};
bool cmp(PLL x,PLL y){
    return x.SS < y.SS;
}

int main(){
    //fin;
    ll n,k;
    INN(n,k);
    vector <PLL> a(n);
    vector <ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        IN(a[i].FF);
        a[i].SS=i;
    }
    for (ll i = 0; i < n; i++)
    {
        IN(b[i]);
    }
    SORT(a);
    map<ll,ll> mp;
    multiset <ll> st;
    
    for (ll i = 0; i < n; i++)
    {
        ll res;
        if(i){
            
            res = b[a[i].SS];
            st.insert(b[a[i-1].SS]);
            if(k>=i){
                for (ll j = 0; j < i; j++)
                {
                    res+=b[a[j].SS];
                } 
            }
            else
            {
                ll cnt=0;
                for (auto it = st.rbegin(); cnt<k ; it++,cnt++)
                {
                    res+=*it;
                }  
            } 
        }
        else
        {
            res=b[a[i].SS];
        }
        mp[a[i].FF]=res;
    }
    sort(a.begin(),a.end(),cmp);
    for (ll i = 0; i < n; i++)
    {
        OU(mp[a[i].FF]);
    }
    LN;
    return 0;
}