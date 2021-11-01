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
    ll n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    ll f = 0;
    for (ll i = 0; i < n - k; i++)
    {
        if (a[i] != '.' and a[i + k] != '.' and a[i + k] == a[i])
            continue;
        f = 1;
        if (a[i] == '.' and a[i + k] == '.')
            a[i] = '0', a[i + k] = '1';
        else if (a[i] == '.')
            a[i] = (a[i + k] == '1') ? '0' : '1';
        else
            a[i + k] = (a[i] == '1') ? '0' : '1';
    }

    if (f)
    {
        for (ll i = 0; i < n; i++)
        {
            if(a[i]=='.') a[i]='0';
            cout<<a[i];
        }
        
        cout<< endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}