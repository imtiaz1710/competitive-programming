#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;

ll solve(ll n)
{
    return n==0 ? 0 : n+solve(n/2);
}
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    
    return 0;
}