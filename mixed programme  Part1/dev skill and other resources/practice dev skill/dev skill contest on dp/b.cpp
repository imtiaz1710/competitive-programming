#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;

int h[50][3];
int n;
int dp[50][3];

int min_cost(int id,int pre) //using recursive dp
{
    if(id==n) return 0;
    if(pre!=-1 and dp[id][pre]!=-1) return dp[id][pre];
    int ans=100000000;
    for (int i = 0; i < 3; i++)
    {
        if(i==pre) continue;
        ans=min(ans , h[id][i] + min_cost(id+1 , i) );
    }
    return dp[id][pre]=ans;
}

int main(){
    //fin;
    int t;
    cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        memset(dp,-1,sizeof dp);
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>h[i][j];
            }
            
        }
        //cout<<min_cost(0,-1)<<endl;
        printf("Case %d: %d\n",cs,min_cost(0,-1));
    }
    
    return 0;
}