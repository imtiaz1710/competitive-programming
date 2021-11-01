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
    ll n,m,cmp1,cmp2;
    INN(n,m);
    vector <ll> a(n);
    vector<ll> b(m);
    AI(a);
    AI(b);
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    // if(a[0]*b[0] > a[n-1]*b[m-1]){
    //     cmp1=max(a[1]*b[0],a[n-1]*b[m-1]);
    //     OUT(cmp1);
    // }
    // else if(a[0]*b[0] < a[n-1]*b[m-1])
    // {
    //     cmp2=max(a[0]*b[0],a[n-2]*b[m-1]);
    //     OUT(cmp2);
    // }
    // else
    // {
    //     cmp1 = max(a[1] * b[0], a[n - 1] * b[m - 1]);
    //     cmp2 = max(a[0] * b[0], a[n - 2] * b[m - 1]);
    //     OUT(max(cmp1,cmp2));
    // }
    cmp1 = max(a[1] * b[0], a[n - 1] * b[m - 1]);
    cmp2 = max(a[0] * b[0], a[n - 2] * b[m - 1]);
    OUT(max(cmp1, cmp2));
    return 0;
}