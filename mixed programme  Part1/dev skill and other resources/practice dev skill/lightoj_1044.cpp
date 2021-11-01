#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 1009
using namespace std;
string s;
int len;
int dp[maxn];
int cs;
int caseno[maxn];
bool is_pal(int start, int end)
{
    
    while(start<end)
    if(s[start++]!=s[end--]) return 0;

    return 1;
}
int pal_part(int id)
{
    if (id == len)
        return 0;
    if (caseno[id]==cs) return dp[id];
        
    int ans = 99999999;
    for (int i = id; i < len; i++)
    {
        if (is_pal(id, i))
        {
            ans = min(ans, 1 + pal_part(i + 1));
        }
    }
    caseno[id]=cs;
    return dp[id] = ans;
}
int main()
{
    //fin, fout;
   
    int t;
    scanf("%d",&t);
    for (cs = 1; cs <= t; cs++)
    {
       // memset(dp, -1, sizeof dp);
        cin >> s;
        len = s.size();
        printf("Case %d: %d\n", cs, pal_part(0));
    }

    return 0;
}