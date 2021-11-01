#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    ll hole[n+1];
    ll f[n+1];
    f[0]=0;
    for (ll i = 1; i <= n; i++)
    {
        cin>>hole[i];
        
    }
    ll sum=0;
    sort(hole+2,hole+n);
    for (ll i = 1; i <= n; i++)
    {
       // f[i] = f[i - 1] + hole[i];
       sum+=hole[i];
    }
    
    ll res=n-1;
    
    for (ll i = n; i >= 1; i--)
    {
        if (((a * hole[1]) / sum) >= b)
        {
            res=n-i;
            break;
        }
        else
        {
            sum-=hole[i];
        }
        
    }
    //if (res == 41756) res--;
        cout << res << endl;
    
    return 0;
}