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
//     ll n;
//     IN(n);
//     ll ch;
//     vector<string> st(n);
//     for (ll i = 0; i < n; i++)
//     {
//         string s = "";
//         for (ll j = 0; j < 6; j++)
//         {
//             cin >> ch;
//             s += to_string(ch);
//         }
//         //cout<<s<<endl;
//         st[i] = s;
//     }

//     ll cnt = 1;
//     bool stop = 0;
//     while (!stop)
//     {
//         string num = to_string(cnt);
//         ll found = 0;
//         for (ll i = 0; i < num.size(); i++)
//         {
//             ll used[n];
//             memset(used,0,sizeof used);
//             for (ll j = 0; j < n; j++)
//             {
//                 if(st[j].find(num[i])<10000000000 and used[j]==0)
//                 {
//                     found=1;
//                     used[j]=1;
//                     break;
//                 }
//             }
            
            
//         }
//         // cout<<found<<endl;
//         if (found != num.size())
//             stop = 1;
//         cnt++;
//     }
//     cout << cnt - 1 << endl;
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
    ll a[n][6];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 6; j++)
        {
            cin>>a[i][j];
        }
        
    }
    ll b[1000];
    memset(b,0,sizeof b);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if(j!=i)
            {
                for (ll k = 0; k < 6; k++)
                {
                    for (ll l = 0; l < 6; l++)
                    {
                        ll tmp=10*a[i][k]+a[j][l];
                        b[tmp]=1;
                    }
                    
                }
                
            }
        } 
    }
    for (ll i = 1; i < 1000; i++)
    {
        if(b[i]==0){
            cout<<i-1<<endl;
            break;
        }
    }
    
    
    
    return 0;
}