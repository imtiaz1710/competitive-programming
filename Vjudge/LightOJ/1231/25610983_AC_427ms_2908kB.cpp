#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 105
using namespace std;
int cs;
int caseno[maxn][1001];
int amount[maxn];
int frequency[maxn];
int n;
int cnt;
int dp[maxn][1001];
int mod = 100000007 ;

int coin_change(int id, int rem)
{
    if(caseno[id][rem]==cs) return dp[id][rem];
    if(id==n){
        if(rem==0)
            return 1;
        else
            return 0;
    }
    int ans=0;
    for(int i=0;i<=frequency[id];i++)
    {
        if(rem-amount[id]*i >= 0)
            ans =(ans+ coin_change(id + 1, rem - amount[id] * i))%mod;
    }
    caseno[id][rem]=cs;
    return dp[id][rem]=ans;

}
int main(){
    int t;
    int k;
    cin>>t;
    for (cs = 1; cs<=t; cs++)
    {
        
        cin>>n;
        cin>>k;
        for (int i = 0; i < n; i++)
        {
            cin>>amount[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> frequency[i];
        }
        printf("Case %d: %d\n", cs, coin_change(0, k));
                
    }
    
    return 0;
}