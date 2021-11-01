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
#define OUT(y) cout<<y


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
string s;
ll n;

string given="abacaba";
bool check1(ll indx)
{
    ll j=0;
    for (ll i = indx; i <= indx+6; i++)
    {
        
        //if(s[i]=='?') s[i]=given[j];
        if(given[j]!=s[i] and s[i]!='?') return false;
        j++;
    }
    
    return true;
}
bool check2(ll indx)
{
    ll j=0;
    for (ll i = indx; i <= indx+6; i++)
    {
        if(given[j]!=s[i]) return false;
        j++;
    }
    return true;
}

int main(){
    fin;
    ll T;
    cin>>T;
    while(T--){
        cin>>n;
        cin>>s;

        ll cnt=0;
        for (ll i = 0; i <= n-7; i++)
        {
            if(check2(i)) cnt++;
        }
        if(cnt>1){
            NO;
            continue;
        }
        if(cnt==1)
        {
            for (ll i = 0; i < n; i++)
            {
                if(s[i]=='?') s[i]='z';
            }
            YES;
            cout<<s<<endl; 
            continue;
        }
        bool f=0;
        for (ll i = 0; i <= n-7; i++)
        {
            if(check1(i)){
                ll k=0;
                vector <ll> v;
                for (ll j = i; j <= i+6; j++)
                {
                    if(s[j]=='?') {
                        v.push_back(j);
                        s[j]=given[k];
                    }
                    k++;
                }
                ll guno=0;
                for (ll loop = 0; loop <= n-7; loop++)
                {
                    if(check2(loop)) guno++;
                }
                if(guno>1){
                    for (ll loop1 = 0; loop1 < v.size(); loop1++)
                    {
                        s[v[loop1]]='?'; //restore
                    }
                    
                }
                if(guno==1)
               {
                   f=1;
                   break;
               }
            }
        }
        for (ll i = 0; i < s.size(); i++)
        {
                if(s[i]=='?') s[i]='z';
        }

        if(f==1){
          YES;
          cout<<s<<endl;
        }
        else
        {
            NO;
        }

    }
    return 0;
}
