// // #include <bits/stdc++.h>
// // #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// // #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// // #define dbg(x) cerr << #x << ": " << x << endl
// // #define fastio ios::sync_with_stdio (false); cin.tie (0);

// // #define ll long long
// // #define US unsigned short int
// // #define MP make_pair
// // #define FF first
// // #define SS second
// // #define MOD (1000000000+7)
// // #define PLL pair<ll,ll>

// // #define PB push_back
// // #define LN cout<<"\n"
// // #define YES cout<<"YES\n"
// // #define NO cout<<"NO\n"
// // #define IN(x) cin>>x
// // #define INN(x,y) cin>>x>>y
// // #define OU(y) cout<<y<<" "
// // #define OUT(x) cout<<x<<"\n"
// // #define OUTT(x,y) cout<<x<<" "<<y<<"\n" 

// // #define min3(a,b,c)     min(a,min(b,c))
// // #define max3(a,b,c)     max(a,max(b,c))
// // #define min4(a,b,c,d)   min(a,min(b,min(c,d)))
// // #define max4(a,b,c,d)   max(a,max(b,max(c,d)))

// // #define FOR(i,a,b)      for(int i=a;i<=b;i++)
// // #define ROF(i,a,b)      for(int i=a;i>=b;i--)
// // #define REP(i,b)        for(int i=0;i<b;i++)
// // #define MEM(a,x)        memset(a,x,sizeof(a))
// // #define ABS(x)          ((x)<0?-(x):(x))
// // #define SORT(v)         sort(v.begin(),v.end())
// // #define REV(v)          reverse(v.begin(),v.end())
// // #define AI(v)           for(ll &tmp:v) cin>>tmp
// // #define AO(v)           for(ll tmp:v) cout<<tmp<<" "

// // using namespace std;

// // ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
// // ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


// // int main(){
// //     string s;
// //     IN(s);
// //     ll i=0;
// //     vector <ll> res;
// //     if(s[0]=='b') res.push_back(0);
// //     ll cnt=0;
// //     for (i = 0; i < s.size(); i++)
// //     {
// //         if(i==s.size()-1 or s[i]!=s[i+1]){
// //             cnt++;
// //             res.push_back(cnt);
// //             cnt=0;
// //         }
// //         else
// //         {
// //             cnt++;
// //         }
// //     }
// //     ll ans=0;
// //     if (res.size()<=2) {
// //         for(ll tmp:res) ans+=tmp;
// //         OUT(ans);
// //         return 0;
// //     }
    
// //     if (s.back()=='b') res.push_back(0);
    
// //     for (i = 0; i < res.size(); i++)
// //     {
// //         if(i&1){
// //             ans=max(ans,res[i]+res[i+1]+res[i-1]);
// //         }
// //     }
// //     OUT(ans); 
// //     return 0;
// // }

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
// #define PLL pair<ll,ll>

// #define PB push_back
// #define LN cout<<"\n"
// #define YES cout<<"YES\n"
// #define NO cout<<"NO\n"
// #define IN(x) cin>>x
// #define INN(x,y) cin>>x>>y
// #define OU(y) cout<<y<<" "
// #define OUT(x) cout<<x<<"\n"
// #define OUTT(x,y) cout<<x<<" "<<y<<"\n" 

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
// #define AI(v)           for(ll &tmp:v) cin>>tmp
// #define AO(v)           for(ll tmp:v) cout<<tmp<<" "

// using namespace std;

// ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


// int main(){
//     string s;
//     IN(s);
//     map<char,ll> mp;
//     ll b_count=0;
//     ll b_max=0;
//     for (ll i = 0; i < s.size(); i++)
//     {
//         if(s[i]!='b'){
//             b_max=max(b_max,b_count);
//             b_count=0;
//         }
//         else
//         {
//             b_count++;
//         }
//         mp[s[i]]++;
//     }
//     ll ans=max(mp['b'],mp['a']+b_max);
//     OUT(ans);
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
    string s;
    IN(s);
    ll a=0,b=0;
    ll sz=s.size();
    ll fqa[sz];
    ll fqb[sz];
    for (ll i = 0; i < sz; i++)
    {
        if(s[i]=='a') a++;
        else b++;
        fqa[i]=a;
        fqb[i]=b;
    }
    ll ans=0;

    for (ll i = -1; i < sz; i++)
    {
        ll cnt;
        for (ll j = i+1; j < sz; j++)
        {
            if(i==-1){
                cnt=fqb[j]+fqa[sz-1]-fqa[j];
            }
            else
            {
                cnt=fqa[i]+fqb[j]-fqb[i]+fqa[sz-1]-fqa[j];
            }
            ans=max(cnt, ans);
        }
        if(i==sz-1) ans=max(fqa[i],ans);
       
    }
    OUT(ans);
    
    return 0;
}