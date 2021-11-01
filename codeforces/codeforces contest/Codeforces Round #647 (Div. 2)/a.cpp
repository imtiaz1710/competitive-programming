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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        if (a > b)
            swap(a, b);
        ll cnt = 0;
        bool f=0;
        while (b%2==0)
        {
            b/=2;
            if(b==a) f=1;
            if(b<a) break;
            cnt++;
        }
        
        if (f)
        {
            ll res=cnt/3;
            cnt=cnt%3;
            res+=cnt/2;
            cnt=cnt%2;
            res+=cnt;
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}