#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 300
using namespace std;
int cs;
int n;
int grid[maxn][maxn];
int dp[maxn][maxn];
int caseno[maxn][maxn];
int max_banana(int id,int row,int col)
{
    if(id==2*n-1) return grid[row][col];
    if(caseno[row][col]==cs) return dp[row][col];
    int ans=-1;
    if(id<n)
    {
        for (int i = 1; i <= id; i++)
        {
            ans=max(ans,grid[row][col]+max_banana(id+1,row+1,col));
            ans=max(ans,grid[row][col]+max_banana(id+1,row+1,col+1));
        }
        
    }
    else
    {
        for (int i = 1; i <= n - (id - n); i++)
        {
            if(col!=1)
               ans = max(ans, grid[row][col] + max_banana(id + 1, row + 1, col-1));
            if(col!=2*n-id)
                ans = max(ans, grid[row][col] + max_banana(id + 1, row + 1, col));
        }
        
    }
    caseno[row][col]=cs;
    return dp[row][col]=ans;
}
int main(){
    //fin,fout;
    int t;
    cin>>t;
    for (cs = 1; cs <= t; cs++)
    {
        cin>>n;
        for (int i = 1; i <= 2*n-1; i++)  //taking grid input
        {
            for (int j = 1; i <= n and j <= i; j++)
            {
                cin>>grid[i][j];
            }
            for (int j = 1; i > n and j <= n - (i - n); j++)
            {
                cin>>grid[i][j];
            }
            
        }
       
        printf("Case %d: %d\n",cs,max_banana(1,1,1));
    }
    
    return 0;
}