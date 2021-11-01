#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt=0;
        ll ans=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='(') cnt++;
            else
            {
                if(cnt!=0){
                    cnt--;
                }
                else
                {
                    ans++;
                }
                
            }
            
        }
        
        
        
        cout<<ans<<endl;
    }
    
    return 0;
}