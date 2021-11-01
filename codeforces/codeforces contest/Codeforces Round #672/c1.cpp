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

// #define FOR(i,a,b)      for(auto i=a;i<=b;i++)
// #define ROF(i,a,b)      for(auto i=a;i>=b;i--)
// #define REP(i,b)        for(auto i=0;i<b;i++)
// #define MEM(a,x)        memset(a,x,sizeof(a))
// #define ABS(x)          ((x)<0?-(x):(x))
// #define SORT(v)         sort(v.begin(),v.end())
// #define REV(v)          reverse(v.begin(),v.end())
// #define AI(v)           for(auto &tmp:v) cin>>tmp
// #define AO(v)           for(auto tmp:v) cout<<tmp<<" "

// using namespace std;

// ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};
// ll n,q;
// vector <ll> a;
// ll dp[300009][3];
// ll fun(ll id,ll sign){

//     if(id==n) return 0;
//     if(dp[id][sign]!=-1) return dp[id][sign];
//     ll nibo=0,nibona=0;
    
//     if(sign==2){
//         nibo=a[id]+fun(id+1,1);
//     }
//     else
//     {
//          nibo=-a[id]+fun(id+1,2);
//     }
//     nibona=fun(id+1,sign);

//    // OUTT(nibo,nibona);
//   return dp[id][sign]=max(nibo,nibona);
// }
// int main(){
//     //fin;
//     ll T;
//     cin>>T;
//     while(T--){
//         memset(dp,-1,sizeof dp);
//         INN(n,q);
//         for (ll i = 0; i < n; i++)
//         {
//             ll tmp;
//             IN(tmp);
//             a.push_back(tmp);
//         }
//         ll ans=fun(0,2);
//         OUT(ans);
//        // LN;
//         a.clear();
//     }
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
   // fin;
    ll T;
    cin>>T;
    while(T--){
        ll n,q;
        INN(n,q);
        vector <ll> a(n);
        AI(a);
        bool f=0;
        vector<ll> res;
        for (ll i = 0; i < n-1; i++)
        {
            if(f==0 and a[i]>a[i+1] )
            {
                    f=1;
                    res.push_back(a[i]);
            }
            else if(f==1 and a[i]<a[i+1])
            {
                f=0;
                res.push_back(a[i]);
            }
        }
        res.push_back(a[n-1]);
        if((ll)res.size()%2==0) res.pop_back();
        ll sum=0;
       // AO(res); LN;
        for (ll i = 0; i < res.size(); i++)
        {
            if(i&1) sum-=res[i];
            else sum+=res[i];
        }
        OUT(sum);
        
    }
    return 0;
}