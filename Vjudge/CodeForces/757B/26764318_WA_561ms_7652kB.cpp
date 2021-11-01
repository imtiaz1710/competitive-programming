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
// #define PLL pair<ll,ll>

// #define PB push_back
// #define LN cout<<"\n"
// #define YES cout<<"YES\n"
// #define NO cout<<"NO\n"
// #define IN(x) cin>>x
// #define INN(x,y) cin>>x>>y
// #define OU(y) cout<<y<<" "
// #define OUT(x) cout<<x<<"\n"
// #define OUTT(x,y) cout<<x<<" "<<y<<"\n" 

// #define min3(a,b,c)     min(a,min(b,c))
// #define max3(a,b,c)     max(a,max(b,c))
// #define min4(a,b,c,d)   min(a,min(b,min(c,d)))
// #define max4(a,b,c,d)   max(a,max(b,max(c,d)))

// #define FOR(i,a,b)      for(int i=a;i<=b;i++)
// #define ROF(i,a,b)      for(int i=a;i>=b;i--)
// #define REP(i,b)        for(int i=0;i<b;i++)
// #define MEM(a,x)        memset(a,x,sizeof(a))
// #define ABS(x)          ((x)<0?-(x):(x))
// #define SORT(v)         sort(v.begin(),v.end())
// #define REV(v)          reverse(v.begin(),v.end())
// #define AI(v)           for(ll &tmp:v) cin>>tmp
// #define AO(v)           for(ll tmp:v) cout<<tmp<<" "

// using namespace std;

// ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};
// vector <ll> p;
// const ll maxn=400;
// ll mark[maxn+1];
// map<ll, ll> mp;
// void prime() {
//     memset(mark,0,sizeof mark);

//     for (ll i = 4; i <=maxn ; i+=2)
//     {
//         mark[i]=1;
//     }
//     ll sq=sqrt(maxn);
//     for (ll i = 3; i <=sq; i+=2)
//     {
//         for (ll j = i+i; j <=maxn; j+=(i+i))
//         {
//             mark[j]=1;
//         }
        
//     }
//     for (ll i = 1; i <=maxn; i++)
//     {
//         if(mark[i]==0){
//            // OUT(i);
//             p.push_back(i);
//         }
//     }
    
// }

// int main(){

//     ll n;
//     IN(n);
//     ll a[n];
//     AI(a);
//     ll mx=0;
//     // for (ll i = 1; i <400; i++)
//     // {
//     //     for (ll j = 0; j < n; j++)
//     //     {
//     //         if(a[j]%i==0 and i!=a[j]) {
//     //            // OUTT(a[j],p[i]);
//     //            if(mp[a[j]/i]!=i and i!=1){
//     //                mp[i]++;
//     //                mx=max(mx,mp[i]);
//     //            }
//     //            if(a[j]/i!=1)
//     //             mp[a[j]/i]++;
//     //             mx=max(mx,mp[a[j]/i]);
//     //         }
//     //     }
//     // }

    
//     OUT(mx);
    
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
    ll a[n];
    map <ll,ll> mp;
    for (ll i = 0; i < n; i++)
    {
        IN(a[i]);
        mp[a[i]]++;
    }
    ll ans=1;
    for (ll i = 0; i < n; i++)
    {
        ll sq=sqrt(a[i]);
        for (ll j = 2; j <= sq; j++)
        {
            if(a[i]%j==0){
                if(a[i]/j!=j){
                    mp[j]++;
                }
                mp[a[i]/j]++;
                ans=max3(mp[a[i]/j],mp[j],ans);
            }
        }
        
    }
    OUT(ans);
    
    return 0;
}