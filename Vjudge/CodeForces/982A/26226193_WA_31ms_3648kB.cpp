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
    string a;
    cin>>a;
    bool f=0;
    for (ll i = 1; i < n-1; i++)
    {
        if(a[i]=='0' and a[i-1]=='0' and a[i+1]=='0')f=1;
        if(a[i]=='1' and (a[i-1]=='1' or a[i+1]=='1' )) f=1;
    }
    if(f) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    return 0;
}