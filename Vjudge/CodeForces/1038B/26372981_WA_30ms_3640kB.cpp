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
    ll n;
    cin >> n;
    if ((n / 2) & 1 or n % 2 == 0)
    {
        cout<<"Yes"<<endl;
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << endl;
        else
            cout << n / 2 << " " << n / 2 +1<< endl;
        for (ll i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (ll i = 1; i <= n; i+=2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}