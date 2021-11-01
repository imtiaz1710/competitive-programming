#include <bits/stdc++.h>
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define ll long long
#define US unsigned short int
#define MP make_pair
#define PLL pair<ll,ll>
#define PB push_back
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define IN(x) cin>>x
#define OUT(y) cout<<y<<endl
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
using namespace std;
ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};
int main(){
    ll n;
    IN(n);
    string s;
    IN(s);
    map<char,ll> m;
    ll mx=0;
    ll cnt=0;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]>='A' and s[i]<='Z') {
            if(cnt>mx) mx=cnt;
            m.clear();
            cnt=0;
        }
        else
        {
            if(m[s[i]]==0) {
                cnt++;
                m[s[i]]=1;
            }
        }
    }
    OUT(mx);
    return 0;
}