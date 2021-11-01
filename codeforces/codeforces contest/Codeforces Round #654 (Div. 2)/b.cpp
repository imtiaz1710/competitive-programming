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
        ll n, r;
        cin >> n >> r;
        if (n > r)
            cout <<(r*(r+1))/2<<endl;
        else
        {
            ll sum=0;
            sum=n-1;
            sum=(sum*(sum+1))/2;
            sum++;
            cout<<sum<<endl;
        }
        
    }

    return 0;
}