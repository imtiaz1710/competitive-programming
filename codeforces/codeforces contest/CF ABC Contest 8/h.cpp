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
ll n,k;
ll mark[107][107];
void row_cal(ll row,ll l,ll r,ll cnt){
    for (ll i = 1; i <=cnt; i++)
    {
        for (ll j = l; j <=l+k-1; j++)
        {
            mark[row][j]++;
        }
        l++;
    } 
}

void col_cal(ll col,ll l,ll r,ll cnt)
{
    for (ll i = 1; i <= cnt; i++)
    {
        for (ll j = l; j <=l+k-1; j++)
        {
            mark[j][col]++;
        }
        l++;
    } 
}
pair<ll,ll> ans(){
    ll mx=0;
    pair<ll,ll> res={1,1};
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if(mark[i][j]>mx){
                res={ i+1, j+1 };
                mx=mark[i][j];
            }
            
        }
        
    }
    return res;
}
int main(){
    
    INN(n,k);
    char a[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            IN(a[i][j]);
        }
    }
    map<char,ll> mp;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll l,r;
            if (a[i][j]=='.')
            {
                if (mp[a[i][j]]==0) l=j;
                mp[a[i][j]]++;
            }
            if (a[i][j]=='#' or j==n-1)
            {
                r=a[i][j]=='.'?j:j-1;
                if (mp['.']>=k) {
                    row_cal(i,l,r,mp['.']-k+1);
                }
                mp.clear();
            } 
        }
    }
        mp.clear();
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                ll l, r;
                if (a[j][i]=='.')
                {
                    if (mp[a[j][i]]==0) l=j;
                    mp[a[j][i]]++;
                }
                if (a[j][i]=='#' or j==n-1)
                {
                    r=a[i][j]=='.'?j:j-1;
                    if (mp['.']>=k) {
                        col_cal(i, l, r, mp['.']-k+1);
                    }
                    mp.clear();
                }
            }
        }
    
        OUTT(ans().first,ans().second);
    return 0;
}