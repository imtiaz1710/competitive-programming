#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 1000
#define ul unsigned long long 
using namespace std;
ul dp[maxn];
ul fib(ul n)
{
    if(n==1) return dp[1]=1;
    if(n==2) return dp[2]=1;
    ul p,q;
    if(dp[n-1]==-1)
    {
        p = fib(n - 1);
        dp[n-1]=p;
        
    }
    else
    {
        p=dp[n-1];
    }
    if (dp[n - 2] == -1)
    {
        q = fib(n - 2);
        dp[n - 2] = q;
    }
    else
    {
        q=dp[n - 2];
    }
    return p+q;
}
int main(){
    memset(dp,-1,sizeof dp);
    ul a,b;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        (dp[i]==-1) ? cout<<fib(i)<<endl : cout<<dp[i]<<endl;
    }
    
    
    return 0;
}