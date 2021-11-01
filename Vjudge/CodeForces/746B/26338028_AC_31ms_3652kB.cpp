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
    string s;
    cin>>s;
    for (ll i = n-2; i >=0; i-=2)
    {
        cout<<s[i];
       
    }
    
     for (ll i = (n&1 ? 0:1); i < n; i += 2)
    {
         cout << s[i];
    }
   

    cout<<endl;
    return 0;
}