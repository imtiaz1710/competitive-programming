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


ll div(ll n)
{
    //ll sq=sqrt(n)+1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
   // fin;
    ll t;
    cin >> t;
   

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if(n%2==0)
        {
            n+=2*k;
        }
        else
        {
             n+=div(n)+(k-1)*2;
            
        }
        
       
        
        cout << n << endl;
    }

    return 0;
}