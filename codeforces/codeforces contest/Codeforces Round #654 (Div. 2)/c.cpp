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
   // fin;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        if (a < b)
            swap(a, b);
        if (b < m)
            cout << "No" << endl;
        else if (a < n and a + b - m < n)
            cout<<"No"<<endl;
        else cout << "Yes" << endl;
    }

    return 0;
}