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
    string s="";
    for (ll i = 0; i < (ll)ceil(n/2.0); i++)
    {
        if(i&1) s+="aa";
        else s+="bb";
    }
    if(s.size()!=n) s.pop_back();
    cout<<s<<endl;
    return 0;
}