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
        ll n,k;
        cin>>n>>k;
        ll cnt=1;
        ll prev=-1;
        while (cnt<k and prev!=n)
        {
           prev=n;
           ll mn=9;
           ll mx=0;
           ll tmp=n;
            while (tmp)
            {
                ll d=tmp%10;
                tmp/=10;
                if(d<mn) mn=d;
                if(d>mx) mx=d;
            }
            n=n+mn*mx;
           // cout<<n<<endl;
            cnt++;
        }
        cout<<n<<endl;
        
    }
    
    return 0;
}