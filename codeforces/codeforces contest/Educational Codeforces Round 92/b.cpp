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
    fin;
    ll T;
    cin>>T;
    while(T--){
        ll n,k,z;
        cin>>n>>k>>z;
        k++;
        vector<ll> a(n+2);
        vector<PLL> b(n+2);
        a[n+1]=b[n+1].first=0;
        a[0]=b[0].first=0;
        b[n+1].second=n+1;
        b[0].second=0;
        ll freq[n+2];
        freq[0]=0;
        for (ll i = 1; i <= n; i++)
        {
            cin>>a[i];
            b[i].second=i;
            b[i].first=a[i];
            freq[i]=freq[i-1]+a[i];
        }
        SORT(b);
        REV(b);
        ll mx=0;
        ll mx_i=0;
        
        for (ll i = 0; i < n+2; i++)
        {
            ll rem=k-b[i].second;
            rem=min(rem,z);
            if(rem>0){
                ll val=rem*b[i].first;
                val+=freq[b[i].second];
                if(val>mx) {
                    mx=val;
                    mx_i=b[i].second;
                }
            }
        }
        
        cout<<mx_i<<endl;
        ll sum=0;
        for (ll i = 1; i <=n and k ; i++)
        {
          //  cout<<a[i]<<endl;
            sum+=a[i];
            k--;
            if(k==0) break;
            if(i==mx_i and z) {
                pair<ll,ll> indx;
                if(a[i-1]>a[i+1]){
                    indx.first = i - 1;
                    indx.second=1;
                } 
                else {
                    indx.first=i+1;
                    indx.second=0;
                }
                ll cur=i;
                ll cur_indx=i;
                while (z and k)
                {
                    if (cur == i)
                    {
                        sum += a[indx.first];
                        if(indx.second) z--;
                        cur = indx.first;
                        k--;
                        cur_indx=indx.first;
                    }
                    else
                    {
                        sum += a[i];
                        if(!indx.second) z--;
                        cur = i;
                        k--;
                        cur_indx=i;
                    }  
                }
                i=cur_indx;
            }
        }
        cout<<sum<<endl;
        
    }
    return 0;
}