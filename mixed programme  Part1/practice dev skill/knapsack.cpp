#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 1000
using namespace std;

int w[maxn];
int c[maxn];
int dp[maxn][maxn];
int n;

int knapsack(int rem,int id)
{
    if(id==n) return 0;
    if(dp[rem][id]!=-1) return dp[rem][id];
    int nibo=-1,nibona=-1;
    if(rem>=w[id]){
        nibo = c[id] + knapsack(rem - w[id], id + 1);
    }
    nibona=knapsack(rem,id+1);
    return dp[rem][id]=max(nibo,nibona);
}

int main(){
    memset(dp,-1,sizeof dp);
    cin>>n;
    for (int i = 0; i < n; i++)
    cin>>w[i];
    for (int i = 0; i < n; i++)
    cin>>c[i];
    int capacity;
    cin>>capacity;
    cout<<knapsack(capacity,0)<<endl;
    
    return 0;
}