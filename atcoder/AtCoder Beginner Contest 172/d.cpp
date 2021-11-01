#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll div_sum[n+1];
    memset(div_sum,0,sizeof div_sum);
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j+=i)
        {
            div_sum[j]++;
        }
        
    }
    ll total=0;
    for (ll i = 1; i <= n; i++)
    {
        total+=div_sum[i]*i;
    }
    
    cout<<total<<endl;
    return 0;
}