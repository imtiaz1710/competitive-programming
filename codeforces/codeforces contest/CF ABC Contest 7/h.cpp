//unaccepted code


#include <bits/stdc++.h>
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);

#define ll long long
#define US unsigned short int
#define MP make_pair
#define FS first
#define SD second
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

#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define AI(v)           for(ll &tmp:v) cin>>tmp
#define AO(v)           for(ll tmp:v) cout<<tmp<<" "

using namespace std;

ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


int main(){
    ll n;
    IN(n);
    map<ll,ll> m,m2;
    ll a[n],b[n];
    for (ll i = 0; i < n; i++)
    {
        IN(a[i]);
        m[a[i]]++;
    }
    for (ll i = 0; i < n; i++)
    {
        IN(b[i]);
        m2[b[i]]++;
    }

    ll indx[2];
    ll indx2[2];
    
    ll j=0;
    for (ll i = 0; i < n; i++)
    {
        if(m[a[i]]==2) {
             indx[j++]=i;
        }
    }
    j=0;
    for (ll i = 0; i < n; i++)
    {
        if (m2[b[i]] == 2)
        {
            indx2[j++] = i;
        }
    }
    ll req=-1;
    ll req2=-1;
    for (ll i = 1; i <=n; i++)
    {
        if(m[i]==0) {
            req=i;
            break;
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (m2[i] == 0)
        {
            req2 = i;
            break;
        }
    }
    ll f;
    if(b[indx[0]] ==req){
        f=1;
        a[indx[0]]=req;
    }
    else if(a[indx[1]]==req)
    {
        f=1;
        a[indx[1]]=req;
    }
    else if(a[indx2[0]]==req2)
    {
        f=2;
        b[indx2[0]]=req2;
    }
    else
    {
        f=2;
        b[indx2[1]]=req2;
    }
    
    if(f==1)
        AO(a);
    else
        AO(b);
    LN;
    
    
    
    return 0;
}