#include <bits/stdc++.h>
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);

#define ll long long
#define US unsigned short int
#define MP make_pair
#define PLL pair<ll,ll>
#define FS first 
#define SD second
#define LN cout<<"\n"
#define PB push_back
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
#define PA(v)           for(ll tmp:v) cout<<tmp<<" "

    using namespace std;

ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


int main(){
   fin;
    ll T;
    cin>>T;
    while(T--){
        string s1,s2;
        cin>>s1>>s2;
        vector <PLL> res1,res2;
        ll cnt=0;
        for (ll i = 0; i < s1.size(); i++)
        {
            
            cnt++;;
            if(i+1==s1.size() or s1[i]!=s1[i+1]){
                res1.push_back(MP(s1[i], cnt));
                cnt=0;
            }      
        }

        for (ll i = 0; i < s2.size() ; i++)
        {
            cnt++;
            if (i + 1 == s2.size() or s2[i] != s2[i + 1])
            {
                res2.push_back(MP(s2[i], cnt));
                cnt = 0;
            }
        }
       
        if(res1.size()!=res2.size()){
            NO;
        }
        else
        {
            bool f=0;
            for (ll i = 0; i < res1.size(); i++)
            {
                if(res1[i].SD>res2[i].SD or res1[i].FS!=res2[i].FS) {
                    f=1;
                    break;
                }
            }
            if(f) NO;
            else YES;
        }
        
        
    }
    return 0;
}