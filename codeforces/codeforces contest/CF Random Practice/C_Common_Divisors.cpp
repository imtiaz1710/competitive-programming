// #include <bits/stdc++.h>
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);

// #define ll long long
// #define US unsigned short int
// #define MP make_pair
// #define FF first
// #define SS second
// #define MOD (1000000000+7)
// #define IFN 100000000000000000
// #define M_PI 3.14159265358979323846
// #define PLL pair<ll,ll>

// #define PB push_back
// #define LN cout<<"\n"
// #define YES cout<<"YES\n"
// #define NO cout<<"NO\n"
// #define IN(x) cin>>x
// #define INN(x,y) cin>>x>>y
// #define INNN(x,y,z) cin>>x>>y>>z
// #define INNNN(x,y,z,zz) cin>>x>>y>>z>>zz
// #define OU(y) cout<<y<<" "
// #define OUT(x) cout<<x<<"\n"
// #define OUTT(x,y) cout<<x<<" "<<y<<"\n" 
// #define OUTTT(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
// #define OUTTTT(x,y,z,zz) cout<<x<<" "<<y<<" "<<z<<" "<<zz<<"\n" 

// #define min3(a,b,c)     min(a,min(b,c))
// #define max3(a,b,c)     max(a,max(b,c))
// #define min4(a,b,c,d)   min(a,min(b,min(c,d)))
// #define max4(a,b,c,d)   max(a,max(b,max(c,d)))

// #define FOR(i,a,b)      for(auto i=a;i<=b;i++)
// #define ROF(i,a,b)      for(auto i=a;i>=b;i--)
// #define REP(i,b)        for(auto i=0;i<b;i++)
// #define MEM(a,x)        memset(a,x,sizeof(a))
// #define ABS(x)          ((x)<0?-(x):(x))
// #define SORT(v)         sort(v.begin(),v.end())
// #define RSORT(v)         sort(v.rbegin(),v.rend())
// #define REV(v)          reverse(v.begin(),v.end())
// #define AI(v,n)           for(ll i=0;i<n;i++) cin>>v[i]
// #define AO(v,n)           for(ll i=0;i<n;i++) cout<<v[i]<<" "

// using namespace std;

// ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


// int main(){
//     fastio ;
//     ll n;
//     IN(n);
//     vector<ll> a(n);
//     AI(a,n);
//     deque<ll> dq;
//     ll sq=sqrt(a[0]);
//     for (ll i = 1; i <=sq; i++)
//     {
//         if(a[0]%i==0)
//         {
//             if(a[0]/i==i) dq.push_back(i);
//             else
//             {
//                 dq.push_back(i);
//                 dq.push_back(a[0]/i);
//             }
//         }
//     }
//     ll ans=dq.size();
//     for (ll i = 0; i < dq.size(); i++)
//     {
//         for (ll j = 0; j < n; j++)
//         {
//             if(a[j]%dq[i]!=0) 
//             {
//                 ans--;
//                 break;
//             }
//         }
        
//     }
    
//     OUT(ans);
//     return 0;
// }


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


int main(){
    ll n;
    IN(n);
    vector <ll> a(n);
    AI(a,n);
    ll gcd=a[0];
    for (ll i = 1; i < n; i++)
    {
        gcd=__gcd(gcd,a[i]);
    }
    if(gcd==1)
    {
        OUT(gcd);
        return 0;
    }
    
    map<ll,ll> mp;
    ll sq=sqrt(gcd);
    for (ll i = 2; i <= sq; i++)
    {
        while (gcd%i==0)
        {
            gcd/=i;
            mp[i]++;
        }
    }
    if(gcd!=1) mp[gcd]++;
    ll ans=1;
    for(auto tmp:mp)
    {
        ans*=tmp.SS+1;
    }
    OUT(ans);
    return 0;
}