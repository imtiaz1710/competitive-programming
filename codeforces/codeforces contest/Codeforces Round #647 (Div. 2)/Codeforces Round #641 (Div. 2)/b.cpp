#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 100009
using namespace std;
int a[maxn];
int n;
int dp[maxn];
int rec(int id) //recursive dp
{
    if (dp[id] != -1)
        return dp[id];
    int mx = 0;
    for (int i = 2 * id; i <= n; i += id)
    {
        if (a[id] < a[i])
        {
            mx = max(mx, 1 + rec(i));
        }
    }
    return dp[id] = mx;
}
int main()
{
    // fin;
    int t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof dp);
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int mx = 1;
        for (int i = 1; i <= n; i++)
        {
            mx = max(mx, 1 + rec(i));
        }

        cout << mx << endl;
    }

    return 0;
}