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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll first,last;
    first=last=0;
    for (ll i = 0; i < n and a[i]==a[0]; i++)
    {
        first++;
    }
    for (ll i = n-1; i >=0 and a[i]==a[n-1]; i--)
    {
        last++;
    }
    if(first==n){
        cout<<0<<endl;
    }
    else 
    cout<<n-first-last<<endl;
    
    return 0;
}