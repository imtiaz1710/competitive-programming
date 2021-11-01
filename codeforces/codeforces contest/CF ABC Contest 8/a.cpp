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
    ll dol[]={1, 2, 5, 10, 20, 50, 100};
    ll eu[] = {5, 10, 20, 50, 100, 200};
    ll n,d,e;
    INN(n,d);
    IN(e);
    ll ans=n%(e*5);
    ans=ans%d;
    OUT(ans);
    return 0;
}

// #include <bits/stdc++.h>
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio                   \
//     ios::sync_with_stdio(false); \
//     cin.tie(0);

// #define ll long long
// #define US unsigned short int
// #define MP make_pair
// #define FS first
// #define SD second
// #define MOD (1000000000 + 7)
// #define PLL pair<ll, ll>

// #define PB push_back
// #define LN cout << "\n"
// #define YES cout << "YES\n"
// #define NO cout << "NO\n"
// #define IN(x) cin >> x
// #define INN(x, y) cin >> x >> y
// #define OU(y) cout << y << " "
// #define OUT(x) cout << x << "\n"
// #define OUTT(x, y) cout << x << " " << y << "\n"

// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define min4(a, b, c, d) min(a, min(b, min(c, d)))
// #define max4(a, b, c, d) max(a, max(b, max(c, d)))

// #define FOR(i, a, b) for (int i = a; i <= b; i++)
// #define ROF(i, a, b) for (int i = a; i >= b; i--)
// #define REP(i, b) for (int i = 0; i < b; i++)
// #define MEM(a, x) memset(a, x, sizeof(a))
// #define ABS(x) ((x) < 0 ? -(x) : (x))
// #define SORT(v) sort(v.begin(), v.end())
// #define REV(v) reverse(v.begin(), v.end())
// #define AI(v)          \
//     for (ll & tmp : v) \
//     cin >> tmp
// #define AO(v)        \
//     for (ll tmp : v) \
//     cout << tmp << " "

// using namespace std;

// ll dr[] = {-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[] = {0, 0, -1, 1, -1, -1, 1, 1};

// int main()
// {
//     ll dol[] = {1, 2, 5, 10, 20, 50, 100};
//     ll eu[] = {5, 10, 20, 50, 100, 200};
//     ll n, d, e;
//     INN(n, d);
//     IN(e);
//     vector<ll> a;
//     for (ll i = 0; i < 7; i++)
//     {
//         a.push_back(dol[i] * d);
//     }
//     for (ll i = 0; i < 6; i++)
//     {
//         a.push_back(eu[i] * e);
//     }
//     SORT(a);
//     for (ll i = a.size() - 1; i >= 0; i--)
//     {
//         cout<<n<<endl;
//         n %= a[i];
//     }
//     cout << n << endl;
//     return 0;
// }
