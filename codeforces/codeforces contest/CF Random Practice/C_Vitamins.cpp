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
#define IFN 100000000000000000
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
vector <PLL> a;
ll dp[10000][10];
ll n;

ll fun(ll id,ll mask)
{
    if(mask==7) return 0;
    if(id==n) return IFN;
    if(dp[id][mask]!=-1) return dp[id][mask];
 
    ll nibo=IFN,nibona=IFN;
    if(mask | a[id].SS!=mask) nibo=a[id].FF+fun(id+1,mask | a[id].SS);
    nibona=fun(id+1,mask);
    
    return dp[id][mask]=min(nibo,nibona);
}

int main(){
    MEM(dp,-1);
   
        IN(n);
        map<string,ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll num;
            string str;
            INN(num,str);
            if(mp[str]) 
            {
                if(mp[str]>num) mp[str]=num;
            }
            else mp[str]=num;
        }
        map<char,ll> p;
        p['A']=2;
        p['B']=1;
        p['C']=0;
        for(auto tmp:mp)
        {
            string str=tmp.first;
            ll num=0;
            for (ll i = 0; i < str.size(); i++)
            {
                num+=pow(2,p[str[i]]);
            }
            a.PB({tmp.second,num});
        }
        SORT(a);
        n=a.size();
        ll ans=IFN;
        // for (ll i = 0; i < n; i++)
        // {
        //    ans=min(ans,a[i].FF+fun(0,a[i].SS));
        // }
        ans=fun(0,0);
        if(ans==IFN)
            OUT(-1);
        else OUT(ans);
    return 0;
}