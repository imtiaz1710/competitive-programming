#include <bits/stdc++.h>
#define ll long long
#define us unsigned short ll
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll large=a[0];
    ll cnt=0;
    for (ll i = 0; i < n; i++)
    {
        if(a[i]<large)
        {
            cnt+=large-a[i];
        }
        else
        {
            large=a[i];
        }
        
    }
    cout<<cnt<<endl;
    return 0;
}