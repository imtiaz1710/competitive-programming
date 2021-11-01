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
        ll n,sum;
       cin>>n>>sum;
       if(n==1) cout<<0<<endl;
       else if(n>2) cout<<sum*2<<endl;
       else cout<<sum<<endl;
       
    }
    
    return 0;
}