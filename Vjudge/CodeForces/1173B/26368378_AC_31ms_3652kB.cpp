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
    ll cnt = 1;
    ll step = 1;
    while (cnt < n)
    {
        step++;
        cnt += 2;
    }
    cout<<step<<endl;
    for (ll j = 1; j <= step and n; j++)
    {
        cout << 1 << " " << j << endl;
        n--;
    }
    for (ll i = step-n+1; i <= step; i++)
    {
        cout<<step<<" "<<i<<endl;
        n--;
    }
    
    
    return 0;
}