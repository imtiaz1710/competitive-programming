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


int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        IN(n);
        ll a[n+1][n+1];
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                char tmp;
                IN(tmp);
                a[i][j]=tmp-'0';
            }
            
        }
        
        ll x,y,xx,yy;
        x=a[1][2];
        y=a[2][1];
        xx=a[n-1][n];
        yy=a[n][n-1];
        ll ans;
        vector <PLL> idx;
        if(x==y and xx==yy and (x!=xx or y!=yy))
        {
            OUT(0);
        }
        else if(x==y and xx==yy and x==xx and y==yy)
        {
            OUT(2);
            OUTT(1,2);
            OUTT(2,1);
        }
        else if(x==y and xx!=yy) 
        {
            OUT(1);
            if(x==xx ) OUTT(n-1,n);
            else OUTT(n,n-1);
        }
        else if(x!=y and xx==yy)
        {
            OUT(1);
            if(x==xx) OUTT(1,2);
            else OUTT(2,1);
        }
        else if(x!=y and xx!=yy)
        {
            OUT(2);
            if(x==1) OUTT(1,2);
            else OUTT(2,1);
            if(xx==0) OUTT(n-1,n);
            else OUTT(n,n-1);
        }
        
        
    }
    return 0;
}
