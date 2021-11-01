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
    ll freq[n];
    map<ll,ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    freq[n-1]=1;
    m[a[n-1]]++;
    for (ll i =2 ; i <= n; i++)
    {
        freq[n-i]=freq[n-i+1];
        if(m[a[n-i]]==0) freq[n-i]++;
        m[a[n-i]]++;
    }
    
    m.clear();
    ll add=0;
    for (ll i = 0; i < n-1; i++)
    {
        if(m[a[i]]==0)
        {
            add+=freq[i+1];
        }
        m[a[i]]++;
    }
    cout<<add<<endl;
    return 0;
}