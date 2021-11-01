// #include <bits/stdc++.h>
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);

// #define ll long long
// #define US unsigned short int
// #define MP make_pair
// #define FS first
// #define SD second
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


// int main(){
//     ll n;
//     IN(n);
//     vector<pair<char,ll>> st[n];
//     for (ll i = 0; i < n; i++)
//     {
//         string s;
//         IN(s);
//         for (ll j = 0; j < s.size(); j++)
//         {
//             st[i].push_back({s[j], j + 1});
//         }
//         SORT(st[i]); 
//     }
//     ll mn=100000000;
//     bool f=0;
//     for (ll j = 0; j < st[0].size() and f==0; j++)
//     {
//        ll cnt=0;
//        for (ll i = 0; i < n and f==0; i++)
//        {
//            if(st[i][j].first==st[0][j].first){
//                cnt+=st[i][j].second-1;
//            } 
//            else
//            {
//                f=1;
//            }
//        }
//        //cout<<cnt<<endl;
//        mn=min(cnt,mn);    
//     }
//     OUT(mn);
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
    vector <string> s(n);
    for (ll i = 0; i < n; i++)
    {
        IN(s[i]);
    }
    ll mn=10000000;
    bool f=0;
    for (ll i = 0; i < n and f==0; i++)
    {
        ll sum=0;
        for (ll j = 0; j < n and f==0; j++)
        {
            ll tmp=(s[j]+s[j]).find(s[i]);
            if (tmp > mn)
                f = 1;
            else 
             sum+=tmp;
        }
        
        mn=min(mn,sum);
    }
    if(f)
    cout<<-1<<endl;
    else OUT(mn);
    
    return 0;
}