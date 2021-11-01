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
ll marked[100100];
vector <ll> primes;

void sieve (ll n){
    ll sq = sqrt (n);
     marked[0] = marked[1] = 1;
    for (ll i = 4; i <= n; i += 2)
        marked[i] = 1;

    for (ll i = 3; i <= sq; i += 2){
        for (ll k = i * i; k <= n; k += i + i)
            marked[k] = 1;

    }

    for (ll i = 2; i <= n; i++)
        if (!marked[i])
            primes.push_back (i);
}

int main(){
    sieve(100010);
    ll T;
    cin>>T;
    while(T--){
        ll n;
        IN(n);
        ll sq=sqrt(n);
        map <ll,ll> mp;
       
        for (ll i = 0; sq>=primes[i]; i++)
        {
              while (n%primes[i]==0)
              {
                  //OUT("aa");
                    mp[primes[i]]++;
                    n/=primes[i];
              }
        }
        if(n!=1)
        {
            mp[n]++;
        }
        
        vector <PLL> a;
        for(auto tmp:mp)
        {
            a.PB({tmp.second,tmp.first});
        }
        RSORT(a);
        vector <ll> res;
        ll cnt=a[0].first-1;;
        while (cnt--)
        {
            res.PB(a[0].second);
        }
        ll last=a[0].second;
        for (ll i = 1; i < a.size(); i++)
        {
            cnt=a[i].first;
            while (cnt--)
            {
                last*=a[i].second;
            }
            
        }
        res.push_back(last);
        OUT(res.size());
        AO(res,res.size());
        LN;
        
        
    }
    return 0;
}