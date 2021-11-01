#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 500
using namespace std;

int n;
int g[maxn][maxn];
int dp[maxn][maxn];

void print()
{
    int j = 1;
    while (j <= n)
    {
        for (int i = 1; i <= j; i++)
        {
            cout<< g[j][i]<<" ";
        }
        cout<<endl;
        j++;
    }
    j = n - 1;
    while (j)
    {
        for (int i = 1; i <= j; i++)
        {
            cout<< g[2 * n - j][i]<<" ";
        }
        cout<<endl;
        j--;
    }
}

void clean()
{
    memset(dp,-1,sizeof dp);
    memset(g,-1,sizeof g);
}

int max_sum(int id,int col)
{
    if(id==n*2-1) return g[id][1];
    if(dp[id][col]!=-1) return dp[id][col];
    int ans=0;
    if(id<n)
    {
        ans=max(ans,g[id][col]+max_sum(id+1,col));
        ans=max(ans,g[id][col]+max_sum(id+1,col+1));

    }
    if(id>=n)
    {
        if(g[id+1][col]!=-1)
        ans = max(ans, g[id][col] + max_sum(id + 1, col));
        if(g[id+1][col-1]!=-1)
        ans = max(ans, g[id][col] + max_sum(id + 1, col - 1));
    }
    return dp[id][col]=ans;
}

int main(){
    //fin;
    int t;
    int tc=0;
    cin>>t;
    while (t--)
    {
        clean();
        cin>>n;
        int j=1;
        while (j<=n)
        {
            for (int i = 1; i <= j ; i++)
            {
                cin >> g[j][i];
            }
            j++;
        }
        j=n-1;
        while (j)
        {
            for (int i = 1; i <= j; i++)
            {
                cin >> g[2 * n - j][i];
               
            }
            j--;
        }
        printf("Case %d: %d\n",++tc,max_sum(1,1));
        //print();
        
          
    }
    return 0;
}