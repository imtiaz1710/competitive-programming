#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    string a;
    cin>>a;
    ll n=a.size();
    for (ll i = 1; i < n-1; i++)
    {
        if(a[i]=='.' or a[i+1]=='.' or a[i-1]=='.') continue;
        if(a[i]!=a[i+1] and a[i]!=a[i-1] and a[i+1]!=a[i-1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}