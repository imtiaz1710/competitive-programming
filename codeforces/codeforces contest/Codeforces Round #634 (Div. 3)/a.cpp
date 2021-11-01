#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
        else
         cout<<n/2<<endl;
    }
    
    return 0;
}