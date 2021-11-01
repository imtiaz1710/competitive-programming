#include <iostream>
#include <cstring>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 400
using namespace std;
int g[maxn][maxn];
int n;
int dp[maxn][maxn];
int max_sum(int id,int col)
{
    if(id==n+1) return 0;
    if(dp[id][col]!=-1) return dp[id][col];
    int ans=0;
    ans=max(ans ,g[id][col]+max_sum(id+1,col));
    ans=max(ans ,g[id][col]+max_sum(id+1,col+1));

    return dp[id][col]=ans;
}

int main(){
    memset(dp,-1,sizeof dp);
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j =1 ; j <=i; j++)
        {
            cin>>g[i][j];
        }
        
    }
    cout<<max_sum(1,1)<<endl;
    return 0;
}