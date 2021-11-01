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

ll dr[]={ -1, 1, 0, 0, -1, 1, -1, 1 };
ll dc[]={ 0, 0, -1, 1, -1, -1, 1, 1 };


int main() {
    ll n;
    IN(n);
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        IN(a[i]);
    }
    map<ll, ll> mp;
    ll ans=1000000000;
    for (ll i = 0; i < n; i++)
    {
        bool inv=0;
        ll l=i, r=n-1;
        for (ll j = 0; j < i; j++)
        {
            mp[a[j]]++;
            if (mp[a[j]]>1) {
                inv=1;
                break;
            }
        }
        for (ll j = n-1; j >=i ; j--)
        {
            mp[a[j]]++;
            if (mp[a[j]]>1) {
                r=j;
                break;
            }
        }
        if (!inv) {
            ans=min(ans, r-l+1);
        }
        if(l==n-1 and r==n-1) ans=0;
        mp.clear();
    }
   
        OUT(ans);
    return 0;
}