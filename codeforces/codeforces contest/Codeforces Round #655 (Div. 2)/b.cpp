#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
  //  fin;
    ll t;
    cin>>t;
    while (t-- )
    {
        ll n;
        cin>>n;
        if(n==2){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        ll sq=sqrt(n)+1;
        ll ans=10000000000;
        for (ll i = 1; i <=sq; i++)
        {
            if(n%i==0)
            {
                
                ll div=n/i;
                ll tmp=max(i,i*(div-1));
                tmp=min(tmp,max(div,div*(i-1)));
             
                ans=min(tmp,ans);
            }
        }
        cout<<ans<<" "<<n-ans<<endl;
        
    }
    
    return 0;
}