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


// int main(){
//     string s;
//     IN(s);
//     ll x,y;
//     INN(x,y);
//     ll zero=0,one=0;
//     for (ll i = 0; i < s.size(); i++)
//     {
//         if(s[i]=='1') one++;
//         if(s[i]=='0') zero++;
//     }

//     if(x<y)
//     {
//         ll curz=0;
//         ll curo=0;
//         for (ll i = 0; i < s.size(); i++)
//         {
//             if(s[i]=='0') curz++;
//             if(s[i]=='1') curo++;
//             if(s[i]=='?')
//             {
//                 if(curo < zero-curz)
//                 {
//                     s[i]='0';
//                     curz++;
//                     zero++;
//                 }
//                 else {
//                     s[i]='1';
//                     curo++;
//                     one++;
//                 }
//             }
//         }
        
//     }
//     else
//     {
//         ll curz=0;
//         ll curo=0;
//         for (ll i = 0; i < s.size(); i++)
//         {
//             if(s[i]=='0') curz++;
//             if(s[i]=='1') curo++;
//             if(s[i]=='?')
//             {
//                 if(one-curo < curo)
//                 {
//                     s[i]='0';
//                     zero++;
//                     curo++;
//                 }
//                 else {
//                     s[i]='1';
//                     one++;
//                     curo++;
//                 }
//             }
//         }
//     }
//    // OUT(s);
//     ll curz=0;
//     ll curo=0;
//     ll fst=0,snd=0;
//     for (ll i = 0; i < s.size(); i++)
//     {
         
//         if(s[i]=='0') {
//             curz++;
//             fst+=one-curo;
//         }
//         if(s[i]=='1') {
//             curo++;
//             fst+=curz;
//         } 

//     }
//     for (ll i = 0; i < s.size(); i++)
//     {
//         if(s[i]=='0') {
//             curz++;
//             snd+=(curo);
//         }
//         if(s[i]=='1') {
//             curo++;
//             snd+=zero-curz;
//         } 
//     }
//     OUT(fst*x+snd*y);
    
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


int main(){
    string s;
    IN(s);
    ll x,y;
    INN(x,y);
    ll zero=0,one=0;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i]=='1') one++;
        if(s[i]=='0') zero++;
    }

        ll curz=0;
        ll curo=0;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i]=='0') curz++;
            if(s[i]=='1') curo++;
            if(s[i]=='?')
            {
               ll costa=curz*x+(zero-curz)*y;
               ll costb=curo*y+(one-curo)*x;
               if(costa<costb)
               {
                   s[i]='1';
                   one++;
                   curo++;
               }
               else{
                   s[i]='0';
                   zero++;
                   curz++;
               }
            }
        }
    //OUT(s);
    curz=0;
    curo=0;
    ll fst=0,snd=0;
    for (ll i = 0; i < s.size(); i++)
    {
        
        if(s[i]=='0') {
            fst+=one-curo;
        }
        else curo++;

    }
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i]=='1') {
            snd+=zero-curz;
        }
        else curz++;
        
    }
   // OUT(snd);
    OUT(fst*x+snd*y);
    
    return 0;
}