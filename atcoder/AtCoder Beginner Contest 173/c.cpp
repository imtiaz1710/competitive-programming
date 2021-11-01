#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;


int main()
{
    ll n, m, ele;
    cin >> n >> m >> ele;
    char a[n][m];
    char b[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    ll ans=0;
    for (ll i = 1; i <= pow(2, n); i++)
    {
        for (ll j = 1; j <= pow(2, m); j++)
        {
            for (ll loop1 = 0; loop1 < n; loop1++)
            {
                for (ll loop2 = 0; loop2 < m; loop2++)
                {
                    b[loop1][loop2]=a[loop1][loop2];
                }
                
            }
            
            for (ll k = 0; k < 6; k++)
            {
                if (i & (1 << k))
                {
                    for (ll c = 0; c < m; c++)
                    {
                        if (b[k][c] == '#')
                            b[k][c] = '.';
                    }
                }
                if (j & (1 << k))
                {
                    for (ll r = 0; r < n ; r++)
                    {
                        if (b[r][k] == '#')
                            b[r][k] = '.';
                    }
                }
            }
            ll cnt = 0;
            cout<<endl;
            for (ll loop1 = 0; loop1 < n; loop1++)
            {
                for (ll loop2 = 0; loop2 < m; loop2++)
                {
                    cout<<b[loop1][loop2];
                    if (b[loop1][loop2] == '#')
                        cnt++;
                }
                cout<<endl;
            }
            cout<<endl;
            if (ele == cnt)
                ans++;
        }
       
    }
    cout<<ans<<endl;
    return 0;
}