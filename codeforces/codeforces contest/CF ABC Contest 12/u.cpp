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
// #define FF first
// #define SS second
// #define MOD (1000000000 + 7)
// #define M_PI 3.14159265358979323846
// #define PLL pair<ll, ll>

// #define PB push_back
// #define LN cout << "\n"
// #define YES cout << "YES\n"
// #define NO cout << "NO\n"
// #define IN(x) cin >> x
// #define INN(x, y) cin >> x >> y
// #define INNN(x, y, z) cin >> x >> y >> z
// #define INNNN(x, y, z, zz) cin >> x >> y >> z >> zz
// #define OU(y) cout << y << " "
// #define OUT(x) cout << x << "\n"
// #define OUTT(x, y) cout << x << " " << y << "\n"
// #define OUTTT(x, y, z) cout << x << " " << y << " " << z << "\n"
// #define OUTTTT(x, y, z, zz) cout << x << " " << y << " " << z << " " << zz << "\n"

// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define min4(a, b, c, d) min(a, min(b, min(c, d)))
// #define max4(a, b, c, d) max(a, max(b, max(c, d)))

// #define FOR(i, a, b) for (auto i = a; i <= b; i++)
// #define ROF(i, a, b) for (auto i = a; i >= b; i--)
// #define REP(i, b) for (auto i = 0; i < b; i++)
// #define MEM(a, x) memset(a, x, sizeof(a))
// #define ABS(x) ((x) < 0 ? -(x) : (x))
// #define SORT(v) sort(v.begin(), v.end())
// #define RSORT(v) sort(v.rbegin(), v.rend())
// #define REV(v) reverse(v.begin(), v.end())
// #define AI(v, n)               \
//     for (ll i = 0; i < n; i++) \
//     cin >> v[i]
// #define AO(v, n)               \
//     for (ll i = 0; i < n; i++) \
//     cout << v[i] << " "

// using namespace std;

// ll dr[] = {-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[] = {0, 0, -1, 1, -1, -1, 1, 1};

// int main()
// {
//     //fin;
//     ll n, q;
//     INN(n, q);
//     map<PLL, ll> mp;
//     list<PLL> li;
//     for (ll i = 0; i < q; i++)
//     {
//         ll x, y;
//         INN(x, y);
//         if (mp[{x, y}])
//         {
//             mp[{x, y}] = 0;
//             if (x == 1)
//             {
//                 li.remove({x, y});
//             }
//             else if (x == 2)
//             {
//                 vector <PLL> tmp;
//                 for (auto i = li.begin(); i != li.end(); i++)
//                 {
//                     ll u = (*i).second;
//                     if ((mp[{2, u}]) or (u + 1 <= n and mp[{2, u + 1}]) or (u - 1 >= 1 and mp[{2, u - 1}]))
//                         continue;
//                     tmp.push_back(*i);
                    
//                 }
//                 for(auto loop: tmp){
//                     li.remove(loop);
//                 }
//             }
//         }
//         else
//         {
//             if (x == 1 and ((mp[{2, y}]) or (y + 1 <= n and mp[{2, y + 1}]) or (y - 1 >= 1 and mp[{2, y - 1}])))
//             {
//                 li.push_back({x, y});
//             }
//             else if (x == 2)
//             {
//                 if ((mp[{1, y}]))
//                 {
//                     li.push_back({1, y});
//                 }
//                 if (y + 1 <= n and mp[{1, y + 1}])
//                 {
//                     li.push_back({1, y + 1});
//                 }
//                 if (y - 1 >= 1 and mp[{1, y - 1}])
//                 {
//                     li.push_back({1, y - 1});
//                 }
//             }
//             mp[{x, y}] = 1;
//         }
//         if (!li.empty())
//         {
//             NO;
//         }
//         else
//         {
//             YES;
//         }
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
ll g[4][1000000];

int main(){
    //fin;
    ll n,q;
    INN(n,q);
    ll cnt=0;
    for (ll i = 0; i < q; i++)
    {
        ll x,y;
        INN(x,y);
        ll tmp = x;
        if(tmp==1) tmp++;
        else tmp--;

        if(g[x][y])
        {
            g[x][y]=0;
            if(g[tmp][y]) cnt--;
            if(g[tmp][y+1]) cnt--;
            if(g[tmp][y-1]) cnt--;
        } 
        else
        {
            g[x][y]=1;
            if(g[tmp][y]) cnt++;
            if(g[tmp][y+1]) cnt++;
            if(g[tmp][y-1]) cnt++;
        }
        if (cnt) NO;
        else YES;
    }
    
    
    return 0;
}