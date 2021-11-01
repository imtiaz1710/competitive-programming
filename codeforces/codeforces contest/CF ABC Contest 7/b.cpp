// #include <bits/stdc++.h>
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);


// #define ll long long
// #define US unsigned short int
// #define MP make_pair
// #define PLL pair<ll,ll>
// #define PB push_back
// #define YES cout<<"YES\n"
// #define NO cout<<"NO\n"
// #define IN(x) cin>>x
// #define OUT(y) cout<<y


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


// using namespace std;


// ll dr[]{-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[]{0, 0, -1, 1, -1, -1, 1, 1};


// int main(){

//     double a,b;
//     string c;
//     cin>>a>>b>>c;
//     long double d=a/b;
//     string s=to_string(d);
//     ll pos=s.find(".");
//     string str=s.substr(pos);
//     ll ans=str.find(c);
//     if(ans>10000000000)
//         cout<<-1<<endl;
//     else OUT(ans)<<endl;
//     cout<<s<<endl;
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
    ll a,b,c;
    INN(a,b);
    IN(c);
    ll rem=a%b;
    ll f=0;
    for (ll i = 1; i < 1000*1000; i++)
    {
        ll ans=(rem*10)/b;
        if(ans==c){
            f=i;
            break;
        }
        rem = (rem * 10) % b;
    }
    if(f) cout<<f<<endl;
    else OUT(-1);
    return 0;
}