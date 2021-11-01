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
    while (t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        ll tmp=n;
        ll div=n/x;
        n=div*x;
        if(n+y<=tmp)
            cout<<n+y<<endl;
        else{
            n -= x;
            cout << n + y << endl;
        }
       
    }
    
    return 0;
}