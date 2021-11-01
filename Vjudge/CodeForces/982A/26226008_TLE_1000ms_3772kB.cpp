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
    fin;
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.rbegin(), a.rend());
        ll sum = 0;
        if (a[0] == a[1])
        {
            if (a[2] % 2)
            {
                a[0]--;
            }
            a[0] -= a[2] / 2;
            a[1] -= a[2] / 2;
            sum += a[2];
            sum += min(a[0], a[1]);
        }
        else
        {
            sum += min(a[0], a[1]);
            sum += min(a[2], a[0] - a[1]);
        }
        cout << sum << endl;
    }

    return 0;
}