#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 100000
using namespace std;
int cs;
int n;
int grid[maxn][4];
int caseno[maxn][4];
int dp[maxn][4];
int fun(int id,int prevcol)
{
   
    if(id==n) return 0;
    if(caseno[id][prevcol]==cs) return dp[id][prevcol];
    int ans = 999999;
    if(id==0)
    {
        for (int i = 0; i < 3; i++)
        {
            ans=min(ans,grid[0][i]+fun(id+1,i));
        }
    }
    else
    {
        for(int i=0;i<3;i++){
            if(prevcol==i) continue;
            ans=min(ans,grid[id][i]+fun(id+1,i));
        }
    }
    caseno[id][prevcol]=cs;
    return dp[id][prevcol]=ans;
}
int main(){
    
    int t;
    cin>>t;
    for(cs=1;cs<=t;cs++)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<3;j++)
            cin>>grid[i][j];
        }
        printf("Case %d: %d\n",cs,fun(0,0));
    }
    return 0;
}