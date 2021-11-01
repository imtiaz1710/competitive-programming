#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mod 100000007
using namespace std;

ll t;
vector<pair<ll,ll>> coin(105);
ll n;
ll k;
ll dp[10007][105];
ll test_case[10007][105];
ll cs;

ll fun(ll rem,ll id)
{
    if(id==n){
       return (rem==0) ? 1 : 0;
    }

    if(test_case[rem][id]==cs) {
        return dp[rem][id];
    }
    
    ll ans=0;

    for (ll i = 0; i <= coin[id].second; i++){     
        ll new_val=coin[id].first*i;

        if(rem-new_val>=0)
        {
            ans += fun(rem - new_val, id + 1);
            if(ans>=mod)
            {
                ans-=mod;
            }
        }
        
    }
    test_case[rem][id]=cs;
    return dp[rem][id]=ans;
}

int main(){
    //fastio
   //fin;
    scanf("%lld",&t);

    for(cs=1;cs<=t;cs++){
        scanf("%lld%lld",&n,&k);
        ll val;
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld",&val);
            coin[i].first=val;
            coin[i].second =k/val ;
        }
        
       

        printf("Case %lld: %lld\n",cs,fun(k,0));

    }
    
    return 0;
}