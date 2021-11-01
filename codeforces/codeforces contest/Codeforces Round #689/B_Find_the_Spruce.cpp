// #include <bits/stdc++.h>
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);

// #define ll long long
// #define US unsigned short int
// #define MP make_pair
// #define FF first
// #define SS second
// #define MOD (1000000000+7)
// #define IFN 100000000000000000
// #define M_PI 3.14159265358979323846
// #define PLL pair<ll,ll>

// #define PB push_back
// #define LN cout<<"\n"
// #define YES cout<<"YES\n"
// #define NO cout<<"NO\n"
// #define IN(x) cin>>x
// #define INN(x,y) cin>>x>>y
// #define INNN(x,y,z) cin>>x>>y>>z
// #define INNNN(x,y,z,zz) cin>>x>>y>>z>>zz
// #define OU(y) cout<<y<<" "
// #define OUT(x) cout<<x<<"\n"
// #define OUTT(x,y) cout<<x<<" "<<y<<"\n" 
// #define OUTTT(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
// #define OUTTTT(x,y,z,zz) cout<<x<<" "<<y<<" "<<z<<" "<<zz<<"\n" 

// #define min3(a,b,c)     min(a,min(b,c))
// #define max3(a,b,c)     max(a,max(b,c))
// #define min4(a,b,c,d)   min(a,min(b,min(c,d)))
// #define max4(a,b,c,d)   max(a,max(b,max(c,d)))

// #define FOR(i,a,b)      for(auto i=a;i<=b;i++)
// #define ROF(i,a,b)      for(auto i=a;i>=b;i--)
// #define REP(i,b)        for(auto i=0;i<b;i++)
// #define MEM(a,x)        memset(a,x,sizeof(a))
// #define ABS(x)          ((x)<0?-(x):(x))
// #define SORT(v)         sort(v.begin(),v.end())
// #define RSORT(v)         sort(v.rbegin(),v.rend())
// #define REV(v)          reverse(v.begin(),v.end())
// #define AI(v,n)           for(ll i=0;i<n;i++) cin>>v[i]
// #define AO(v,n)           for(ll i=0;i<n;i++) cout<<v[i]<<" "

// using namespace std;

// ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};
// ll r,c;
// char a[507][507];
// bool mark[507][507];
// bool con(ll x,ll y1,ll y2)
// {
//     if(x<r and y1<c and y2>=0) 
//     {
//         bool f=0;
//         for (ll i = y2; i <= y1; i++)
//         {
//             if(a[x][i]!='*') f=1;
//         }
//         if(f) return false;
//         else{
//             for (ll i = y2+1; i <= y1-1; i++)
//             {
//                 mark[x-1][i]=1;
//             }
//             return true;
//         } 
//     }
//     else return false;
// }
// ll formula(ll n)
// {
//     return (n*(n+1)*(2*n+1))/6;
// }

// int main(){
//     ll T;
//     cin>>T;
//     while(T--){
//         MEM(mark,0);
//         INN(r,c);
//         for (ll i = 0; i < r; i++)
//         {
//             for (ll j = 0; j < c; j++)
//             {
//                 IN(a[i][j]);
//             }
            
//         }
        
//         ll ans=0;
//         for (ll i = 0; i < r; i++)
//         {
//             for (ll j = 0; j < c; j++)
//             {
//                 if(a[i][j]=='*')
//                 {
//                     ans++;
//                     ll cnt=0;
//                     ll x=i+1,y1=j+1,y2=j-1;
//                     if(!mark[i][j])
//                     while (con(x,y1,y2))
//                     {
//                         cnt++;
//                         x++;
//                         y1++;
//                         y2--;
//                     }
//                     if(cnt) ans+=formula(cnt);
//                 }
//             }
            
//         }
//         OUT(ans);
        
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
ll r,c;
char a[507][507];
bool con(ll x,ll y1,ll y2)
{
    if(x+1<r and y1<c and y2>=0) 
    {
        bool f=0;
        for (ll i = y2; i <= y1; i++)
        {
            if(a[x+1][i]!='*') {
                f=1;
                break;
            };
        }
        if(f) return false;
        else return true;
    }
    else return false;
}

int main(){
    ll T;
    cin>>T;
    while(T--){
        
        INN(r,c);
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                IN(a[i][j]);
            }
            
        }
        ll cnt=0;
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                if(a[i][j]=='*')
                {
                    cnt++;
                    ll x=i,y1=j+1,y2=j-1;
                    while (con(x,y1,y2))
                    {
                        cnt++;
                        x++;
                        y1++;
                        y2--;
                    }
                    
                }
            }
            
        }
        OUT(cnt);
        
    }
    return 0;
}