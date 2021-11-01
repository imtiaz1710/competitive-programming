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
    //fin;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll gap = n - 1;
        ll pos = ceil((double)k / (double)gap);
        // cout<<pos<<endl;
        ll last = (pos * n) - 1;
        ll real_gap = (gap * pos - k);
        ll res = last - real_gap;
        cout << res << endl;
    }

    return 0;
}