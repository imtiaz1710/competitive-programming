// #include <bits/stdc++.h>
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);

// #define ll long long
// #define US unsigned short int
// #define MP make_pair
// #define FS first
// #define SD second
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
//     //fin;
//     ll T;
//     cin>>T;
//     while(T--){
//        ll n;
//        cin>>n;
//        string s;
//        IN(s);
//        map<char,ll> mp;
//        vector<ll> v;
//        mp[s[0]]++;
//        for (ll i = 1; i < n; i++)
//        {
//            if(mp[s[i]] ){
//                mp[s[i]]++;
//            }
//            else
//            {
//                v.push_back(mp[s[i-1]]);
//                mp.clear();
//                mp[s[i]]++;
//            }
//        }
//        v.push_back(mp[s[n-1]]);
//     //    for(auto tmp:v){
//     //        OUT(tmp);
//     //    }
//        ll mx=*max_element(v.begin(),v.end());
//        OUT(mx);
//        for (ll i = 0; i < v.size(); i++)
//        {
//            ll cnt=0;
//            while (v[i])
//            {
//                v[i]--;
//                cnt++;
//                OU(cnt);
//            }
           
//        }
//        LN;
       
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
   // fin; 
    ll T;
    cin>>T;
    while(T--){
        ll n;
        string s;
        INN(n,s);
        deque<ll> one;
        deque<ll> zero;
        vector <ll> res(n);
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                if(one.empty()){
                    cnt++;
                    zero.push_back(cnt);
                    res[i]=cnt;
                }
                else
                {
                    res[i]=one.back();
                    one.pop_back();
                    zero.push_back(res[i]);
                }
                
            }
            else
            {
                if(zero.empty())
                {
                    cnt++;
                    one.push_back(cnt);
                    res[i]=cnt;
                }
                else{
                    res[i]=zero.back();
                    zero.pop_back();
                    one.push_back(res[i]);
                }
            }
            
        }
        OUT(cnt);
        AO(res);
        LN; 
    }
    return 0;
}