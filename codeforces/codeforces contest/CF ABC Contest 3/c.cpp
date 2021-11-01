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
    sort(hole+2,hole+n+1); //be careful about such line
    for (ll i = 1; i <= n; i++)
    {
        f[i] = f[i - 1] + hole[i];
    }
    
    ll res;
    
    for (ll i = n; i >= 1; i--)
    {
        double x=a*hole[1];
        double y=f[i];
        double z=x/y;;
        if (z >= b)
        {
            cout<<n-i<<endl;
            return 0;
        }
       
        
    }

}