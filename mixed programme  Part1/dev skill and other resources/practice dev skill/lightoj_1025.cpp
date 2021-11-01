#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 100
using namespace std;
string s;
ll cs;
ll caseno[maxn][maxn];
ll dp[maxn][maxn];
ll palindrome(ll i,ll j)
{
    if(caseno[i][j]==cs){
        caseno[i][j]=cs;
        return dp[i][j];
    }
    if(i==j) return 1;
    if (i > j) return 0;

    ll ans=palindrome(i+1,j)+palindrome(i,j-1)-palindrome(i+1,j-1);
    if(s[i]==s[j])
    {
        ans+=1+palindrome(i+1,j-1);
    }
    caseno[i][j]=cs;
    return dp[i][j]=ans;
}

int main(){
    //fin,fout;
    ll t;
    cin>>t;
    for (cs =1 ; cs <= t; cs++)
    {
        cin>>s;
        printf("Case %lld: %lld\n",cs,palindrome(0, s.size() - 1));
    }
    
    return 0;
}