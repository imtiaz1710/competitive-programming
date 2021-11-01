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
        ll n;
        cin>>n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        
        ll i=0;
        while (i<n)
        {
            cout<<a[i]<<" ";
            i+=2;
        }
        if((n-1)%2!=1) i=n-2;
        else i=n-1;
        while (i>=1)
        {
            cout<<a[i]<<" ";
            i-=2;
        }
        cout<<endl; 
  
    return 0;
}