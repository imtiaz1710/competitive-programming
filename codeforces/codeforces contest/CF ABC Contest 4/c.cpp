#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll b,g,n;
    cin>>b>>g>>n;
    ll res=n+1;
    if(b<n) res-=n-b;
    if(g<n) res-=n-g;
    cout<<res<<endl;
    return 0;
}