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
ll dr[4] = {-1, 1, 0, 0};
ll dc[4] = {0, 0, -1, 1};

int main()
{
    ll r, c;
    cin >> r >> c;
    char a[r][c];
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    bool f=0;
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            if(a[i][j]=='S')
            for (ll k = 0; k < 4; k++)
            {
                if(i+dr[k]>=0 and i+dr[k]<r and j+dc[k]>=0 and j+dc[k]<c)
                {
                    if(a[i+dr[k]][j+dc[k]]=='W') f=1;
                    else
                        a[i + dr[k]][j + dc[k]]='D';
                }
            }
        }
    }
    if(f) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        
    }
    

    return 0;
}