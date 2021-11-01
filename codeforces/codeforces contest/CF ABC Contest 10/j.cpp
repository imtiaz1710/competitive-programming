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
    //fin;
    ll n;
    IN(n);
    ll a[n];
    AI(a);
    string s;
    IN(s);
    ll l=-1,r=-1;
    for (ll i = 0; i < s.size(); i++)
    {
        
        if(s[i]=='1'){
            if(l==-1){
                l=i;
            }
            r=i;
        }
        if(s[i]=='0' or i==s.size()-1)       //culprite
        {
            if(l!=-1){
                sort(a+l,a+r+2);
            }
            l=-1,r=-1;
        }
    }
        for (int i = 0; i < n; i++)
        {
            if (a[i]-1!=i)
            {
                cout << "NO\n";
                return 0;
            }
        }

    YES;
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// #define fRead(x) freopen(x, "r", stdin)
// #define fWrite(x) freopen(x, "w", stdout)

// #define LL long long
// #define ULL unsigned long long
// #define ff first
// #define ss second
// #define pb push_back
// #define INF 2e16
// #define PI acos(-1.0)
// #define mk make_pair

// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define min4(a, b, c, d) min(a, min(b, min(c, d)))
// #define max4(a, b, c, d) max(a, max(b, max(c, d)))
// #define SQR(a) ((a) * (a))
// #define FOR(i, a, b) for (int i = a; i <= b; i++)
// #define REP(i, b) for (int i = 0; i < b; i++)
// #define ROF(i, a, b) for (int i = a; i >= b; i--)
// #define MEM(a, x) memset(a, x, sizeof(a))
// #define ABS(x) ((x) < 0 ? -(x) : (x))

// #define scanI(a) scanf("%d", &a)
// #define scanI2(a, b) scanI(a), scanI(b)
// #define scanI3(a, b, c) scanI(a), scanI(b), scanI(c)
// #define scanI4(a, b, c, d) scanI(a), scanI(b), scanI(c), scanI(d)

// #define scanL(a) scanf("%I64d", &a)
// #define scanL2(a, b) scanL(a), scanL(b)
// #define scanL3(a, b, c) scanL(a), scanL(b), scanL(c)
// #define scanL4(a, b, c, d) scanL(a), scanL(b), scanL(c), scanL(d)

// #define SORT(v) sort(v.begin(), v.end())
// #define REV(v) reverse(v.begin(), v.end())

// #define FastRead                  \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(nullptr);

// const int N = 200005;
// int ara[N], n;
// int main()
// {
//     cin >> n;
//     REP(i, n)
//         cin >> ara[i];
//     string s;
//     cin >> s;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '1')
//         {
//             int go;
//             for (int j = i; j < s.size(); j++)
//             {
//                 if (s[j] == '0')
//                     break;
//                 go = j;
//             }
//             sort(ara + i, ara + go + 2);
//             i = go;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (ara[i]-1!=i)
//         {
//             cout << "NO\n";
//             return 0;
//         }
//     }
//     cout << "YES\n";
//     return 0;
// }