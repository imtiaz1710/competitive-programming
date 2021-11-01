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
PLL key;
bool flag=0;
ll gcnt=0;

int main(){

    ll n;
    IN(n);
    ll a[n];
    PLL b[n];
    AI(a);
    PLL res;
    ll mx=0;
    key={1,a[0]};
    rep:
    gcnt++;
    map<PLL,ll> mp;

    for (ll i = 0; i < n; i++)
    {
        if(key.FF-1==i) continue;
        ll x=(i+1)-key.FF;
        ll y=a[i]-key.SS;
        ll gcd=__gcd(x,y);
       // OUT(gcd);
        x=gcd? x/gcd: 0;
        y=gcd? y/gcd: 0;
        if(x==0 or y==0){x=0; y=0;}
        b[i]={x,y};
        mp[b[i]]++;
        if(mp[b[i]]>mx){
            mx=mp[b[i]];
            res=b[i];
        }
    }
    vector <PLL> c;
    for (ll i = 0; i < n; i++)
    {
        if(key.FF-1==i) continue;
        if(b[i]!=res){
            c.push_back({i+1,a[i]});
        } 
    }

    // OUTT(res.first,res.second);
    if(c.size()){
        bool f=0;
        for (ll i = 1; i < c.size() ; i++)
        {
            ll x=c[i].FF-c[0].FF;
            ll y=c[i].SS-c[0].SS;
            //OUTT(x,y);
            ll gcd=__gcd(x,y);
            x=gcd? x/gcd:0;
            y=gcd? y/gcd:0;
            if(x==0 or y==0){x=0; y=0;}
            if( res != make_pair(x,y)) 
            {
                f=1;
                break;
            }
        }
        if(f==0) flag=1;
    }

    if(gcnt==1){
        key={2,a[1]};
        goto rep;
    } 
    if(flag) YES;
    else NO;
    
    return 0;
}